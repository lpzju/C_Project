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
CMAKE_SOURCE_DIR = C:\Users\liupeng\Desktop\ZhangLAB\code\C_Project

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\liupeng\Desktop\ZhangLAB\code\C_Project\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/yanghui.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/yanghui.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/yanghui.dir/flags.make

CMakeFiles/yanghui.dir/leetcode/main/yanghui.c.obj: CMakeFiles/yanghui.dir/flags.make
CMakeFiles/yanghui.dir/leetcode/main/yanghui.c.obj: ../leetcode/main/yanghui.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\liupeng\Desktop\ZhangLAB\code\C_Project\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/yanghui.dir/leetcode/main/yanghui.c.obj"
	C:\Users\liupeng\Downloads\Compressed\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\yanghui.dir\leetcode\main\yanghui.c.obj -c C:\Users\liupeng\Desktop\ZhangLAB\code\C_Project\leetcode\main\yanghui.c

CMakeFiles/yanghui.dir/leetcode/main/yanghui.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/yanghui.dir/leetcode/main/yanghui.c.i"
	C:\Users\liupeng\Downloads\Compressed\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\liupeng\Desktop\ZhangLAB\code\C_Project\leetcode\main\yanghui.c > CMakeFiles\yanghui.dir\leetcode\main\yanghui.c.i

CMakeFiles/yanghui.dir/leetcode/main/yanghui.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/yanghui.dir/leetcode/main/yanghui.c.s"
	C:\Users\liupeng\Downloads\Compressed\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\liupeng\Desktop\ZhangLAB\code\C_Project\leetcode\main\yanghui.c -o CMakeFiles\yanghui.dir\leetcode\main\yanghui.c.s

# Object files for target yanghui
yanghui_OBJECTS = \
"CMakeFiles/yanghui.dir/leetcode/main/yanghui.c.obj"

# External object files for target yanghui
yanghui_EXTERNAL_OBJECTS =

yanghui.exe: CMakeFiles/yanghui.dir/leetcode/main/yanghui.c.obj
yanghui.exe: CMakeFiles/yanghui.dir/build.make
yanghui.exe: CMakeFiles/yanghui.dir/linklibs.rsp
yanghui.exe: CMakeFiles/yanghui.dir/objects1.rsp
yanghui.exe: CMakeFiles/yanghui.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\liupeng\Desktop\ZhangLAB\code\C_Project\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable yanghui.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\yanghui.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/yanghui.dir/build: yanghui.exe

.PHONY : CMakeFiles/yanghui.dir/build

CMakeFiles/yanghui.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\yanghui.dir\cmake_clean.cmake
.PHONY : CMakeFiles/yanghui.dir/clean

CMakeFiles/yanghui.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\liupeng\Desktop\ZhangLAB\code\C_Project C:\Users\liupeng\Desktop\ZhangLAB\code\C_Project C:\Users\liupeng\Desktop\ZhangLAB\code\C_Project\cmake-build-debug C:\Users\liupeng\Desktop\ZhangLAB\code\C_Project\cmake-build-debug C:\Users\liupeng\Desktop\ZhangLAB\code\C_Project\cmake-build-debug\CMakeFiles\yanghui.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/yanghui.dir/depend

