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
include CMakeFiles/qianzhi.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/qianzhi.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/qianzhi.dir/flags.make

CMakeFiles/qianzhi.dir/qianzhi.cpp.obj: CMakeFiles/qianzhi.dir/flags.make
CMakeFiles/qianzhi.dir/qianzhi.cpp.obj: ../qianzhi.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\liupeng\Desktop\ZhangLAB\code\C_Project\cpp_learn\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/qianzhi.dir/qianzhi.cpp.obj"
	C:\Users\liupeng\Downloads\Compressed\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\qianzhi.dir\qianzhi.cpp.obj -c C:\Users\liupeng\Desktop\ZhangLAB\code\C_Project\cpp_learn\qianzhi.cpp

CMakeFiles/qianzhi.dir/qianzhi.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/qianzhi.dir/qianzhi.cpp.i"
	C:\Users\liupeng\Downloads\Compressed\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\liupeng\Desktop\ZhangLAB\code\C_Project\cpp_learn\qianzhi.cpp > CMakeFiles\qianzhi.dir\qianzhi.cpp.i

CMakeFiles/qianzhi.dir/qianzhi.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/qianzhi.dir/qianzhi.cpp.s"
	C:\Users\liupeng\Downloads\Compressed\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\liupeng\Desktop\ZhangLAB\code\C_Project\cpp_learn\qianzhi.cpp -o CMakeFiles\qianzhi.dir\qianzhi.cpp.s

# Object files for target qianzhi
qianzhi_OBJECTS = \
"CMakeFiles/qianzhi.dir/qianzhi.cpp.obj"

# External object files for target qianzhi
qianzhi_EXTERNAL_OBJECTS =

qianzhi.exe: CMakeFiles/qianzhi.dir/qianzhi.cpp.obj
qianzhi.exe: CMakeFiles/qianzhi.dir/build.make
qianzhi.exe: CMakeFiles/qianzhi.dir/linklibs.rsp
qianzhi.exe: CMakeFiles/qianzhi.dir/objects1.rsp
qianzhi.exe: CMakeFiles/qianzhi.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\liupeng\Desktop\ZhangLAB\code\C_Project\cpp_learn\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable qianzhi.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\qianzhi.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/qianzhi.dir/build: qianzhi.exe

.PHONY : CMakeFiles/qianzhi.dir/build

CMakeFiles/qianzhi.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\qianzhi.dir\cmake_clean.cmake
.PHONY : CMakeFiles/qianzhi.dir/clean

CMakeFiles/qianzhi.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\liupeng\Desktop\ZhangLAB\code\C_Project\cpp_learn C:\Users\liupeng\Desktop\ZhangLAB\code\C_Project\cpp_learn C:\Users\liupeng\Desktop\ZhangLAB\code\C_Project\cpp_learn\cmake-build-debug C:\Users\liupeng\Desktop\ZhangLAB\code\C_Project\cpp_learn\cmake-build-debug C:\Users\liupeng\Desktop\ZhangLAB\code\C_Project\cpp_learn\cmake-build-debug\CMakeFiles\qianzhi.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/qianzhi.dir/depend

