# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.31

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
CMAKE_COMMAND = /opt/cmake/bin/cmake

# The command to remove a file.
RM = /opt/cmake/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/mnt/c/advanced programming/EX-CPP1"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/mnt/c/advanced programming/EX-CPP1/cmake-build-wsl"

# Include any dependencies generated for this target.
include CMakeFiles/EX_CPP1.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/EX_CPP1.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/EX_CPP1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/EX_CPP1.dir/flags.make

CMakeFiles/EX_CPP1.dir/codegen:
.PHONY : CMakeFiles/EX_CPP1.dir/codegen

CMakeFiles/EX_CPP1.dir/main.cpp.o: CMakeFiles/EX_CPP1.dir/flags.make
CMakeFiles/EX_CPP1.dir/main.cpp.o: /mnt/c/advanced\ programming/EX-CPP1/main.cpp
CMakeFiles/EX_CPP1.dir/main.cpp.o: CMakeFiles/EX_CPP1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="/mnt/c/advanced programming/EX-CPP1/cmake-build-wsl/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/EX_CPP1.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/EX_CPP1.dir/main.cpp.o -MF CMakeFiles/EX_CPP1.dir/main.cpp.o.d -o CMakeFiles/EX_CPP1.dir/main.cpp.o -c "/mnt/c/advanced programming/EX-CPP1/main.cpp"

CMakeFiles/EX_CPP1.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/EX_CPP1.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/mnt/c/advanced programming/EX-CPP1/main.cpp" > CMakeFiles/EX_CPP1.dir/main.cpp.i

CMakeFiles/EX_CPP1.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/EX_CPP1.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/mnt/c/advanced programming/EX-CPP1/main.cpp" -o CMakeFiles/EX_CPP1.dir/main.cpp.s

# Object files for target EX_CPP1
EX_CPP1_OBJECTS = \
"CMakeFiles/EX_CPP1.dir/main.cpp.o"

# External object files for target EX_CPP1
EX_CPP1_EXTERNAL_OBJECTS =

EX_CPP1: CMakeFiles/EX_CPP1.dir/main.cpp.o
EX_CPP1: CMakeFiles/EX_CPP1.dir/build.make
EX_CPP1: CMakeFiles/EX_CPP1.dir/compiler_depend.ts
EX_CPP1: CMakeFiles/EX_CPP1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir="/mnt/c/advanced programming/EX-CPP1/cmake-build-wsl/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable EX_CPP1"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/EX_CPP1.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/EX_CPP1.dir/build: EX_CPP1
.PHONY : CMakeFiles/EX_CPP1.dir/build

CMakeFiles/EX_CPP1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/EX_CPP1.dir/cmake_clean.cmake
.PHONY : CMakeFiles/EX_CPP1.dir/clean

CMakeFiles/EX_CPP1.dir/depend:
	cd "/mnt/c/advanced programming/EX-CPP1/cmake-build-wsl" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/mnt/c/advanced programming/EX-CPP1" "/mnt/c/advanced programming/EX-CPP1" "/mnt/c/advanced programming/EX-CPP1/cmake-build-wsl" "/mnt/c/advanced programming/EX-CPP1/cmake-build-wsl" "/mnt/c/advanced programming/EX-CPP1/cmake-build-wsl/CMakeFiles/EX_CPP1.dir/DependInfo.cmake" "--color=$(COLOR)"
.PHONY : CMakeFiles/EX_CPP1.dir/depend

