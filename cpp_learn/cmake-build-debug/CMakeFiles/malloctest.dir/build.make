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
include CMakeFiles/malloctest.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/malloctest.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/malloctest.dir/flags.make

CMakeFiles/malloctest.dir/malloctest.cpp.obj: CMakeFiles/malloctest.dir/flags.make
CMakeFiles/malloctest.dir/malloctest.cpp.obj: ../malloctest.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\liupeng\Desktop\ZhangLAB\code\C_Project\cpp_learn\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/malloctest.dir/malloctest.cpp.obj"
	C:\Users\liupeng\Downloads\Compressed\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\malloctest.dir\malloctest.cpp.obj -c C:\Users\liupeng\Desktop\ZhangLAB\code\C_Project\cpp_learn\malloctest.cpp

CMakeFiles/malloctest.dir/malloctest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/malloctest.dir/malloctest.cpp.i"
	C:\Users\liupeng\Downloads\Compressed\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\liupeng\Desktop\ZhangLAB\code\C_Project\cpp_learn\malloctest.cpp > CMakeFiles\malloctest.dir\malloctest.cpp.i

CMakeFiles/malloctest.dir/malloctest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/malloctest.dir/malloctest.cpp.s"
	C:\Users\liupeng\Downloads\Compressed\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\liupeng\Desktop\ZhangLAB\code\C_Project\cpp_learn\malloctest.cpp -o CMakeFiles\malloctest.dir\malloctest.cpp.s

# Object files for target malloctest
malloctest_OBJECTS = \
"CMakeFiles/malloctest.dir/malloctest.cpp.obj"

# External object files for target malloctest
malloctest_EXTERNAL_OBJECTS =

malloctest.exe: CMakeFiles/malloctest.dir/malloctest.cpp.obj
malloctest.exe: CMakeFiles/malloctest.dir/build.make
malloctest.exe: CMakeFiles/malloctest.dir/linklibs.rsp
malloctest.exe: CMakeFiles/malloctest.dir/objects1.rsp
malloctest.exe: CMakeFiles/malloctest.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\liupeng\Desktop\ZhangLAB\code\C_Project\cpp_learn\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable malloctest.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\malloctest.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/malloctest.dir/build: malloctest.exe

.PHONY : CMakeFiles/malloctest.dir/build

CMakeFiles/malloctest.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\malloctest.dir\cmake_clean.cmake
.PHONY : CMakeFiles/malloctest.dir/clean

CMakeFiles/malloctest.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\liupeng\Desktop\ZhangLAB\code\C_Project\cpp_learn C:\Users\liupeng\Desktop\ZhangLAB\code\C_Project\cpp_learn C:\Users\liupeng\Desktop\ZhangLAB\code\C_Project\cpp_learn\cmake-build-debug C:\Users\liupeng\Desktop\ZhangLAB\code\C_Project\cpp_learn\cmake-build-debug C:\Users\liupeng\Desktop\ZhangLAB\code\C_Project\cpp_learn\cmake-build-debug\CMakeFiles\malloctest.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/malloctest.dir/depend
