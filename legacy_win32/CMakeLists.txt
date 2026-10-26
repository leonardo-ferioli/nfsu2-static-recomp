# legacy_win32: the Win32 subset and DirectInput of a translated 32-bit game, as a library with no dependence on the host OS (see
# docs/NUE_HANDOVER_WIN32_DINPUT.md). It builds on its own (cmake -S legacy_win32 -B build_w64) or from the repository root.
#
# Targets
#   nfsu2_platform_std   the platform interfaces implemented over the C++ standard library, and the null (deterministic) implementations
#   legacy_win32         Level A modules (time, text, registry, process, memory, sync, files, window, dinput)
#   legacy_win32_tests   headless tests; ctest runs one entry per module
if(CMAKE_SOURCE_DIR STREQUAL CMAKE_CURRENT_SOURCE_DIR)
    cmake_minimum_required(VERSION 3.20)
    project(legacy_win32 LANGUAGES CXX)
    set(CMAKE_CXX_STANDARD 20)
    set(CMAKE_CXX_STANDARD_REQUIRED ON)
    enable_testing()
endif()

set(PLATFORM_DIR "${CMAKE_CURRENT_SOURCE_DIR}/../platform")
add_library(nfsu2_platform_std STATIC
    ${PLATFORM_DIR}/storage_path.cpp
    ${PLATFORM_DIR}/std/std_clock.cpp ${PLATFORM_DIR}/std/std_threads.cpp ${PLATFORM_DIR}/std/std_storage.cpp ${PLATFORM_DIR}/std/std_config_system.cpp
    ${PLATFORM_DIR}/null/null_services.cpp ${PLATFORM_DIR}/null/null_platform.cpp)
target_include_directories(nfsu2_platform_std PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/..")

file(GLOB LEGACY_WIN32_SOURCES CONFIGURE_DEPENDS "${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp")
add_library(legacy_win32 STATIC ${LEGACY_WIN32_SOURCES})
target_include_directories(legacy_win32 PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/include")
target_link_libraries(legacy_win32 PUBLIC nfsu2_platform_std)

# Host backends: the real operating system behind the Level A interfaces (Windows only for now).
if(WIN32)
    file(GLOB LEGACY_WIN32_HOST_SOURCES CONFIGURE_DEPENDS "${CMAKE_CURRENT_SOURCE_DIR}/host/*.cpp")
    add_library(legacy_win32_host STATIC ${LEGACY_WIN32_HOST_SOURCES})
    target_link_libraries(legacy_win32_host PUBLIC legacy_win32)
    target_include_directories(legacy_win32_host PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}")
    target_link_libraries(legacy_win32_host PUBLIC advapi32 user32)
endif()

file(GLOB LEGACY_WIN32_TEST_SOURCES CONFIGURE_DEPENDS "${CMAKE_CURRENT_SOURCE_DIR}/tests/*.cpp")
add_executable(legacy_win32_tests ${LEGACY_WIN32_TEST_SOURCES})
target_link_libraries(legacy_win32_tests PRIVATE legacy_win32)
if(WIN32)
    target_link_libraries(legacy_win32_tests PRIVATE legacy_win32_host advapi32 user32 winmm dinput8 dxguid)   # the differential tests compare with the real Windows API
endif()

set(LEGACY_WIN32_TEST_MODULES handles time text registry sync files window window_platform dinput process memory)
if(WIN32)
    list(APPEND LEGACY_WIN32_TEST_MODULES time_windows text_codepages_windows text_classes_windows text_collation_windows text_locale_windows text_wsprintf_windows registry_windows sync_windows files_windows window_windows dinput_windows process_windows memory_windows)
endif()
foreach(module IN LISTS LEGACY_WIN32_TEST_MODULES)
    add_test(NAME legacy_win32_${module} COMMAND legacy_win32_tests ${module})
endforeach()
