cmake_minimum_required(VERSION 3.21)

project(dmyaml)

list(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/cmake)
include(cmake/ModuleImport.cmake)
include(cmake/ModuleCompileOptions.cmake)
ModuleSetCompileOptions()

if ( MSVC )
    set_property( DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY VS_STARTUP_PROJECT ${PROJECT_NAME} )
endif()

add_compile_options("$<$<CXX_COMPILER_ID:MSVC>:/utf-8>")
add_compile_options("$<$<CXX_COMPILER_ID:MSVC>:/std:c++17>")

LibImport("dmyaml" "src")

if (PROJECT_IS_TOP_LEVEL)
    ExeImport("test" "dmyaml")
endif(PROJECT_IS_TOP_LEVEL)
