# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.31

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
CMAKE_COMMAND = "C:\Program Files\CMake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\CMake\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\memo4\Development\CS2337_Projects\Fall2023\Project3

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\memo4\Development\CS2337_Projects\Fall2023\Project3\build

# Include any dependencies generated for this target.
include CMakeFiles/project3.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/project3.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/project3.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/project3.dir/flags.make

CMakeFiles/project3.dir/codegen:
.PHONY : CMakeFiles/project3.dir/codegen

CMakeFiles/project3.dir/src/Main.cpp.obj: CMakeFiles/project3.dir/flags.make
CMakeFiles/project3.dir/src/Main.cpp.obj: CMakeFiles/project3.dir/includes_CXX.rsp
CMakeFiles/project3.dir/src/Main.cpp.obj: C:/Users/memo4/Development/CS2337_Projects/Fall2023/Project3/src/Main.cpp
CMakeFiles/project3.dir/src/Main.cpp.obj: CMakeFiles/project3.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Users\memo4\Development\CS2337_Projects\Fall2023\Project3\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/project3.dir/src/Main.cpp.obj"
	C:\msys64\ucrt64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/project3.dir/src/Main.cpp.obj -MF CMakeFiles\project3.dir\src\Main.cpp.obj.d -o CMakeFiles\project3.dir\src\Main.cpp.obj -c C:\Users\memo4\Development\CS2337_Projects\Fall2023\Project3\src\Main.cpp

CMakeFiles/project3.dir/src/Main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/project3.dir/src/Main.cpp.i"
	C:\msys64\ucrt64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\memo4\Development\CS2337_Projects\Fall2023\Project3\src\Main.cpp > CMakeFiles\project3.dir\src\Main.cpp.i

CMakeFiles/project3.dir/src/Main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/project3.dir/src/Main.cpp.s"
	C:\msys64\ucrt64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\memo4\Development\CS2337_Projects\Fall2023\Project3\src\Main.cpp -o CMakeFiles\project3.dir\src\Main.cpp.s

CMakeFiles/project3.dir/src/DVD.cpp.obj: CMakeFiles/project3.dir/flags.make
CMakeFiles/project3.dir/src/DVD.cpp.obj: CMakeFiles/project3.dir/includes_CXX.rsp
CMakeFiles/project3.dir/src/DVD.cpp.obj: C:/Users/memo4/Development/CS2337_Projects/Fall2023/Project3/src/DVD.cpp
CMakeFiles/project3.dir/src/DVD.cpp.obj: CMakeFiles/project3.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Users\memo4\Development\CS2337_Projects\Fall2023\Project3\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/project3.dir/src/DVD.cpp.obj"
	C:\msys64\ucrt64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/project3.dir/src/DVD.cpp.obj -MF CMakeFiles\project3.dir\src\DVD.cpp.obj.d -o CMakeFiles\project3.dir\src\DVD.cpp.obj -c C:\Users\memo4\Development\CS2337_Projects\Fall2023\Project3\src\DVD.cpp

CMakeFiles/project3.dir/src/DVD.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/project3.dir/src/DVD.cpp.i"
	C:\msys64\ucrt64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\memo4\Development\CS2337_Projects\Fall2023\Project3\src\DVD.cpp > CMakeFiles\project3.dir\src\DVD.cpp.i

CMakeFiles/project3.dir/src/DVD.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/project3.dir/src/DVD.cpp.s"
	C:\msys64\ucrt64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\memo4\Development\CS2337_Projects\Fall2023\Project3\src\DVD.cpp -o CMakeFiles\project3.dir\src\DVD.cpp.s

CMakeFiles/project3.dir/src/Inventory.cpp.obj: CMakeFiles/project3.dir/flags.make
CMakeFiles/project3.dir/src/Inventory.cpp.obj: CMakeFiles/project3.dir/includes_CXX.rsp
CMakeFiles/project3.dir/src/Inventory.cpp.obj: C:/Users/memo4/Development/CS2337_Projects/Fall2023/Project3/src/Inventory.cpp
CMakeFiles/project3.dir/src/Inventory.cpp.obj: CMakeFiles/project3.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Users\memo4\Development\CS2337_Projects\Fall2023\Project3\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/project3.dir/src/Inventory.cpp.obj"
	C:\msys64\ucrt64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/project3.dir/src/Inventory.cpp.obj -MF CMakeFiles\project3.dir\src\Inventory.cpp.obj.d -o CMakeFiles\project3.dir\src\Inventory.cpp.obj -c C:\Users\memo4\Development\CS2337_Projects\Fall2023\Project3\src\Inventory.cpp

CMakeFiles/project3.dir/src/Inventory.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/project3.dir/src/Inventory.cpp.i"
	C:\msys64\ucrt64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\memo4\Development\CS2337_Projects\Fall2023\Project3\src\Inventory.cpp > CMakeFiles\project3.dir\src\Inventory.cpp.i

CMakeFiles/project3.dir/src/Inventory.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/project3.dir/src/Inventory.cpp.s"
	C:\msys64\ucrt64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\memo4\Development\CS2337_Projects\Fall2023\Project3\src\Inventory.cpp -o CMakeFiles\project3.dir\src\Inventory.cpp.s

# Object files for target project3
project3_OBJECTS = \
"CMakeFiles/project3.dir/src/Main.cpp.obj" \
"CMakeFiles/project3.dir/src/DVD.cpp.obj" \
"CMakeFiles/project3.dir/src/Inventory.cpp.obj"

# External object files for target project3
project3_EXTERNAL_OBJECTS =

project3.exe: CMakeFiles/project3.dir/src/Main.cpp.obj
project3.exe: CMakeFiles/project3.dir/src/DVD.cpp.obj
project3.exe: CMakeFiles/project3.dir/src/Inventory.cpp.obj
project3.exe: CMakeFiles/project3.dir/build.make
project3.exe: CMakeFiles/project3.dir/linkLibs.rsp
project3.exe: CMakeFiles/project3.dir/objects1.rsp
project3.exe: CMakeFiles/project3.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=C:\Users\memo4\Development\CS2337_Projects\Fall2023\Project3\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable project3.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\project3.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/project3.dir/build: project3.exe
.PHONY : CMakeFiles/project3.dir/build

CMakeFiles/project3.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\project3.dir\cmake_clean.cmake
.PHONY : CMakeFiles/project3.dir/clean

CMakeFiles/project3.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\memo4\Development\CS2337_Projects\Fall2023\Project3 C:\Users\memo4\Development\CS2337_Projects\Fall2023\Project3 C:\Users\memo4\Development\CS2337_Projects\Fall2023\Project3\build C:\Users\memo4\Development\CS2337_Projects\Fall2023\Project3\build C:\Users\memo4\Development\CS2337_Projects\Fall2023\Project3\build\CMakeFiles\project3.dir\DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/project3.dir/depend

