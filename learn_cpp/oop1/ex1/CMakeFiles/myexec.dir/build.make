# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

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
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.17.2/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.17.2/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/paul/learn/learn_cpp/oop1/ex1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/paul/learn/learn_cpp/oop1/ex1

# Include any dependencies generated for this target.
include CMakeFiles/myexec.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/myexec.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/myexec.dir/flags.make

CMakeFiles/myexec.dir/main.cpp.o: CMakeFiles/myexec.dir/flags.make
CMakeFiles/myexec.dir/main.cpp.o: main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/paul/learn/learn_cpp/oop1/ex1/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/myexec.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/myexec.dir/main.cpp.o -c /Users/paul/learn/learn_cpp/oop1/ex1/main.cpp

CMakeFiles/myexec.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/myexec.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/paul/learn/learn_cpp/oop1/ex1/main.cpp > CMakeFiles/myexec.dir/main.cpp.i

CMakeFiles/myexec.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/myexec.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/paul/learn/learn_cpp/oop1/ex1/main.cpp -o CMakeFiles/myexec.dir/main.cpp.s

# Object files for target myexec
myexec_OBJECTS = \
"CMakeFiles/myexec.dir/main.cpp.o"

# External object files for target myexec
myexec_EXTERNAL_OBJECTS =

myexec: CMakeFiles/myexec.dir/main.cpp.o
myexec: CMakeFiles/myexec.dir/build.make
myexec: CMakeFiles/myexec.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/paul/learn/learn_cpp/oop1/ex1/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable myexec"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/myexec.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/myexec.dir/build: myexec

.PHONY : CMakeFiles/myexec.dir/build

CMakeFiles/myexec.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/myexec.dir/cmake_clean.cmake
.PHONY : CMakeFiles/myexec.dir/clean

CMakeFiles/myexec.dir/depend:
	cd /Users/paul/learn/learn_cpp/oop1/ex1 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/paul/learn/learn_cpp/oop1/ex1 /Users/paul/learn/learn_cpp/oop1/ex1 /Users/paul/learn/learn_cpp/oop1/ex1 /Users/paul/learn/learn_cpp/oop1/ex1 /Users/paul/learn/learn_cpp/oop1/ex1/CMakeFiles/myexec.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/myexec.dir/depend

