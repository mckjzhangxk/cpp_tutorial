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
include stl/CMakeFiles/min_element.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include stl/CMakeFiles/min_element.dir/compiler_depend.make

# Include the progress variables for this target.
include stl/CMakeFiles/min_element.dir/progress.make

# Include the compile flags for this target's objects.
include stl/CMakeFiles/min_element.dir/flags.make

stl/CMakeFiles/min_element.dir/alg_min_element.cpp.o: stl/CMakeFiles/min_element.dir/flags.make
stl/CMakeFiles/min_element.dir/alg_min_element.cpp.o: ../stl/alg_min_element.cpp
stl/CMakeFiles/min_element.dir/alg_min_element.cpp.o: stl/CMakeFiles/min_element.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/zzzlllll/test/cmake_tutorial/tutor_code/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object stl/CMakeFiles/min_element.dir/alg_min_element.cpp.o"
	cd /Users/zzzlllll/test/cmake_tutorial/tutor_code/build/stl && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT stl/CMakeFiles/min_element.dir/alg_min_element.cpp.o -MF CMakeFiles/min_element.dir/alg_min_element.cpp.o.d -o CMakeFiles/min_element.dir/alg_min_element.cpp.o -c /Users/zzzlllll/test/cmake_tutorial/tutor_code/stl/alg_min_element.cpp

stl/CMakeFiles/min_element.dir/alg_min_element.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/min_element.dir/alg_min_element.cpp.i"
	cd /Users/zzzlllll/test/cmake_tutorial/tutor_code/build/stl && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/zzzlllll/test/cmake_tutorial/tutor_code/stl/alg_min_element.cpp > CMakeFiles/min_element.dir/alg_min_element.cpp.i

stl/CMakeFiles/min_element.dir/alg_min_element.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/min_element.dir/alg_min_element.cpp.s"
	cd /Users/zzzlllll/test/cmake_tutorial/tutor_code/build/stl && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/zzzlllll/test/cmake_tutorial/tutor_code/stl/alg_min_element.cpp -o CMakeFiles/min_element.dir/alg_min_element.cpp.s

# Object files for target min_element
min_element_OBJECTS = \
"CMakeFiles/min_element.dir/alg_min_element.cpp.o"

# External object files for target min_element
min_element_EXTERNAL_OBJECTS =

stl/min_element: stl/CMakeFiles/min_element.dir/alg_min_element.cpp.o
stl/min_element: stl/CMakeFiles/min_element.dir/build.make
stl/min_element: stl/CMakeFiles/min_element.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/zzzlllll/test/cmake_tutorial/tutor_code/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable min_element"
	cd /Users/zzzlllll/test/cmake_tutorial/tutor_code/build/stl && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/min_element.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
stl/CMakeFiles/min_element.dir/build: stl/min_element
.PHONY : stl/CMakeFiles/min_element.dir/build

stl/CMakeFiles/min_element.dir/clean:
	cd /Users/zzzlllll/test/cmake_tutorial/tutor_code/build/stl && $(CMAKE_COMMAND) -P CMakeFiles/min_element.dir/cmake_clean.cmake
.PHONY : stl/CMakeFiles/min_element.dir/clean

stl/CMakeFiles/min_element.dir/depend:
	cd /Users/zzzlllll/test/cmake_tutorial/tutor_code/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/zzzlllll/test/cmake_tutorial/tutor_code /Users/zzzlllll/test/cmake_tutorial/tutor_code/stl /Users/zzzlllll/test/cmake_tutorial/tutor_code/build /Users/zzzlllll/test/cmake_tutorial/tutor_code/build/stl /Users/zzzlllll/test/cmake_tutorial/tutor_code/build/stl/CMakeFiles/min_element.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : stl/CMakeFiles/min_element.dir/depend

