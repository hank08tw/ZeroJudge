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
CMAKE_SOURCE_DIR = /Users/hank08tw/Desktop/高中生解題系統/a147

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/hank08tw/Desktop/高中生解題系統/a147/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/a147.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/a147.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/a147.dir/flags.make

CMakeFiles/a147.dir/main.cpp.o: CMakeFiles/a147.dir/flags.make
CMakeFiles/a147.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/hank08tw/Desktop/高中生解題系統/a147/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/a147.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/a147.dir/main.cpp.o -c /Users/hank08tw/Desktop/高中生解題系統/a147/main.cpp

CMakeFiles/a147.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/a147.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/hank08tw/Desktop/高中生解題系統/a147/main.cpp > CMakeFiles/a147.dir/main.cpp.i

CMakeFiles/a147.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/a147.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/hank08tw/Desktop/高中生解題系統/a147/main.cpp -o CMakeFiles/a147.dir/main.cpp.s

CMakeFiles/a147.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/a147.dir/main.cpp.o.requires

CMakeFiles/a147.dir/main.cpp.o.provides: CMakeFiles/a147.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/a147.dir/build.make CMakeFiles/a147.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/a147.dir/main.cpp.o.provides

CMakeFiles/a147.dir/main.cpp.o.provides.build: CMakeFiles/a147.dir/main.cpp.o


# Object files for target a147
a147_OBJECTS = \
"CMakeFiles/a147.dir/main.cpp.o"

# External object files for target a147
a147_EXTERNAL_OBJECTS =

a147: CMakeFiles/a147.dir/main.cpp.o
a147: CMakeFiles/a147.dir/build.make
a147: CMakeFiles/a147.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/hank08tw/Desktop/高中生解題系統/a147/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable a147"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/a147.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/a147.dir/build: a147

.PHONY : CMakeFiles/a147.dir/build

CMakeFiles/a147.dir/requires: CMakeFiles/a147.dir/main.cpp.o.requires

.PHONY : CMakeFiles/a147.dir/requires

CMakeFiles/a147.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/a147.dir/cmake_clean.cmake
.PHONY : CMakeFiles/a147.dir/clean

CMakeFiles/a147.dir/depend:
	cd /Users/hank08tw/Desktop/高中生解題系統/a147/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/hank08tw/Desktop/高中生解題系統/a147 /Users/hank08tw/Desktop/高中生解題系統/a147 /Users/hank08tw/Desktop/高中生解題系統/a147/cmake-build-debug /Users/hank08tw/Desktop/高中生解題系統/a147/cmake-build-debug /Users/hank08tw/Desktop/高中生解題系統/a147/cmake-build-debug/CMakeFiles/a147.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/a147.dir/depend

