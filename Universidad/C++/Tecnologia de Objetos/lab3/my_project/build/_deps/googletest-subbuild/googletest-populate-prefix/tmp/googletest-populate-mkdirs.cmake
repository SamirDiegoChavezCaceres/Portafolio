# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "C:/Carpeta de Trabajo/Repositorio Local/TO/TO_UNSA/lab3/my_project/build/_deps/googletest-src"
  "C:/Carpeta de Trabajo/Repositorio Local/TO/TO_UNSA/lab3/my_project/build/_deps/googletest-build"
  "C:/Carpeta de Trabajo/Repositorio Local/TO/TO_UNSA/lab3/my_project/build/_deps/googletest-subbuild/googletest-populate-prefix"
  "C:/Carpeta de Trabajo/Repositorio Local/TO/TO_UNSA/lab3/my_project/build/_deps/googletest-subbuild/googletest-populate-prefix/tmp"
  "C:/Carpeta de Trabajo/Repositorio Local/TO/TO_UNSA/lab3/my_project/build/_deps/googletest-subbuild/googletest-populate-prefix/src/googletest-populate-stamp"
  "C:/Carpeta de Trabajo/Repositorio Local/TO/TO_UNSA/lab3/my_project/build/_deps/googletest-subbuild/googletest-populate-prefix/src"
  "C:/Carpeta de Trabajo/Repositorio Local/TO/TO_UNSA/lab3/my_project/build/_deps/googletest-subbuild/googletest-populate-prefix/src/googletest-populate-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "C:/Carpeta de Trabajo/Repositorio Local/TO/TO_UNSA/lab3/my_project/build/_deps/googletest-subbuild/googletest-populate-prefix/src/googletest-populate-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "C:/Carpeta de Trabajo/Repositorio Local/TO/TO_UNSA/lab3/my_project/build/_deps/googletest-subbuild/googletest-populate-prefix/src/googletest-populate-stamp${cfgdir}") # cfgdir has leading slash
endif()
