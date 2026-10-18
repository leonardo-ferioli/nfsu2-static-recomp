$ErrorActionPreference = 'Stop'
$rawRoot = Split-Path -Parent $PSScriptRoot
$projectRoot = Split-Path -Parent $rawRoot
$originalArgs = Get-Content -LiteralPath (Join-Path $projectRoot 'nfsu2_java.args')
$classPath = $originalArgs[[Array]::IndexOf($originalArgs, '-classpath') + 1].Trim('"')
$projectFile = $originalArgs[[Array]::IndexOf($originalArgs, '--project') + 1]
$ghidraHomeLine = $originalArgs | Where-Object { $_.StartsWith('-Dghidra.home=') } | Select-Object -First 1
$ghidraHomePath = $ghidraHomeLine.Substring('-Dghidra.home='.Length)
$sourceProjectDir = Split-Path -Parent $projectFile
$sourceProjectName = [IO.Path]::GetFileNameWithoutExtension($projectFile)
$analysisDir = Join-Path $rawRoot 'analysis'
$classesDir = Join-Path $PSScriptRoot 'classes'
$exportDir = Join-Path $rawRoot 'export'
New-Item -ItemType Directory -Force -Path $analysisDir,$classesDir,$exportDir,(Join-Path $rawRoot 'logs') | Out-Null
if (-not (Test-Path -LiteralPath (Join-Path $analysisDir "$sourceProjectName.rep"))) {
    Copy-Item -LiteralPath (Join-Path $sourceProjectDir "$sourceProjectName.rep") -Destination (Join-Path $analysisDir "$sourceProjectName.rep") -Recurse
    Copy-Item -LiteralPath $projectFile -Destination (Join-Path $analysisDir "$sourceProjectName.gpr")
}
& javac -cp $classPath -d $classesDir (Join-Path $PSScriptRoot 'RawExport.java')
if ($LASTEXITCODE -ne 0) { throw 'Java exporter compilation failed' }
$exportArguments = @(
    '-Xmx3g', '-Djava.awt.headless=true', "-Dghidra.home=$ghidraHomePath", '-classpath',
    ('"' + $classPath + ';' + $classesDir.Replace('\','/') + '"'),
    'RawExport', ('"' + $ghidraHomePath + '"'), ('"' + $analysisDir.Replace('\','/') + '"'),
    $sourceProjectName, ('"' + $exportDir.Replace('\','/') + '"'),
    ('"' + (Join-Path $PSScriptRoot 'disassembly_seeds.json').Replace('\','/') + '"')
)
$exportArgsFile = Join-Path $PSScriptRoot 'export_java.args'
[IO.File]::WriteAllLines($exportArgsFile, $exportArguments, [Text.UTF8Encoding]::new($false))
& java ('@' + $exportArgsFile)
if ($LASTEXITCODE -ne 0) { throw 'Read-only Ghidra instruction export failed' }
