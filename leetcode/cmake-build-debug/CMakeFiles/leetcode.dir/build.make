# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.19

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2021.1.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2021.1.3\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\liupeng\Desktop\ZhangLAB\code\C_Project\leetcode

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\liupeng\Desktop\ZhangLAB\code\C_Project\leetcode\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/leetcode.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/leetcode.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/leetcode.dir/flags.make

CMakeFiles/leetcode.dir/main.c.obj: CMakeFiles/leetcode.dir/flags.make
CMakeFiles/leetcode.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\liupeng\Desktop\ZhangLAB\code\C_Project\leetcode\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/leetcode.dir/main.c.obj"
	C:\Users\liupeng\Downloads\Compressed\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\leetcode.dir\main.c.obj -c C:\Users\liupeng\Desktop\ZhangLAB\code\C_Project\leetcode\main.c

CMakeFiles/leetcode.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/leetcode.dir/main.c.i"
	C:\Users\liupeng\Downloads\Compressed\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\liupeng\Desktop\ZhangLAB\code\C_Project\leetcode\main.c > CMakeFiles\leetcode.dir\main.c.i

CMakeFiles/leetcode.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/leetcode.dir/main.c.s"
	C:\Users\liupeng\Downloads\Compressed\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\liupeng\Desktop\ZhangLAB\code\C_Project\leetcode\main.c -o CMakeFiles\leetcode.dir\main.c.s

CMakeFiles/leetcode.dir/sortAlgorithm/quick.c.obj: CMakeFiles/leetcode.dir/flags.make
CMakeFiles/leetcode.dir/sortAlgorithm/quick.c.obj: ../sortAlgorithm/quick.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\liupeng\Desktop\ZhangLAB\code\C_Project\leetcode\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/leetcode.dir/sortAlgorithm/quick.c.obj"
	C:\Users\liupeng\Downloads\Compressed\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\leetcode.dir\sortAlgorithm\quick.c.obj -c C:\Users\liupeng\Desktop\ZhangLAB\code\C_Project\leetcode\sortAlgorithm\quick.c

CMakeFiles/leetcode.dir/sortAlgorithm/quick.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/leetcode.dir/sortAlgorithm/quick.c.i"
	C:\Users\liupeng\Downloads\Compressed\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\liupeng\Desktop\ZhangLAB\code\C_Project\leetcode\sortAlgorithm\quick.c > CMakeFiles\leetcode.dir\sortAlgorithm\quick.c.i

CMakeFiles/leetcode.dir/sortAlgorithm/quick.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/leetcode.dir/sortAlgorithm/quick.c.s"
	C:\Users\liupeng\Downloads\Compressed\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\liupeng\Desktop\ZhangLAB\code\C_Project\leetcode\sortAlgorithm\quick.c -o CMakeFiles\leetcode.dir\sortAlgorithm\quick.c.s

# Object files for target leetcode
leetcode_OBJECTS = \
"CMakeFiles/leetcode.dir/main.c.obj" \
"CMakeFiles/leetcode.dir/sortAlgorithm/quick.c.obj"

# External object files for target leetcode
leetcode_EXTERNAL_OBJECTS =

leetcode.exe: CMakeFiles/leetcode.dir/main.c.obj
leetcode.exe: CMakeFiles/leetcode.dir/sortAlgorithm/quick.c.obj
leetcode.exe: CMakeFiles/leetcode.dir/build.make
leetcode.exe: CMakeFiles/leetcode.dir/linklibs.rsp
leetcode.exe: CMakeFiles/leetcode.dir/objects1.rsp
leetcode.exe: CMakeFiles/leetcode.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\liupeng\Desktop\ZhangLAB\code\C_Project\leetcode\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable leetcode.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\leetcode.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/leetcode.dir/build: leetcode.exe

.PHONY : CMakeFiles/leetcode.dir/build

CMakeFiles/leetcode.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\leetcode.dir\cmake_clean.cmake
.PHONY : CMakeFiles/leetcode.dir/clean

CMakeFiles/leetcode.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\liupeng\Desktop\ZhangLAB\code\C_Project\leetcode C:\Users\liupeng\Desktop\ZhangLAB\code\C_Project\leetcode C:\Users\liupeng\Desktop\ZhangLAB\code\C_Project\leetcode\cmake-build-debug C:\Users\liupeng\Desktop\ZhangLAB\code\C_Project\leetcode\cmake-build-debug C:\Users\liupeng\Desktop\ZhangLAB\code\C_Project\leetcode\cmake-build-debug\CMakeFiles\leetcode.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/leetcode.dir/depend

