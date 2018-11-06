cmake_minimum_required(VERSION 3.12)
project(foghornsupport C)

include_directories(include)

add_library(foghornsupport STATIC
        src/fassert.c
        src/getpass.c
        src/gfortran_symbols.c
        src/glob.c
        src/sethostent.c
        )

INSTALL(TARGETS foghornsupport
        LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}/lib
        ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}/lib)

INSTALL(FILES
        include/execinfo.h
        include/fassert.h
        include/getpass.h
        include/glob.h
        include/sethostent.h
        DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/include)