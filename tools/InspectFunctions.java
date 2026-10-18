import ghidra.GhidraApplicationLayout;
import ghidra.framework.Application;
import ghidra.framework.HeadlessGhidraApplicationConfiguration;
import ghidra.base.project.GhidraProject;
import ghidra.program.model.listing.*;
import ghidra.app.decompiler.*;
import ghidra.util.task.TaskMonitor;
import java.io.File;

/** Evidence probe: read saved analysis and print requested original functions. */
public class InspectFunctions {
    public static void main(String[] args)throws Exception{
        Application.initializeApplication(new GhidraApplicationLayout(new File(args[0])),new HeadlessGhidraApplicationConfiguration());
        GhidraProject project=GhidraProject.openProject(args[1],args[2],false);
        try{
            Program p=project.openProgram("/","SPEED2.EXE",true);
            DecompInterface d=new DecompInterface();d.openProgram(p);
            try{for(int i=3;i<args.length;i++){
                var address=p.getAddressFactory().getDefaultAddressSpace().getAddress(Long.decode(args[i]));
                Function f=p.getFunctionManager().getFunctionContaining(address);
                if(f==null){System.out.println("NO FUNCTION "+address);continue;}
                var result=d.decompileFunction(f,60,TaskMonitor.DUMMY);
                System.out.println("FUNCTION "+f.getEntryPoint()+" "+f.getName());
                if(result.decompileCompleted())System.out.println(result.getDecompiledFunction().getC());else System.out.println(result.getErrorMessage());
            }}finally{d.dispose();}
        }finally{project.close();}
    }
}
