param([switch]$Export, [switch]$Regenerate, [switch]$Package, [int]$Jobs = 8,
      # Guest registers in host registers (tools/gen_regs.py, docs/REGISTER_PARAMS.md): generated_fast_regs/ and build32r/ instead of generated_fast/ and build32/.
      [switch]$RegParams, [string]$RegTarget = 'x86:3',
      [ValidateSet('x86','x64')][string]$HostArchitecture = 'x86')
$ErrorActionPreference = 'Stop'
$rawRoot = $PSScriptRoot
if ($Export) {
    & (Join-Path $rawRoot 'tools\export.ps1')
    if ($LASTEXITCODE -ne 0) { throw 'Ghidra export failed' }
}
if ($Regenerate -or -not (Test-Path -LiteralPath (Join-Path $rawRoot 'generated\dispatch.cpp'))) {
    & python (Join-Path $rawRoot 'tools\generate.py')
    if ($LASTEXITCODE -ne 0) { throw 'C++ generation failed' }
}
$fastDir = if ($RegParams) { 'generated_fast_regs' } else { 'generated_fast' }
if ($HostArchitecture -eq 'x86' -and ($Regenerate -or -not (Test-Path -LiteralPath (Join-Path $rawRoot "$fastDir\dispatch.cpp")))) {
    $generatorArguments = if ($RegParams) { @('--reg-params', $RegTarget, '--out', $fastDir) } else { @() }
    & python (Join-Path $rawRoot 'tools\generate_fast.py') @generatorArguments
    if ($LASTEXITCODE -ne 0) { throw 'Fast C++ generation failed' }
}
& python (Join-Path $rawRoot 'tools\platform_metadata.py')
if ($LASTEXITCODE -ne 0) { throw 'Guest platform metadata generation failed' }
$rawBuildName = if ($HostArchitecture -eq 'x86') { if ($RegParams) { 'build32r' } else { 'build32' } } else { 'build' }
$rawBuildPath = Join-Path $rawRoot $rawBuildName
$rawCompilerFlags = if ($HostArchitecture -eq 'x86') { '-m32 -msse2' } else { '' }
& cmake -S $rawRoot -B $rawBuildPath -G Ninja '-DCMAKE_CXX_COMPILER=clang++' '-DCMAKE_BUILD_TYPE=Release' "-DCMAKE_CXX_FLAGS=$rawCompilerFlags" "-DFAST_DIR=$fastDir"
if ($LASTEXITCODE -ne 0) { throw 'CMake configuration failed' }
& cmake --build $rawBuildPath --parallel $Jobs
if ($LASTEXITCODE -ne 0) { throw 'Raw static compilation failed' }
& ctest --test-dir $rawBuildPath --output-on-failure
if ($LASTEXITCODE -ne 0) { throw 'Raw instruction semantics validation failed' }
if ($Package) {
    if ($HostArchitecture -ne 'x86') { throw 'The launcher package is built from the x86 configuration' }
    & python (Join-Path $rawRoot 'tools\package_launcher.py') --build-dir $rawBuildPath
    if ($LASTEXITCODE -ne 0) { throw 'Packaging failed' }
}
