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
include CMakeFiles/erwei.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/erwei.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/erwei.dir/flags.make

CMakeFiles/erwei.dir/runoob/erwei.c.obj: CMakeFiles/erwei.dir/flags.make
CMakeFiles/erwei.dir/runoob/erwei.c.obj: ../runoob/erwei.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\liupeng\Desktop\ZhangLAB\code\C_Project\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/erwei.dir/runoob/erwei.c.obj"
	C:\Users\liupeng\Downloads\Compressed\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\erwei.dir\runoob\erwei.c.obj -c C:\Users\liupeng\Desktop\ZhangLAB\code\C_Project\runoob\erwei.c

CMakeFiles/erwei.dir/runoob/erwei.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/erwei.dir/runoob/erwei.c.i"
	C:\Users\liupeng\Downloads\Compressed\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\liupeng\Desktop\ZhangLAB\code\C_Project\runoob\erwei.c > CMakeFiles\erwei.dir\runoob\erwei.c.i

CMakeFiles/erwei.dir/runoob/erwei.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/erwei.dir/runoob/erwei.c.s"
	C:\Users\liupeng\Downloads\Compressed\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\liupeng\Desktop\ZhangLAB\code\C_Project\runoob\erwei.c -o CMakeFiles\erwei.dir\runoob\erwei.c.s

# Object files for target erwei
erwei_OBJECTS = \
"CMakeFiles/erwei.dir/runoob/erwei.c.obj"

# External object files for target erwei
erwei_EXTERNAL_OBJECTS =

erwei.exe: CMakeFiles/erwei.dir/runoob/erwei.c.obj
erwei.exe: CMakeFiles/erwei.dir/build.make
erwei.exe: CMakeFiles/erwei.dir/linklibs.rsp
erwei.exe: CMakeFiles/erwei.dir/objects1.rsp
erwei.exe: CMakeFiles/erwei.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\liupeng\Desktop\ZhangLAB\code\C_Project\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable erwei.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\erwei.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/erwei.dir/build: erwei.exe

.PHONY : CMakeFiles/erwei.dir/build

CMakeFiles/erwei.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\erwei.dir\cmake_clean.cmake
.PHONY : CMakeFiles/erwei.dir/clean

CMakeFiles/erwei.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\liupeng\Desktop\ZhangLAB\code\C_Project C:\Users\liupeng\Desktop\ZhangLAB\code\C_Project C:\Users\liupeng\Desktop\ZhangLAB\code\C_Project\cmake-build-debug C:\Users\liupeng\Desktop\ZhangLAB\code\C_Project\cmake-build-debug C:\Users\liupeng\Desktop\ZhangLAB\code\C_Project\cmake-build-debug\CMakeFiles\erwei.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/erwei.dir/depend

