# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.25

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\CMake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\CMake\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Carpeta de Trabajo\Repositorio Local\TO\TO_UNSA\lab3"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Carpeta de Trabajo\Repositorio Local\TO\TO_UNSA\lab3\build"

# Include any dependencies generated for this target.
include CMakeFiles/arrayStack_test.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/arrayStack_test.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/arrayStack_test.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/arrayStack_test.dir/flags.make

CMakeFiles/arrayStack_test.dir/arrayStack_test.cc.obj: CMakeFiles/arrayStack_test.dir/flags.make
CMakeFiles/arrayStack_test.dir/arrayStack_test.cc.obj: CMakeFiles/arrayStack_test.dir/includes_CXX.rsp
CMakeFiles/arrayStack_test.dir/arrayStack_test.cc.obj: C:/Carpeta\ de\ Trabajo/Repositorio\ Local/TO/TO_UNSA/lab3/arrayStack_test.cc
CMakeFiles/arrayStack_test.dir/arrayStack_test.cc.obj: CMakeFiles/arrayStack_test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Carpeta de Trabajo\Repositorio Local\TO\TO_UNSA\lab3\build\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/arrayStack_test.dir/arrayStack_test.cc.obj"
	C:\Strawberry\c\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/arrayStack_test.dir/arrayStack_test.cc.obj -MF CMakeFiles\arrayStack_test.dir\arrayStack_test.cc.obj.d -o CMakeFiles\arrayStack_test.dir\arrayStack_test.cc.obj -c "C:\Carpeta de Trabajo\Repositorio Local\TO\TO_UNSA\lab3\arrayStack_test.cc"

CMakeFiles/arrayStack_test.dir/arrayStack_test.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/arrayStack_test.dir/arrayStack_test.cc.i"
	C:\Strawberry\c\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Carpeta de Trabajo\Repositorio Local\TO\TO_UNSA\lab3\arrayStack_test.cc" > CMakeFiles\arrayStack_test.dir\arrayStack_test.cc.i

CMakeFiles/arrayStack_test.dir/arrayStack_test.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/arrayStack_test.dir/arrayStack_test.cc.s"
	C:\Strawberry\c\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Carpeta de Trabajo\Repositorio Local\TO\TO_UNSA\lab3\arrayStack_test.cc" -o CMakeFiles\arrayStack_test.dir\arrayStack_test.cc.s

# Object files for target arrayStack_test
arrayStack_test_OBJECTS = \
"CMakeFiles/arrayStack_test.dir/arrayStack_test.cc.obj"

# External object files for target arrayStack_test
arrayStack_test_EXTERNAL_OBJECTS =

arrayStack_test.exe: CMakeFiles/arrayStack_test.dir/arrayStack_test.cc.obj
arrayStack_test.exe: CMakeFiles/arrayStack_test.dir/build.make
arrayStack_test.exe: lib/libgtest_main.a
arrayStack_test.exe: lib/libgtest.a
arrayStack_test.exe: CMakeFiles/arrayStack_test.dir/linkLibs.rsp
arrayStack_test.exe: CMakeFiles/arrayStack_test.dir/objects1
arrayStack_test.exe: CMakeFiles/arrayStack_test.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Carpeta de Trabajo\Repositorio Local\TO\TO_UNSA\lab3\build\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable arrayStack_test.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\arrayStack_test.dir\link.txt --verbose=$(VERBOSE)
	"C:\Program Files\CMake\bin\cmake.exe" -D TEST_TARGET=arrayStack_test -D "TEST_EXECUTABLE=C:/Carpeta de Trabajo/Repositorio Local/TO/TO_UNSA/lab3/build/arrayStack_test.exe" -D TEST_EXECUTOR= -D "TEST_WORKING_DIR=C:/Carpeta de Trabajo/Repositorio Local/TO/TO_UNSA/lab3/build" -D TEST_EXTRA_ARGS= -D TEST_PROPERTIES= -D TEST_PREFIX= -D TEST_SUFFIX= -D TEST_FILTER= -D NO_PRETTY_TYPES=FALSE -D NO_PRETTY_VALUES=FALSE -D TEST_LIST=arrayStack_test_TESTS -D "CTEST_FILE=C:/Carpeta de Trabajo/Repositorio Local/TO/TO_UNSA/lab3/build/arrayStack_test[1]_tests.cmake" -D TEST_DISCOVERY_TIMEOUT=5 -D TEST_XML_OUTPUT_DIR= -P "C:/Program Files/CMake/share/cmake-3.25/Modules/GoogleTestAddTests.cmake"

# Rule to build all files generated by this target.
CMakeFiles/arrayStack_test.dir/build: arrayStack_test.exe
.PHONY : CMakeFiles/arrayStack_test.dir/build

CMakeFiles/arrayStack_test.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\arrayStack_test.dir\cmake_clean.cmake
.PHONY : CMakeFiles/arrayStack_test.dir/clean

CMakeFiles/arrayStack_test.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Carpeta de Trabajo\Repositorio Local\TO\TO_UNSA\lab3" "C:\Carpeta de Trabajo\Repositorio Local\TO\TO_UNSA\lab3" "C:\Carpeta de Trabajo\Repositorio Local\TO\TO_UNSA\lab3\build" "C:\Carpeta de Trabajo\Repositorio Local\TO\TO_UNSA\lab3\build" "C:\Carpeta de Trabajo\Repositorio Local\TO\TO_UNSA\lab3\build\CMakeFiles\arrayStack_test.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/arrayStack_test.dir/depend

