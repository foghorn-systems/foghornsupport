cmake_minimum_required(VERSION 3.12)
project(foghornsupport C)

include_directories(include)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)


add_library(fogsupport STATIC
        src/fassert.c
        src/getpass.c
        src/gfortran_symbols.c
        src/glob.c
        src/sethostent.c
        )
