# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.8

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/hank08tw/Desktop/ZeroJudge/a013

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/hank08tw/Desktop/ZeroJudge/a013/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/a013.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/a013.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/a013.dir/flags.make

CMakeFiles/a013.dir/main.cpp.o: CMakeFiles/a013.dir/flags.make
CMakeFiles/a013.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/hank08tw/Desktop/ZeroJudge/a013/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/a013.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/a013.dir/main.cpp.o -c /Users/hank08tw/Desktop/ZeroJudge/a013/main.cpp

CMakeFiles/a013.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/a013.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/hank08tw/Desktop/ZeroJudge/a013/main.cpp > CMakeFiles/a013.dir/main.cpp.i

CMakeFiles/a013.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/a013.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/hank08tw/Desktop/ZeroJudge/a013/main.cpp -o CMakeFiles/a013.dir/main.cpp.s

CMakeFiles/a013.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/a013.dir/main.cpp.o.requires

CMakeFiles/a013.dir/main.cpp.o.provides: CMakeFiles/a013.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/a013.dir/build.make CMakeFiles/a013.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/a013.dir/main.cpp.o.provides

CMakeFiles/a013.dir/main.cpp.o.provides.build: CMakeFiles/a013.dir/main.cpp.o


# Object files for target a013
a013_OBJECTS = \
"CMakeFiles/a013.dir/main.cpp.o"

# External object files for target a013
a013_EXTERNAL_OBJECTS =

a013: CMakeFiles/a013.dir/main.cpp.o
a013: CMakeFiles/a013.dir/build.make
a013: CMakeFiles/a013.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/hank08tw/Desktop/ZeroJudge/a013/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable a013"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/a013.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/a013.dir/build: a013

.PHONY : CMakeFiles/a013.dir/build

CMakeFiles/a013.dir/requires: CMakeFiles/a013.dir/main.cpp.o.requires

.PHONY : CMakeFiles/a013.dir/requires

CMakeFiles/a013.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/a013.dir/cmake_clean.cmake
.PHONY : CMakeFiles/a013.dir/clean

CMakeFiles/a013.dir/depend:
	cd /Users/hank08tw/Desktop/ZeroJudge/a013/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/hank08tw/Desktop/ZeroJudge/a013 /Users/hank08tw/Desktop/ZeroJudge/a013 /Users/hank08tw/Desktop/ZeroJudge/a013/cmake-build-debug /Users/hank08tw/Desktop/ZeroJudge/a013/cmake-build-debug /Users/hank08tw/Desktop/ZeroJudge/a013/cmake-build-debug/CMakeFiles/a013.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/a013.dir/depend

