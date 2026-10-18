import ghidra.GhidraApplicationLayout;
import ghidra.framework.Application;
import ghidra.framework.HeadlessGhidraApplicationConfiguration;
import ghidra.base.project.GhidraProject;
import ghidra.app.cmd.disassemble.DisassembleCommand;
import ghidra.program.model.listing.*;
import ghidra.program.model.address.*;
import ghidra.program.model.lang.Register;
import ghidra.program.model.mem.MemoryBlock;
import ghidra.program.model.mem.MemoryAccessException;
import ghidra.program.model.pcode.*;
import ghidra.util.task.TaskMonitor;
import com.google.gson.*;
import java.io.*;
import java.nio.file.*;
import java.util.*;
import java.util.zip.GZIPOutputStream;
import java.util.regex.*;

/** Instruction-level SLEIGH export. Analysis edits stay in memory; no original code is executed. */
public class RawExport {
    private static final Gson JSON = new Gson();
    private static JsonArray node(Varnode v) {
        if (v == null) return null;
        JsonArray a = new JsonArray();
        a.add(v.getAddress().getAddressSpace().getName());
        a.add(Long.toUnsignedString(v.getOffset(), 16));
        a.add(v.getSize());
        return a;
    }
    /** Recover absolute indexed switch targets to a fixed point, entirely offline. */
    private static JsonArray recoverSwitches(Program p) throws IOException {
        JsonArray results = new JsonArray();
        Set<Long> attempted = new HashSet<>();
        Pattern tablePattern = Pattern.compile("\\*0x4 \\+ (0x[0-9a-fA-F]+)");
        AddressSpace space = p.getAddressFactory().getDefaultAddressSpace();
        int tx = p.startTransaction("Recover static indexed branch destinations");
        boolean success = false;
        try {
            for (int pass = 0; pass < 32; pass++) {
                Map<Long,JsonObject> pending = new TreeMap<>();
                InstructionIterator instructions = p.getListing().getInstructions(true);
                while (instructions.hasNext()) {
                    Instruction ins = instructions.next();
                    if (!ins.getMnemonicString().equals("JMP")) continue;
                    Matcher matcher = tablePattern.matcher(ins.toString());
                    if (!matcher.find()) continue;
                    long table = Long.decode(matcher.group(1));
                    if (p.getMemory().getBlock(space.getAddress(table)) == null) continue;
                    int limit = table == 0x700499L ? 8 : 512;
                    for (int index = 0; index < limit; index++) {
                        long destination;
                        try {destination = Integer.toUnsignedLong(p.getMemory().getInt(space.getAddress(table + index*4L)));}
                        catch (MemoryAccessException unavailable) {break;}
                        Address address = space.getAddress(destination);
                        MemoryBlock block = p.getMemory().getBlock(address);
                        if (block == null || !block.isExecute()) break;
                        if (p.getListing().getInstructionAt(address) != null || attempted.contains(destination)) continue;
                        JsonObject evidence = new JsonObject();
                        evidence.addProperty("address", address.toString());
                        evidence.addProperty("jump_instruction", ins.getAddress().toString());
                        evidence.addProperty("table", Long.toHexString(table));
                        evidence.addProperty("index", index);
                        evidence.addProperty("bounds", table == 0x700499L ? "reviewed: 8 entries" : "candidate contiguous in-text pointers; scan capped at 512");
                        pending.putIfAbsent(destination, evidence);
                    }
                }
                if (pending.isEmpty()) {success = true;return results;}
                int decoded = 0;
                for (Map.Entry<Long,JsonObject> entry : pending.entrySet()) {
                    attempted.add(entry.getKey());
                    Address address = space.getAddress(entry.getKey());
                    DisassembleCommand command = new DisassembleCommand(address, null, true);
                    command.enableCodeAnalysis(false);
                    if (p.getListing().getInstructionAt(address) == null) command.applyTo(p, TaskMonitor.DUMMY);
                    boolean accepted = p.getListing().getInstructionAt(address) != null;
                    entry.getValue().addProperty("decoded", accepted);
                    entry.getValue().addProperty("diagnostic", command.getStatusMsg());
                    results.add(entry.getValue());
                    if (accepted) decoded++;
                }
                System.out.println("Static switch pass " + pass + ": recovered=" + decoded + " candidates=" + pending.size());
            }
            throw new IOException("Static switch discovery did not converge within 32 passes");
        } finally {p.endTransaction(tx, success);}
    }
    public static void main(String[] args) throws Exception {
        Application.initializeApplication(new GhidraApplicationLayout(new File(args[0])),
            new HeadlessGhidraApplicationConfiguration());
        Path out = Path.of(args[3]);
        Files.createDirectories(out);
        GhidraProject project = GhidraProject.openProject(args[1], args[2], false);
        try {
            Program p = project.openProgram("/", "SPEED2.EXE", true);
            JsonArray seeds = new JsonArray();
            JsonArray seedResults = new JsonArray();
            if (args.length > 4) {
                seeds = JsonParser.parseString(Files.readString(Path.of(args[4]))).getAsJsonArray();
                int tx = p.startTransaction("Decode evidence-backed static entry points");
                boolean success = false;
                try {
                    for (JsonElement seed : seeds) {
                        JsonObject request = seed.getAsJsonObject();
                        if (!request.get("input_sha256").getAsString().equalsIgnoreCase(p.getExecutableSHA256()))
                            throw new IOException("Seed input identity mismatch");
                        Address address = p.getAddressFactory().getDefaultAddressSpace().getAddress(
                            Long.decode(request.get("address").getAsString()));
                        if (!p.getMemory().getBlock(address).isExecute())
                            throw new IOException("Disassembly seed is outside executable input: " + address);
                        // A runtime observation (the game really branched here) outranks an earlier misaligned decode:
                        // instructions overlapping the first 16 bytes are cleared in this in-memory copy, the observed
                        // entry is decoded with its flow, and every displaced instruction start that is still free is decoded again.
                        boolean observed = request.has("classification") && request.get("classification").getAsString().startsWith("OBSERVED");
                        List<Address> displaced = new ArrayList<>();
                        if (observed && p.getListing().getInstructionAt(address) == null) {
                            Instruction containing = p.getListing().getInstructionContaining(address);
                            Address from = containing != null ? containing.getMinAddress() : address;
                            InstructionIterator old = p.getListing().getInstructions(new AddressSet(from, address.add(15)), true);
                            while (old.hasNext()) displaced.add(old.next().getMinAddress());
                            p.getListing().clearCodeUnits(from, address.add(15), false);
                        }
                        DisassembleCommand command = new DisassembleCommand(address, null, true);
                        command.enableCodeAnalysis(false);
                        command.applyTo(p, TaskMonitor.DUMMY);
                        boolean decoded = p.getListing().getInstructionAt(address) != null;
                        for (Address start : displaced) {
                            if (p.getListing().getInstructionContaining(start) == null) {
                                DisassembleCommand again = new DisassembleCommand(start, null, true);
                                again.enableCodeAnalysis(false);
                                again.applyTo(p, TaskMonitor.DUMMY);
                            }
                        }
                        JsonObject result = new JsonObject();result.addProperty("address", address.toString());
                        result.addProperty("decoded", decoded);result.addProperty("diagnostic", command.getStatusMsg());
                        seedResults.add(result);
                        if (!decoded && (!request.has("required") || request.get("required").getAsBoolean()))
                            throw new IOException("Cannot decode required static seed " + address + ": " + command.getStatusMsg());
                        System.out.println((decoded ? "Decoded static entry " : "Rejected candidate ") + address);
                    }
                    success = true;
                } finally {p.endTransaction(tx, success);}
            }
            JsonObject manifest = new JsonObject();
            manifest.add("automatic_indexed_disassembly", recoverSwitches(p));
            manifest.add("additional_disassembly_seeds", seeds);
            manifest.add("additional_disassembly_results", seedResults);
            manifest.addProperty("program", p.getName());
            manifest.addProperty("input_sha256", p.getExecutableSHA256());
            manifest.addProperty("language", p.getLanguageID().toString());
            manifest.addProperty("image_base", p.getImageBase().getOffset());
            JsonArray registers = new JsonArray();
            for (Register r : p.getLanguage().getRegisters()) {
                JsonObject o = new JsonObject(); o.addProperty("name",r.getName());
                o.addProperty("offset",r.getAddress().getOffset());
                o.addProperty("size",r.getMinimumByteSize()); registers.add(o);
            }
            manifest.add("registers", registers);
            JsonObject userops = new JsonObject();
            for (int i=0;i<p.getLanguage().getNumberOfUserDefinedOpNames();i++)
                userops.addProperty(Integer.toString(i),p.getLanguage().getUserDefinedOpName(i));
            manifest.add("userops", userops);
            JsonArray blocks = new JsonArray();
            for (MemoryBlock b : p.getMemory().getBlocks()) {
                JsonObject o = new JsonObject();o.addProperty("name",b.getName());
                o.addProperty("start",b.getStart().getOffset());o.addProperty("size",b.getSize());
                o.addProperty("execute",b.isExecute());o.addProperty("initialized",b.isInitialized());blocks.add(o);
                if (b.isInitialized() && !b.getStart().getAddressSpace().isExternalSpace()) {
                    Path file=out.resolve("memory_"+Long.toHexString(b.getStart().getOffset())+".bin");
                    try(InputStream in=b.getData(); OutputStream stream=Files.newOutputStream(file)) {in.transferTo(stream);}
                    o.addProperty("file",file.getFileName().toString());
                }
            }
            manifest.add("memory",blocks);
            JsonArray functions = new JsonArray();
            FunctionIterator fi=p.getFunctionManager().getFunctions(true);
            while(fi.hasNext()) {
                Function f=fi.next();JsonObject o=new JsonObject();
                o.addProperty("entry",f.getEntryPoint().getOffset());o.addProperty("name",f.getName());
                o.addProperty("size",f.getBody().getNumAddresses());o.addProperty("external",f.isExternal());
                JsonArray ranges=new JsonArray();
                AddressRangeIterator ri=f.getBody().getAddressRanges();
                while(ri.hasNext()){AddressRange r=ri.next();JsonArray a=new JsonArray();
                    a.add(r.getMinAddress().getOffset());a.add(r.getMaxAddress().getOffset());ranges.add(a);}
                o.add("ranges",ranges);functions.add(o);
            }
            manifest.add("functions",functions);
            Map<String,Long> hist=new TreeMap<>();Map<String,Long> userhist=new TreeMap<>();
            long count=0,bytes=0,ops=0;JsonArray errors=new JsonArray();
            try(BufferedWriter w=new BufferedWriter(new OutputStreamWriter(new GZIPOutputStream(
                    Files.newOutputStream(out.resolve("instructions.jsonl.gz")),1024*1024),java.nio.charset.StandardCharsets.UTF_8),1024*1024)) {
                InstructionIterator it=p.getListing().getInstructions(true);
                while(it.hasNext()) {
                    Instruction ins=it.next();
                    if(!ins.getAddress().getAddressSpace().equals(p.getAddressFactory().getDefaultAddressSpace()))continue;
                    JsonObject o=new JsonObject();o.addProperty("a",ins.getAddress().getOffset());
                    o.addProperty("n",ins.getLength());o.addProperty("asm",ins.toString());JsonArray pc=new JsonArray();
                    try {
                        for(PcodeOp op:ins.getPcode()) {
                            JsonArray a=new JsonArray();String mn=op.getMnemonic();a.add(mn);a.add(node(op.getOutput()));
                            for(Varnode v:op.getInputs())a.add(node(v));pc.add(a);
                            hist.merge(mn,1L,Long::sum);ops++;
                            if(op.getOpcode()==PcodeOp.CALLOTHER) {
                                int id=(int)op.getInput(0).getOffset();
                                userhist.merge(p.getLanguage().getUserDefinedOpName(id),1L,Long::sum);
                            }
                        }
                    } catch(Exception e) {JsonObject er=new JsonObject();er.addProperty("a",ins.getAddress().getOffset());
                        er.addProperty("error",e.toString());errors.add(er);o.addProperty("error",e.toString());}
                    o.add("p",pc);w.write(JSON.toJson(o));w.newLine();count++;bytes+=ins.getLength();
                    if(count%50000==0)System.out.println("Exported "+count+" instructions / "+ops+" P-code ops");
                }
            }
            manifest.addProperty("instruction_count",count);manifest.addProperty("instruction_bytes",bytes);
            manifest.addProperty("pcode_count",ops);manifest.add("opcodes",JSON.toJsonTree(hist));
            manifest.add("userop_counts",JSON.toJsonTree(userhist));manifest.add("export_errors",errors);
            Files.writeString(out.resolve("manifest.json"),new GsonBuilder().setPrettyPrinting().create().toJson(manifest));
            System.out.println("DONE functions="+functions.size()+" instructions="+count+" ops="+ops+" errors="+errors.size());
        } finally {project.close();}
    }
}
