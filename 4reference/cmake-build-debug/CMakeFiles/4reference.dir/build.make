# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.12

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
CMAKE_COMMAND = /home/qin/clion-2018.2.2/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/qin/clion-2018.2.2/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/home/qin/code/course: c++/4reference"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/qin/code/course: c++/4reference/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/4reference.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/4reference.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/4reference.dir/flags.make

CMakeFiles/4reference.dir/main.cpp.o: CMakeFiles/4reference.dir/flags.make
CMakeFiles/4reference.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/qin/code/course: c++/4reference/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/4reference.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/4reference.dir/main.cpp.o -c "/home/qin/code/course: c++/4reference/main.cpp"

CMakeFiles/4reference.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/4reference.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/qin/code/course: c++/4reference/main.cpp" > CMakeFiles/4reference.dir/main.cpp.i

CMakeFiles/4reference.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/4reference.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/qin/code/course: c++/4reference/main.cpp" -o CMakeFiles/4reference.dir/main.cpp.s

# Object files for target 4reference
4reference_OBJECTS = \
"CMakeFiles/4reference.dir/main.cpp.o"

# External object files for target 4reference
4reference_EXTERNAL_OBJECTS =

4reference: CMakeFiles/4reference.dir/main.cpp.o
4reference: CMakeFiles/4reference.dir/build.make
4reference: CMakeFiles/4reference.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/qin/code/course: c++/4reference/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 4reference"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/4reference.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/4reference.dir/build: 4reference

.PHONY : CMakeFiles/4reference.dir/build

CMakeFiles/4reference.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/4reference.dir/cmake_clean.cmake
.PHONY : CMakeFiles/4reference.dir/clean

CMakeFiles/4reference.dir/depend:
	cd "/home/qin/code/course: c++/4reference/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/qin/code/course: c++/4reference" "/home/qin/code/course: c++/4reference" "/home/qin/code/course: c++/4reference/cmake-build-debug" "/home/qin/code/course: c++/4reference/cmake-build-debug" "/home/qin/code/course: c++/4reference/cmake-build-debug/CMakeFiles/4reference.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/4reference.dir/depend

