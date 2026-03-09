cmake_minimum_required(VERSION 3.16)
project(wolf3d_modern_cpp LANGUAGES C CXX)

# --- Compiler configuration ----------------------------------------------------

# Set C & C++ Standards
set(CMAKE_C_STANDARD 90)
set(CMAKE_CXX_STANDARD 23)

#set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

if(UNIX AND NOT APPLE)
    add_link_options("-fuse-ld=lld")
endif()

# Source files that contain no/minimal platform dependent subsystems
file(GLOB_RECURSE WOLF3D_SAFE_SOURCES
    source/*.C
)

add_executable(wolf3d_modern_cpp ${WOLF3D_SAFE_SOURCES})

# --- Include Directories -------------------------------------------------------
target_include_directories( wolf3d_modern_cpp PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/WOLFSRC/stubbed_functions_header/ )
target_compile_definitions(wolf3d_modern_cpp PRIVATE WOLF3D_STUBS)

# --- Warnings for Clang --------------------------------------------------------
if (CMAKE_CXX_COMPILER_ID MATCHES "Clang")
    target_compile_options( wolf3d_modern_cpp PRIVATE -Wall -Wextra -Wpedantic 
    -Wno-unknown-pragmas -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function)
endif()
