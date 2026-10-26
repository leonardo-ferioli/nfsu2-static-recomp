# Stand-alone console spikes (not part of the game build): shader translation proof (docs/PLATFORM_API.md, 3.4, spike S1).
#   cmake -S spike -B build_spike -G Ninja -DCMAKE_CXX_COMPILER=clang++ -DCMAKE_BUILD_TYPE=Release -DBGFX_DIR=<third_party/bgfx.cmake/bgfx>
#   cmake --build build_spike
cmake_minimum_required(VERSION 3.20)
project(nfsu2_spikes LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
get_filename_component(REPO "${CMAKE_CURRENT_SOURCE_DIR}/.." ABSOLUTE)
set(BGFX_DIR "${REPO}/third_party/bgfx.cmake/bgfx" CACHE PATH "bgfx source (contains 3rdparty/spirv-cross)")

# SPIRV-Cross (Apache-2.0), vendored by bgfx: the cross-compiler of the shader path.
set(SPIRV_CROSS "${BGFX_DIR}/3rdparty/spirv-cross")
add_library(spirv_cross STATIC
    ${SPIRV_CROSS}/spirv_cfg.cpp ${SPIRV_CROSS}/spirv_cpp.cpp ${SPIRV_CROSS}/spirv_cross.cpp ${SPIRV_CROSS}/spirv_cross_parsed_ir.cpp
    ${SPIRV_CROSS}/spirv_cross_util.cpp ${SPIRV_CROSS}/spirv_glsl.cpp ${SPIRV_CROSS}/spirv_hlsl.cpp ${SPIRV_CROSS}/spirv_msl.cpp
    ${SPIRV_CROSS}/spirv_parser.cpp ${SPIRV_CROSS}/spirv_reflect.cpp)
target_include_directories(spirv_cross PUBLIC ${SPIRV_CROSS})

target_compile_options(spirv_cross PRIVATE -O2 -w)

# Our shader path (portable C++).
add_library(nfsu2_shader STATIC ${REPO}/nue_d3d9/src/shader/d3d9_shader.cpp ${REPO}/nue_d3d9/src/shader/d3d9_to_spirv.cpp ${REPO}/nue_d3d9/src/shader/cross_compile.cpp)
target_include_directories(nfsu2_shader PUBLIC ${REPO}/nue_d3d9/include ${REPO}/nue_d3d9/src)
target_link_libraries(nfsu2_shader PUBLIC spirv_cross)

find_library(D3DCOMPILER d3dcompiler HINTS "C:/Program Files (x86)/Windows Kits/10/Lib/10.0.26100.0/um/x64")
add_executable(shader_spike shader_spike/main.cpp)
target_link_libraries(shader_spike PRIVATE nfsu2_shader)
if(WIN32 AND D3DCOMPILER)
    target_compile_definitions(shader_spike PRIVATE HAVE_D3DCOMPILER=1)
    target_link_libraries(shader_spike PRIVATE ${D3DCOMPILER})
endif()

if(WIN32 AND D3DCOMPILER)
    # Equivalence test: Direct3D 9 (ground truth) against the translated shaders on Direct3D 11 WARP.
    find_library(D3D9_LIB d3d9 HINTS "C:/Program Files (x86)/Windows Kits/10/Lib/10.0.26100.0/um/x64")
    find_library(D3D11_LIB d3d11 HINTS "C:/Program Files (x86)/Windows Kits/10/Lib/10.0.26100.0/um/x64")
    add_executable(shader_equiv shader_spike/equiv.cpp)
    target_link_libraries(shader_equiv PRIVATE nfsu2_shader ${D3DCOMPILER} ${D3D9_LIB} ${D3D11_LIB})
endif()
