# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.13

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Produce verbose output by default.
VERBOSE = 1

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
CMAKE_COMMAND = /usr/src/cmake-3.13.4/bin/cmake

# The command to remove a file.
RM = /usr/src/cmake-3.13.4/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/jucilab/learn-cpp

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/jucilab/learn-cpp

# Include any dependencies generated for this target.
include CMakeFiles/test_absfloat.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/test_absfloat.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/test_absfloat.dir/flags.make

CMakeFiles/test_absfloat.dir/tests/test_absfloat.cc.o: CMakeFiles/test_absfloat.dir/flags.make
CMakeFiles/test_absfloat.dir/tests/test_absfloat.cc.o: tests/test_absfloat.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jucilab/learn-cpp/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/test_absfloat.dir/tests/test_absfloat.cc.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/test_absfloat.dir/tests/test_absfloat.cc.o -c /home/jucilab/learn-cpp/tests/test_absfloat.cc

CMakeFiles/test_absfloat.dir/tests/test_absfloat.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test_absfloat.dir/tests/test_absfloat.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jucilab/learn-cpp/tests/test_absfloat.cc > CMakeFiles/test_absfloat.dir/tests/test_absfloat.cc.i

CMakeFiles/test_absfloat.dir/tests/test_absfloat.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test_absfloat.dir/tests/test_absfloat.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jucilab/learn-cpp/tests/test_absfloat.cc -o CMakeFiles/test_absfloat.dir/tests/test_absfloat.cc.s

# Object files for target test_absfloat
test_absfloat_OBJECTS = \
"CMakeFiles/test_absfloat.dir/tests/test_absfloat.cc.o"

# External object files for target test_absfloat
test_absfloat_EXTERNAL_OBJECTS =

bin/test_absfloat: CMakeFiles/test_absfloat.dir/tests/test_absfloat.cc.o
bin/test_absfloat: CMakeFiles/test_absfloat.dir/build.make
bin/test_absfloat: CMakeFiles/test_absfloat.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/jucilab/learn-cpp/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable bin/test_absfloat"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/test_absfloat.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/test_absfloat.dir/build: bin/test_absfloat

.PHONY : CMakeFiles/test_absfloat.dir/build

CMakeFiles/test_absfloat.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/test_absfloat.dir/cmake_clean.cmake
.PHONY : CMakeFiles/test_absfloat.dir/clean

CMakeFiles/test_absfloat.dir/depend:
	cd /home/jucilab/learn-cpp && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/jucilab/learn-cpp /home/jucilab/learn-cpp /home/jucilab/learn-cpp /home/jucilab/learn-cpp /home/jucilab/learn-cpp/CMakeFiles/test_absfloat.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/test_absfloat.dir/depend

