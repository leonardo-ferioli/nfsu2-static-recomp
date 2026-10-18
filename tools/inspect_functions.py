"""Read-only decompilation of VAs from the project's saved Ghidra analysis."""
from pathlib import Path
import subprocess
import sys

root = Path(__file__).resolve().parents[1]
lines=(root/'tools/export_java.args').read_text().splitlines()
cp=lines[lines.index('-classpath')+1].strip('"')
p=subprocess.run(['javac','-cp',cp,'-d',str(root/'tools/classes'),str(root/'tools/InspectFunctions.java')])
if p.returncode:sys.exit(p.returncode)
arguments=['C:/Program Files/Eclipse Adoptium/jdk-25.0.4.101-hotspot/bin/java.exe','-Xmx2g','-Djava.awt.headless=true','-cp',cp,'InspectFunctions','C:/str/ghidra_12.1.4_PUBLIC',str(root/'analysis'),'NFSU2',*sys.argv[2:]]
with Path(sys.argv[1]).open('w') as output:p=subprocess.run(arguments,stdout=output,stderr=subprocess.STDOUT)
print('Inspection exit code:',p.returncode)
sys.exit(p.returncode)
