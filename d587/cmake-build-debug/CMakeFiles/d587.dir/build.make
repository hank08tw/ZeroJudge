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
CMAKE_SOURCE_DIR = /Users/hank08tw/Desktop/高中生解題系統/d587

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/hank08tw/Desktop/高中生解題系統/d587/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/d587.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/d587.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/d587.dir/flags.make

CMakeFiles/d587.dir/main.cpp.o: CMakeFiles/d587.dir/flags.make
CMakeFiles/d587.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/hank08tw/Desktop/高中生解題系統/d587/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/d587.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/d587.dir/main.cpp.o -c /Users/hank08tw/Desktop/高中生解題系統/d587/main.cpp

CMakeFiles/d587.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/d587.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/hank08tw/Desktop/高中生解題系統/d587/main.cpp > CMakeFiles/d587.dir/main.cpp.i

CMakeFiles/d587.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/d587.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/hank08tw/Desktop/高中生解題系統/d587/main.cpp -o CMakeFiles/d587.dir/main.cpp.s

CMakeFiles/d587.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/d587.dir/main.cpp.o.requires

CMakeFiles/d587.dir/main.cpp.o.provides: CMakeFiles/d587.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/d587.dir/build.make CMakeFiles/d587.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/d587.dir/main.cpp.o.provides

CMakeFiles/d587.dir/main.cpp.o.provides.build: CMakeFiles/d587.dir/main.cpp.o


# Object files for target d587
d587_OBJECTS = \
"CMakeFiles/d587.dir/main.cpp.o"

# External object files for target d587
d587_EXTERNAL_OBJECTS =

d587: CMakeFiles/d587.dir/main.cpp.o
d587: CMakeFiles/d587.dir/build.make
d587: CMakeFiles/d587.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/hank08tw/Desktop/高中生解題系統/d587/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable d587"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/d587.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/d587.dir/build: d587

.PHONY : CMakeFiles/d587.dir/build

CMakeFiles/d587.dir/requires: CMakeFiles/d587.dir/main.cpp.o.requires

.PHONY : CMakeFiles/d587.dir/requires

CMakeFiles/d587.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/d587.dir/cmake_clean.cmake
.PHONY : CMakeFiles/d587.dir/clean

CMakeFiles/d587.dir/depend:
	cd /Users/hank08tw/Desktop/高中生解題系統/d587/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/hank08tw/Desktop/高中生解題系統/d587 /Users/hank08tw/Desktop/高中生解題系統/d587 /Users/hank08tw/Desktop/高中生解題系統/d587/cmake-build-debug /Users/hank08tw/Desktop/高中生解題系統/d587/cmake-build-debug /Users/hank08tw/Desktop/高中生解題系統/d587/cmake-build-debug/CMakeFiles/d587.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/d587.dir/depend

