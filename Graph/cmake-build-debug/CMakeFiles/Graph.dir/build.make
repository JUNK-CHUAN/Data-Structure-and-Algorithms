# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

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
CMAKE_SOURCE_DIR = /Users/yangxiaochuan/CLionProjects/Graph

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/yangxiaochuan/CLionProjects/Graph/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Graph.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Graph.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Graph.dir/flags.make

CMakeFiles/Graph.dir/main.cpp.o: CMakeFiles/Graph.dir/flags.make
CMakeFiles/Graph.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/yangxiaochuan/CLionProjects/Graph/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Graph.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Graph.dir/main.cpp.o -c /Users/yangxiaochuan/CLionProjects/Graph/main.cpp

CMakeFiles/Graph.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Graph.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/yangxiaochuan/CLionProjects/Graph/main.cpp > CMakeFiles/Graph.dir/main.cpp.i

CMakeFiles/Graph.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Graph.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/yangxiaochuan/CLionProjects/Graph/main.cpp -o CMakeFiles/Graph.dir/main.cpp.s

CMakeFiles/Graph.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/Graph.dir/main.cpp.o.requires

CMakeFiles/Graph.dir/main.cpp.o.provides: CMakeFiles/Graph.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/Graph.dir/build.make CMakeFiles/Graph.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/Graph.dir/main.cpp.o.provides

CMakeFiles/Graph.dir/main.cpp.o.provides.build: CMakeFiles/Graph.dir/main.cpp.o


# Object files for target Graph
Graph_OBJECTS = \
"CMakeFiles/Graph.dir/main.cpp.o"

# External object files for target Graph
Graph_EXTERNAL_OBJECTS =

Graph: CMakeFiles/Graph.dir/main.cpp.o
Graph: CMakeFiles/Graph.dir/build.make
Graph: CMakeFiles/Graph.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/yangxiaochuan/CLionProjects/Graph/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Graph"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Graph.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Graph.dir/build: Graph

.PHONY : CMakeFiles/Graph.dir/build

CMakeFiles/Graph.dir/requires: CMakeFiles/Graph.dir/main.cpp.o.requires

.PHONY : CMakeFiles/Graph.dir/requires

CMakeFiles/Graph.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Graph.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Graph.dir/clean

CMakeFiles/Graph.dir/depend:
	cd /Users/yangxiaochuan/CLionProjects/Graph/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/yangxiaochuan/CLionProjects/Graph /Users/yangxiaochuan/CLionProjects/Graph /Users/yangxiaochuan/CLionProjects/Graph/cmake-build-debug /Users/yangxiaochuan/CLionProjects/Graph/cmake-build-debug /Users/yangxiaochuan/CLionProjects/Graph/cmake-build-debug/CMakeFiles/Graph.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Graph.dir/depend

