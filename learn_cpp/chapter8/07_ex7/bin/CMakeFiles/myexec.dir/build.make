# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.2

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/paul/learn/learn_cpp/chapter8/ex7

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/paul/learn/learn_cpp/chapter8/ex7/bin

# Include any dependencies generated for this target.
include CMakeFiles/myexec.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/myexec.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/myexec.dir/flags.make

CMakeFiles/myexec.dir/main.cpp.o: CMakeFiles/myexec.dir/flags.make
CMakeFiles/myexec.dir/main.cpp.o: ../main.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/paul/learn/learn_cpp/chapter8/ex7/bin/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/myexec.dir/main.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/myexec.dir/main.cpp.o -c /home/paul/learn/learn_cpp/chapter8/ex7/main.cpp

CMakeFiles/myexec.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/myexec.dir/main.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/paul/learn/learn_cpp/chapter8/ex7/main.cpp > CMakeFiles/myexec.dir/main.cpp.i

CMakeFiles/myexec.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/myexec.dir/main.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/paul/learn/learn_cpp/chapter8/ex7/main.cpp -o CMakeFiles/myexec.dir/main.cpp.s

CMakeFiles/myexec.dir/main.cpp.o.requires:
.PHONY : CMakeFiles/myexec.dir/main.cpp.o.requires

CMakeFiles/myexec.dir/main.cpp.o.provides: CMakeFiles/myexec.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/myexec.dir/build.make CMakeFiles/myexec.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/myexec.dir/main.cpp.o.provides

CMakeFiles/myexec.dir/main.cpp.o.provides.build: CMakeFiles/myexec.dir/main.cpp.o

# Object files for target myexec
myexec_OBJECTS = \
"CMakeFiles/myexec.dir/main.cpp.o"

# External object files for target myexec
myexec_EXTERNAL_OBJECTS =

myexec: CMakeFiles/myexec.dir/main.cpp.o
myexec: CMakeFiles/myexec.dir/build.make
myexec: CMakeFiles/myexec.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable myexec"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/myexec.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/myexec.dir/build: myexec
.PHONY : CMakeFiles/myexec.dir/build

CMakeFiles/myexec.dir/requires: CMakeFiles/myexec.dir/main.cpp.o.requires
.PHONY : CMakeFiles/myexec.dir/requires

CMakeFiles/myexec.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/myexec.dir/cmake_clean.cmake
.PHONY : CMakeFiles/myexec.dir/clean

CMakeFiles/myexec.dir/depend:
	cd /home/paul/learn/learn_cpp/chapter8/ex7/bin && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/paul/learn/learn_cpp/chapter8/ex7 /home/paul/learn/learn_cpp/chapter8/ex7 /home/paul/learn/learn_cpp/chapter8/ex7/bin /home/paul/learn/learn_cpp/chapter8/ex7/bin /home/paul/learn/learn_cpp/chapter8/ex7/bin/CMakeFiles/myexec.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/myexec.dir/depend

