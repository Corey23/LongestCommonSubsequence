# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /cygdrive/c/Users/corey/.CLion2019.3/system/cygwin_cmake/bin/cmake.exe

# The command to remove a file.
RM = /cygdrive/c/Users/corey/.CLion2019.3/system/cygwin_cmake/bin/cmake.exe -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /cygdrive/c/Users/corey/Documents/GitHub/LongestCommonSubsequence

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /cygdrive/c/Users/corey/Documents/GitHub/LongestCommonSubsequence/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/LCS.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/LCS.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/LCS.dir/flags.make

CMakeFiles/LCS.dir/main.cpp.o: CMakeFiles/LCS.dir/flags.make
CMakeFiles/LCS.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/Users/corey/Documents/GitHub/LongestCommonSubsequence/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/LCS.dir/main.cpp.o"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LCS.dir/main.cpp.o -c /cygdrive/c/Users/corey/Documents/GitHub/LongestCommonSubsequence/main.cpp

CMakeFiles/LCS.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LCS.dir/main.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/c/Users/corey/Documents/GitHub/LongestCommonSubsequence/main.cpp > CMakeFiles/LCS.dir/main.cpp.i

CMakeFiles/LCS.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LCS.dir/main.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/c/Users/corey/Documents/GitHub/LongestCommonSubsequence/main.cpp -o CMakeFiles/LCS.dir/main.cpp.s

# Object files for target LCS
LCS_OBJECTS = \
"CMakeFiles/LCS.dir/main.cpp.o"

# External object files for target LCS
LCS_EXTERNAL_OBJECTS =

LCS.exe: CMakeFiles/LCS.dir/main.cpp.o
LCS.exe: CMakeFiles/LCS.dir/build.make
LCS.exe: CMakeFiles/LCS.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/cygdrive/c/Users/corey/Documents/GitHub/LongestCommonSubsequence/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable LCS.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/LCS.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/LCS.dir/build: LCS.exe

.PHONY : CMakeFiles/LCS.dir/build

CMakeFiles/LCS.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/LCS.dir/cmake_clean.cmake
.PHONY : CMakeFiles/LCS.dir/clean

CMakeFiles/LCS.dir/depend:
	cd /cygdrive/c/Users/corey/Documents/GitHub/LongestCommonSubsequence/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /cygdrive/c/Users/corey/Documents/GitHub/LongestCommonSubsequence /cygdrive/c/Users/corey/Documents/GitHub/LongestCommonSubsequence /cygdrive/c/Users/corey/Documents/GitHub/LongestCommonSubsequence/cmake-build-debug /cygdrive/c/Users/corey/Documents/GitHub/LongestCommonSubsequence/cmake-build-debug /cygdrive/c/Users/corey/Documents/GitHub/LongestCommonSubsequence/cmake-build-debug/CMakeFiles/LCS.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/LCS.dir/depend

