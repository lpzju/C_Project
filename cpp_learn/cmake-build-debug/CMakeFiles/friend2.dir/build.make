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
include CMakeFiles/friend2.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/friend2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/friend2.dir/flags.make

CMakeFiles/friend2.dir/friend2.cpp.obj: CMakeFiles/friend2.dir/flags.make
CMakeFiles/friend2.dir/friend2.cpp.obj: ../friend2.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\liupeng\Desktop\ZhangLAB\code\C_Project\cpp_learn\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/friend2.dir/friend2.cpp.obj"
	C:\Users\liupeng\Downloads\Compressed\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\friend2.dir\friend2.cpp.obj -c C:\Users\liupeng\Desktop\ZhangLAB\code\C_Project\cpp_learn\friend2.cpp

CMakeFiles/friend2.dir/friend2.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/friend2.dir/friend2.cpp.i"
	C:\Users\liupeng\Downloads\Compressed\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\liupeng\Desktop\ZhangLAB\code\C_Project\cpp_learn\friend2.cpp > CMakeFiles\friend2.dir\friend2.cpp.i

CMakeFiles/friend2.dir/friend2.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/friend2.dir/friend2.cpp.s"
	C:\Users\liupeng\Downloads\Compressed\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\liupeng\Desktop\ZhangLAB\code\C_Project\cpp_learn\friend2.cpp -o CMakeFiles\friend2.dir\friend2.cpp.s

# Object files for target friend2
friend2_OBJECTS = \
"CMakeFiles/friend2.dir/friend2.cpp.obj"

# External object files for target friend2
friend2_EXTERNAL_OBJECTS =

friend2.exe: CMakeFiles/friend2.dir/friend2.cpp.obj
friend2.exe: CMakeFiles/friend2.dir/build.make
friend2.exe: CMakeFiles/friend2.dir/linklibs.rsp
friend2.exe: CMakeFiles/friend2.dir/objects1.rsp
friend2.exe: CMakeFiles/friend2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\liupeng\Desktop\ZhangLAB\code\C_Project\cpp_learn\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable friend2.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\friend2.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/friend2.dir/build: friend2.exe

.PHONY : CMakeFiles/friend2.dir/build

CMakeFiles/friend2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\friend2.dir\cmake_clean.cmake
.PHONY : CMakeFiles/friend2.dir/clean

CMakeFiles/friend2.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\liupeng\Desktop\ZhangLAB\code\C_Project\cpp_learn C:\Users\liupeng\Desktop\ZhangLAB\code\C_Project\cpp_learn C:\Users\liupeng\Desktop\ZhangLAB\code\C_Project\cpp_learn\cmake-build-debug C:\Users\liupeng\Desktop\ZhangLAB\code\C_Project\cpp_learn\cmake-build-debug C:\Users\liupeng\Desktop\ZhangLAB\code\C_Project\cpp_learn\cmake-build-debug\CMakeFiles\friend2.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/friend2.dir/depend

