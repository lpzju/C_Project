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
include CMakeFiles/clearerr1.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/clearerr1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/clearerr1.dir/flags.make

CMakeFiles/clearerr1.dir/xiaojiayu/wendang/clearerr1.c.obj: CMakeFiles/clearerr1.dir/flags.make
CMakeFiles/clearerr1.dir/xiaojiayu/wendang/clearerr1.c.obj: ../xiaojiayu/wendang/clearerr1.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\liupeng\Desktop\ZhangLAB\code\C_Project\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/clearerr1.dir/xiaojiayu/wendang/clearerr1.c.obj"
	C:\Users\liupeng\Downloads\Compressed\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\clearerr1.dir\xiaojiayu\wendang\clearerr1.c.obj -c C:\Users\liupeng\Desktop\ZhangLAB\code\C_Project\xiaojiayu\wendang\clearerr1.c

CMakeFiles/clearerr1.dir/xiaojiayu/wendang/clearerr1.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/clearerr1.dir/xiaojiayu/wendang/clearerr1.c.i"
	C:\Users\liupeng\Downloads\Compressed\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\liupeng\Desktop\ZhangLAB\code\C_Project\xiaojiayu\wendang\clearerr1.c > CMakeFiles\clearerr1.dir\xiaojiayu\wendang\clearerr1.c.i

CMakeFiles/clearerr1.dir/xiaojiayu/wendang/clearerr1.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/clearerr1.dir/xiaojiayu/wendang/clearerr1.c.s"
	C:\Users\liupeng\Downloads\Compressed\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\liupeng\Desktop\ZhangLAB\code\C_Project\xiaojiayu\wendang\clearerr1.c -o CMakeFiles\clearerr1.dir\xiaojiayu\wendang\clearerr1.c.s

# Object files for target clearerr1
clearerr1_OBJECTS = \
"CMakeFiles/clearerr1.dir/xiaojiayu/wendang/clearerr1.c.obj"

# External object files for target clearerr1
clearerr1_EXTERNAL_OBJECTS =

clearerr1.exe: CMakeFiles/clearerr1.dir/xiaojiayu/wendang/clearerr1.c.obj
clearerr1.exe: CMakeFiles/clearerr1.dir/build.make
clearerr1.exe: CMakeFiles/clearerr1.dir/linklibs.rsp
clearerr1.exe: CMakeFiles/clearerr1.dir/objects1.rsp
clearerr1.exe: CMakeFiles/clearerr1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\liupeng\Desktop\ZhangLAB\code\C_Project\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable clearerr1.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\clearerr1.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/clearerr1.dir/build: clearerr1.exe

.PHONY : CMakeFiles/clearerr1.dir/build

CMakeFiles/clearerr1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\clearerr1.dir\cmake_clean.cmake
.PHONY : CMakeFiles/clearerr1.dir/clean

CMakeFiles/clearerr1.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\liupeng\Desktop\ZhangLAB\code\C_Project C:\Users\liupeng\Desktop\ZhangLAB\code\C_Project C:\Users\liupeng\Desktop\ZhangLAB\code\C_Project\cmake-build-debug C:\Users\liupeng\Desktop\ZhangLAB\code\C_Project\cmake-build-debug C:\Users\liupeng\Desktop\ZhangLAB\code\C_Project\cmake-build-debug\CMakeFiles\clearerr1.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/clearerr1.dir/depend

