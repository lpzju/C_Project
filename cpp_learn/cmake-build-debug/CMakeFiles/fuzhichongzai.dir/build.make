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
CMAKE_SOURCE_DIR = C:\Users\liupeng\Desktop\ZhangLAB\code\C_Project\cpp_learn

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\liupeng\Desktop\ZhangLAB\code\C_Project\cpp_learn\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/fuzhichongzai.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/fuzhichongzai.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/fuzhichongzai.dir/flags.make

CMakeFiles/fuzhichongzai.dir/fuzhichongzai.cpp.obj: CMakeFiles/fuzhichongzai.dir/flags.make
CMakeFiles/fuzhichongzai.dir/fuzhichongzai.cpp.obj: ../fuzhichongzai.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\liupeng\Desktop\ZhangLAB\code\C_Project\cpp_learn\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/fuzhichongzai.dir/fuzhichongzai.cpp.obj"
	C:\Users\liupeng\Downloads\Compressed\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\fuzhichongzai.dir\fuzhichongzai.cpp.obj -c C:\Users\liupeng\Desktop\ZhangLAB\code\C_Project\cpp_learn\fuzhichongzai.cpp

CMakeFiles/fuzhichongzai.dir/fuzhichongzai.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/fuzhichongzai.dir/fuzhichongzai.cpp.i"
	C:\Users\liupeng\Downloads\Compressed\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\liupeng\Desktop\ZhangLAB\code\C_Project\cpp_learn\fuzhichongzai.cpp > CMakeFiles\fuzhichongzai.dir\fuzhichongzai.cpp.i

CMakeFiles/fuzhichongzai.dir/fuzhichongzai.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/fuzhichongzai.dir/fuzhichongzai.cpp.s"
	C:\Users\liupeng\Downloads\Compressed\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\liupeng\Desktop\ZhangLAB\code\C_Project\cpp_learn\fuzhichongzai.cpp -o CMakeFiles\fuzhichongzai.dir\fuzhichongzai.cpp.s

# Object files for target fuzhichongzai
fuzhichongzai_OBJECTS = \
"CMakeFiles/fuzhichongzai.dir/fuzhichongzai.cpp.obj"

# External object files for target fuzhichongzai
fuzhichongzai_EXTERNAL_OBJECTS =

fuzhichongzai.exe: CMakeFiles/fuzhichongzai.dir/fuzhichongzai.cpp.obj
fuzhichongzai.exe: CMakeFiles/fuzhichongzai.dir/build.make
fuzhichongzai.exe: CMakeFiles/fuzhichongzai.dir/linklibs.rsp
fuzhichongzai.exe: CMakeFiles/fuzhichongzai.dir/objects1.rsp
fuzhichongzai.exe: CMakeFiles/fuzhichongzai.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\liupeng\Desktop\ZhangLAB\code\C_Project\cpp_learn\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable fuzhichongzai.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\fuzhichongzai.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/fuzhichongzai.dir/build: fuzhichongzai.exe

.PHONY : CMakeFiles/fuzhichongzai.dir/build

CMakeFiles/fuzhichongzai.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\fuzhichongzai.dir\cmake_clean.cmake
.PHONY : CMakeFiles/fuzhichongzai.dir/clean

CMakeFiles/fuzhichongzai.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\liupeng\Desktop\ZhangLAB\code\C_Project\cpp_learn C:\Users\liupeng\Desktop\ZhangLAB\code\C_Project\cpp_learn C:\Users\liupeng\Desktop\ZhangLAB\code\C_Project\cpp_learn\cmake-build-debug C:\Users\liupeng\Desktop\ZhangLAB\code\C_Project\cpp_learn\cmake-build-debug C:\Users\liupeng\Desktop\ZhangLAB\code\C_Project\cpp_learn\cmake-build-debug\CMakeFiles\fuzhichongzai.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/fuzhichongzai.dir/depend
