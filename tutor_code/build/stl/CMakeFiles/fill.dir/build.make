# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.21

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /Applications/CMake.app/Contents/bin/cmake

# The command to remove a file.
RM = /Applications/CMake.app/Contents/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/zzzlllll/test/cmake_tutorial/tutor_code

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/zzzlllll/test/cmake_tutorial/tutor_code/build

# Include any dependencies generated for this target.
include stl/CMakeFiles/fill.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include stl/CMakeFiles/fill.dir/compiler_depend.make

# Include the progress variables for this target.
include stl/CMakeFiles/fill.dir/progress.make

# Include the compile flags for this target's objects.
include stl/CMakeFiles/fill.dir/flags.make

stl/CMakeFiles/fill.dir/alg_fill.cpp.o: stl/CMakeFiles/fill.dir/flags.make
stl/CMakeFiles/fill.dir/alg_fill.cpp.o: ../stl/alg_fill.cpp
stl/CMakeFiles/fill.dir/alg_fill.cpp.o: stl/CMakeFiles/fill.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/zzzlllll/test/cmake_tutorial/tutor_code/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object stl/CMakeFiles/fill.dir/alg_fill.cpp.o"
	cd /Users/zzzlllll/test/cmake_tutorial/tutor_code/build/stl && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT stl/CMakeFiles/fill.dir/alg_fill.cpp.o -MF CMakeFiles/fill.dir/alg_fill.cpp.o.d -o CMakeFiles/fill.dir/alg_fill.cpp.o -c /Users/zzzlllll/test/cmake_tutorial/tutor_code/stl/alg_fill.cpp

stl/CMakeFiles/fill.dir/alg_fill.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/fill.dir/alg_fill.cpp.i"
	cd /Users/zzzlllll/test/cmake_tutorial/tutor_code/build/stl && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/zzzlllll/test/cmake_tutorial/tutor_code/stl/alg_fill.cpp > CMakeFiles/fill.dir/alg_fill.cpp.i

stl/CMakeFiles/fill.dir/alg_fill.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/fill.dir/alg_fill.cpp.s"
	cd /Users/zzzlllll/test/cmake_tutorial/tutor_code/build/stl && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/zzzlllll/test/cmake_tutorial/tutor_code/stl/alg_fill.cpp -o CMakeFiles/fill.dir/alg_fill.cpp.s

# Object files for target fill
fill_OBJECTS = \
"CMakeFiles/fill.dir/alg_fill.cpp.o"

# External object files for target fill
fill_EXTERNAL_OBJECTS =

stl/fill: stl/CMakeFiles/fill.dir/alg_fill.cpp.o
stl/fill: stl/CMakeFiles/fill.dir/build.make
stl/fill: stl/CMakeFiles/fill.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/zzzlllll/test/cmake_tutorial/tutor_code/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable fill"
	cd /Users/zzzlllll/test/cmake_tutorial/tutor_code/build/stl && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/fill.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
stl/CMakeFiles/fill.dir/build: stl/fill
.PHONY : stl/CMakeFiles/fill.dir/build

stl/CMakeFiles/fill.dir/clean:
	cd /Users/zzzlllll/test/cmake_tutorial/tutor_code/build/stl && $(CMAKE_COMMAND) -P CMakeFiles/fill.dir/cmake_clean.cmake
.PHONY : stl/CMakeFiles/fill.dir/clean

stl/CMakeFiles/fill.dir/depend:
	cd /Users/zzzlllll/test/cmake_tutorial/tutor_code/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/zzzlllll/test/cmake_tutorial/tutor_code /Users/zzzlllll/test/cmake_tutorial/tutor_code/stl /Users/zzzlllll/test/cmake_tutorial/tutor_code/build /Users/zzzlllll/test/cmake_tutorial/tutor_code/build/stl /Users/zzzlllll/test/cmake_tutorial/tutor_code/build/stl/CMakeFiles/fill.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : stl/CMakeFiles/fill.dir/depend
