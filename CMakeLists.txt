cmake_minimum_required(VERSION 3.12)
project(foghornsupport C)

include_directories(include)

add_library(foghornsupport STATIC
        src/glob.c
        src/gnu_extensions.c
        )

INSTALL(TARGETS foghornsupport
        LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}/lib
        ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}/lib)

INSTALL(FILES
        include/execinfo.h
        include/glob.h
        DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/include)
