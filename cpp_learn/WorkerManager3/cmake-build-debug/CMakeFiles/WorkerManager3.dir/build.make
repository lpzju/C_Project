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
CMAKE_SOURCE_DIR = C:\Users\liupeng\Desktop\ZhangLAB\code\C_Project\cpp_learn\WorkerManager3

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\liupeng\Desktop\ZhangLAB\code\C_Project\cpp_learn\WorkerManager3\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/WorkerManager3.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/WorkerManager3.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/WorkerManager3.dir/flags.make

CMakeFiles/WorkerManager3.dir/main.cpp.obj: CMakeFiles/WorkerManager3.dir/flags.make
CMakeFiles/WorkerManager3.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\liupeng\Desktop\ZhangLAB\code\C_Project\cpp_learn\WorkerManager3\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/WorkerManager3.dir/main.cpp.obj"
	C:\Users\liupeng\Downloads\Compressed\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\WorkerManager3.dir\main.cpp.obj -c C:\Users\liupeng\Desktop\ZhangLAB\code\C_Project\cpp_learn\WorkerManager3\main.cpp

CMakeFiles/WorkerManager3.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/WorkerManager3.dir/main.cpp.i"
	C:\Users\liupeng\Downloads\Compressed\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\liupeng\Desktop\ZhangLAB\code\C_Project\cpp_learn\WorkerManager3\main.cpp > CMakeFiles\WorkerManager3.dir\main.cpp.i

CMakeFiles/WorkerManager3.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/WorkerManager3.dir/main.cpp.s"
	C:\Users\liupeng\Downloads\Compressed\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\liupeng\Desktop\ZhangLAB\code\C_Project\cpp_learn\WorkerManager3\main.cpp -o CMakeFiles\WorkerManager3.dir\main.cpp.s

CMakeFiles/WorkerManager3.dir/workerManager.cpp.obj: CMakeFiles/WorkerManager3.dir/flags.make
CMakeFiles/WorkerManager3.dir/workerManager.cpp.obj: ../workerManager.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\liupeng\Desktop\ZhangLAB\code\C_Project\cpp_learn\WorkerManager3\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/WorkerManager3.dir/workerManager.cpp.obj"
	C:\Users\liupeng\Downloads\Compressed\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\WorkerManager3.dir\workerManager.cpp.obj -c C:\Users\liupeng\Desktop\ZhangLAB\code\C_Project\cpp_learn\WorkerManager3\workerManager.cpp

CMakeFiles/WorkerManager3.dir/workerManager.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/WorkerManager3.dir/workerManager.cpp.i"
	C:\Users\liupeng\Downloads\Compressed\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\liupeng\Desktop\ZhangLAB\code\C_Project\cpp_learn\WorkerManager3\workerManager.cpp > CMakeFiles\WorkerManager3.dir\workerManager.cpp.i

CMakeFiles/WorkerManager3.dir/workerManager.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/WorkerManager3.dir/workerManager.cpp.s"
	C:\Users\liupeng\Downloads\Compressed\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\liupeng\Desktop\ZhangLAB\code\C_Project\cpp_learn\WorkerManager3\workerManager.cpp -o CMakeFiles\WorkerManager3.dir\workerManager.cpp.s

CMakeFiles/WorkerManager3.dir/employee.cpp.obj: CMakeFiles/WorkerManager3.dir/flags.make
CMakeFiles/WorkerManager3.dir/employee.cpp.obj: ../employee.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\liupeng\Desktop\ZhangLAB\code\C_Project\cpp_learn\WorkerManager3\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/WorkerManager3.dir/employee.cpp.obj"
	C:\Users\liupeng\Downloads\Compressed\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\WorkerManager3.dir\employee.cpp.obj -c C:\Users\liupeng\Desktop\ZhangLAB\code\C_Project\cpp_learn\WorkerManager3\employee.cpp

CMakeFiles/WorkerManager3.dir/employee.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/WorkerManager3.dir/employee.cpp.i"
	C:\Users\liupeng\Downloads\Compressed\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\liupeng\Desktop\ZhangLAB\code\C_Project\cpp_learn\WorkerManager3\employee.cpp > CMakeFiles\WorkerManager3.dir\employee.cpp.i

CMakeFiles/WorkerManager3.dir/employee.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/WorkerManager3.dir/employee.cpp.s"
	C:\Users\liupeng\Downloads\Compressed\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\liupeng\Desktop\ZhangLAB\code\C_Project\cpp_learn\WorkerManager3\employee.cpp -o CMakeFiles\WorkerManager3.dir\employee.cpp.s

CMakeFiles/WorkerManager3.dir/manger.cpp.obj: CMakeFiles/WorkerManager3.dir/flags.make
CMakeFiles/WorkerManager3.dir/manger.cpp.obj: ../manger.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\liupeng\Desktop\ZhangLAB\code\C_Project\cpp_learn\WorkerManager3\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/WorkerManager3.dir/manger.cpp.obj"
	C:\Users\liupeng\Downloads\Compressed\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\WorkerManager3.dir\manger.cpp.obj -c C:\Users\liupeng\Desktop\ZhangLAB\code\C_Project\cpp_learn\WorkerManager3\manger.cpp

CMakeFiles/WorkerManager3.dir/manger.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/WorkerManager3.dir/manger.cpp.i"
	C:\Users\liupeng\Downloads\Compressed\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\liupeng\Desktop\ZhangLAB\code\C_Project\cpp_learn\WorkerManager3\manger.cpp > CMakeFiles\WorkerManager3.dir\manger.cpp.i

CMakeFiles/WorkerManager3.dir/manger.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/WorkerManager3.dir/manger.cpp.s"
	C:\Users\liupeng\Downloads\Compressed\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\liupeng\Desktop\ZhangLAB\code\C_Project\cpp_learn\WorkerManager3\manger.cpp -o CMakeFiles\WorkerManager3.dir\manger.cpp.s

CMakeFiles/WorkerManager3.dir/boss.cpp.obj: CMakeFiles/WorkerManager3.dir/flags.make
CMakeFiles/WorkerManager3.dir/boss.cpp.obj: ../boss.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\liupeng\Desktop\ZhangLAB\code\C_Project\cpp_learn\WorkerManager3\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/WorkerManager3.dir/boss.cpp.obj"
	C:\Users\liupeng\Downloads\Compressed\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\WorkerManager3.dir\boss.cpp.obj -c C:\Users\liupeng\Desktop\ZhangLAB\code\C_Project\cpp_learn\WorkerManager3\boss.cpp

CMakeFiles/WorkerManager3.dir/boss.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/WorkerManager3.dir/boss.cpp.i"
	C:\Users\liupeng\Downloads\Compressed\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\liupeng\Desktop\ZhangLAB\code\C_Project\cpp_learn\WorkerManager3\boss.cpp > CMakeFiles\WorkerManager3.dir\boss.cpp.i

CMakeFiles/WorkerManager3.dir/boss.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/WorkerManager3.dir/boss.cpp.s"
	C:\Users\liupeng\Downloads\Compressed\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\liupeng\Desktop\ZhangLAB\code\C_Project\cpp_learn\WorkerManager3\boss.cpp -o CMakeFiles\WorkerManager3.dir\boss.cpp.s

# Object files for target WorkerManager3
WorkerManager3_OBJECTS = \
"CMakeFiles/WorkerManager3.dir/main.cpp.obj" \
"CMakeFiles/WorkerManager3.dir/workerManager.cpp.obj" \
"CMakeFiles/WorkerManager3.dir/employee.cpp.obj" \
"CMakeFiles/WorkerManager3.dir/manger.cpp.obj" \
"CMakeFiles/WorkerManager3.dir/boss.cpp.obj"

# External object files for target WorkerManager3
WorkerManager3_EXTERNAL_OBJECTS =

WorkerManager3.exe: CMakeFiles/WorkerManager3.dir/main.cpp.obj
WorkerManager3.exe: CMakeFiles/WorkerManager3.dir/workerManager.cpp.obj
WorkerManager3.exe: CMakeFiles/WorkerManager3.dir/employee.cpp.obj
WorkerManager3.exe: CMakeFiles/WorkerManager3.dir/manger.cpp.obj
WorkerManager3.exe: CMakeFiles/WorkerManager3.dir/boss.cpp.obj
WorkerManager3.exe: CMakeFiles/WorkerManager3.dir/build.make
WorkerManager3.exe: CMakeFiles/WorkerManager3.dir/linklibs.rsp
WorkerManager3.exe: CMakeFiles/WorkerManager3.dir/objects1.rsp
WorkerManager3.exe: CMakeFiles/WorkerManager3.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\liupeng\Desktop\ZhangLAB\code\C_Project\cpp_learn\WorkerManager3\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX executable WorkerManager3.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\WorkerManager3.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/WorkerManager3.dir/build: WorkerManager3.exe

.PHONY : CMakeFiles/WorkerManager3.dir/build

CMakeFiles/WorkerManager3.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\WorkerManager3.dir\cmake_clean.cmake
.PHONY : CMakeFiles/WorkerManager3.dir/clean

CMakeFiles/WorkerManager3.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\liupeng\Desktop\ZhangLAB\code\C_Project\cpp_learn\WorkerManager3 C:\Users\liupeng\Desktop\ZhangLAB\code\C_Project\cpp_learn\WorkerManager3 C:\Users\liupeng\Desktop\ZhangLAB\code\C_Project\cpp_learn\WorkerManager3\cmake-build-debug C:\Users\liupeng\Desktop\ZhangLAB\code\C_Project\cpp_learn\WorkerManager3\cmake-build-debug C:\Users\liupeng\Desktop\ZhangLAB\code\C_Project\cpp_learn\WorkerManager3\cmake-build-debug\CMakeFiles\WorkerManager3.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/WorkerManager3.dir/depend

