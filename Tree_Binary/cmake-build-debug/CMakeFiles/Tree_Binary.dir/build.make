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
CMAKE_SOURCE_DIR = /Users/yangxiaochuan/CLionProjects/Tree_Binary

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/yangxiaochuan/CLionProjects/Tree_Binary/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Tree_Binary.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Tree_Binary.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Tree_Binary.dir/flags.make

CMakeFiles/Tree_Binary.dir/main.cpp.o: CMakeFiles/Tree_Binary.dir/flags.make
CMakeFiles/Tree_Binary.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/yangxiaochuan/CLionProjects/Tree_Binary/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Tree_Binary.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Tree_Binary.dir/main.cpp.o -c /Users/yangxiaochuan/CLionProjects/Tree_Binary/main.cpp

CMakeFiles/Tree_Binary.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Tree_Binary.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/yangxiaochuan/CLionProjects/Tree_Binary/main.cpp > CMakeFiles/Tree_Binary.dir/main.cpp.i

CMakeFiles/Tree_Binary.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Tree_Binary.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/yangxiaochuan/CLionProjects/Tree_Binary/main.cpp -o CMakeFiles/Tree_Binary.dir/main.cpp.s

CMakeFiles/Tree_Binary.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/Tree_Binary.dir/main.cpp.o.requires

CMakeFiles/Tree_Binary.dir/main.cpp.o.provides: CMakeFiles/Tree_Binary.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/Tree_Binary.dir/build.make CMakeFiles/Tree_Binary.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/Tree_Binary.dir/main.cpp.o.provides

CMakeFiles/Tree_Binary.dir/main.cpp.o.provides.build: CMakeFiles/Tree_Binary.dir/main.cpp.o


# Object files for target Tree_Binary
Tree_Binary_OBJECTS = \
"CMakeFiles/Tree_Binary.dir/main.cpp.o"

# External object files for target Tree_Binary
Tree_Binary_EXTERNAL_OBJECTS =

Tree_Binary: CMakeFiles/Tree_Binary.dir/main.cpp.o
Tree_Binary: CMakeFiles/Tree_Binary.dir/build.make
Tree_Binary: CMakeFiles/Tree_Binary.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/yangxiaochuan/CLionProjects/Tree_Binary/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Tree_Binary"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Tree_Binary.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Tree_Binary.dir/build: Tree_Binary

.PHONY : CMakeFiles/Tree_Binary.dir/build

CMakeFiles/Tree_Binary.dir/requires: CMakeFiles/Tree_Binary.dir/main.cpp.o.requires

.PHONY : CMakeFiles/Tree_Binary.dir/requires

CMakeFiles/Tree_Binary.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Tree_Binary.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Tree_Binary.dir/clean

CMakeFiles/Tree_Binary.dir/depend:
	cd /Users/yangxiaochuan/CLionProjects/Tree_Binary/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/yangxiaochuan/CLionProjects/Tree_Binary /Users/yangxiaochuan/CLionProjects/Tree_Binary /Users/yangxiaochuan/CLionProjects/Tree_Binary/cmake-build-debug /Users/yangxiaochuan/CLionProjects/Tree_Binary/cmake-build-debug /Users/yangxiaochuan/CLionProjects/Tree_Binary/cmake-build-debug/CMakeFiles/Tree_Binary.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Tree_Binary.dir/depend

