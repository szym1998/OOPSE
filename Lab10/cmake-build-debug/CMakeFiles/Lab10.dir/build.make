# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/imirgrp/bogdani/lab1/vending_machine/Lab10

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/imirgrp/bogdani/lab1/vending_machine/Lab10/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Lab10.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Lab10.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Lab10.dir/flags.make

CMakeFiles/Lab10.dir/main.cpp.o: CMakeFiles/Lab10.dir/flags.make
CMakeFiles/Lab10.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/imirgrp/bogdani/lab1/vending_machine/Lab10/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Lab10.dir/main.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Lab10.dir/main.cpp.o -c /home/imirgrp/bogdani/lab1/vending_machine/Lab10/main.cpp

CMakeFiles/Lab10.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Lab10.dir/main.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/imirgrp/bogdani/lab1/vending_machine/Lab10/main.cpp > CMakeFiles/Lab10.dir/main.cpp.i

CMakeFiles/Lab10.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Lab10.dir/main.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/imirgrp/bogdani/lab1/vending_machine/Lab10/main.cpp -o CMakeFiles/Lab10.dir/main.cpp.s

CMakeFiles/Lab10.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/Lab10.dir/main.cpp.o.requires

CMakeFiles/Lab10.dir/main.cpp.o.provides: CMakeFiles/Lab10.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/Lab10.dir/build.make CMakeFiles/Lab10.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/Lab10.dir/main.cpp.o.provides

CMakeFiles/Lab10.dir/main.cpp.o.provides.build: CMakeFiles/Lab10.dir/main.cpp.o


CMakeFiles/Lab10.dir/Draw.cpp.o: CMakeFiles/Lab10.dir/flags.make
CMakeFiles/Lab10.dir/Draw.cpp.o: ../Draw.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/imirgrp/bogdani/lab1/vending_machine/Lab10/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Lab10.dir/Draw.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Lab10.dir/Draw.cpp.o -c /home/imirgrp/bogdani/lab1/vending_machine/Lab10/Draw.cpp

CMakeFiles/Lab10.dir/Draw.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Lab10.dir/Draw.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/imirgrp/bogdani/lab1/vending_machine/Lab10/Draw.cpp > CMakeFiles/Lab10.dir/Draw.cpp.i

CMakeFiles/Lab10.dir/Draw.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Lab10.dir/Draw.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/imirgrp/bogdani/lab1/vending_machine/Lab10/Draw.cpp -o CMakeFiles/Lab10.dir/Draw.cpp.s

CMakeFiles/Lab10.dir/Draw.cpp.o.requires:

.PHONY : CMakeFiles/Lab10.dir/Draw.cpp.o.requires

CMakeFiles/Lab10.dir/Draw.cpp.o.provides: CMakeFiles/Lab10.dir/Draw.cpp.o.requires
	$(MAKE) -f CMakeFiles/Lab10.dir/build.make CMakeFiles/Lab10.dir/Draw.cpp.o.provides.build
.PHONY : CMakeFiles/Lab10.dir/Draw.cpp.o.provides

CMakeFiles/Lab10.dir/Draw.cpp.o.provides.build: CMakeFiles/Lab10.dir/Draw.cpp.o


CMakeFiles/Lab10.dir/Menus.cpp.o: CMakeFiles/Lab10.dir/flags.make
CMakeFiles/Lab10.dir/Menus.cpp.o: ../Menus.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/imirgrp/bogdani/lab1/vending_machine/Lab10/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/Lab10.dir/Menus.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Lab10.dir/Menus.cpp.o -c /home/imirgrp/bogdani/lab1/vending_machine/Lab10/Menus.cpp

CMakeFiles/Lab10.dir/Menus.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Lab10.dir/Menus.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/imirgrp/bogdani/lab1/vending_machine/Lab10/Menus.cpp > CMakeFiles/Lab10.dir/Menus.cpp.i

CMakeFiles/Lab10.dir/Menus.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Lab10.dir/Menus.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/imirgrp/bogdani/lab1/vending_machine/Lab10/Menus.cpp -o CMakeFiles/Lab10.dir/Menus.cpp.s

CMakeFiles/Lab10.dir/Menus.cpp.o.requires:

.PHONY : CMakeFiles/Lab10.dir/Menus.cpp.o.requires

CMakeFiles/Lab10.dir/Menus.cpp.o.provides: CMakeFiles/Lab10.dir/Menus.cpp.o.requires
	$(MAKE) -f CMakeFiles/Lab10.dir/build.make CMakeFiles/Lab10.dir/Menus.cpp.o.provides.build
.PHONY : CMakeFiles/Lab10.dir/Menus.cpp.o.provides

CMakeFiles/Lab10.dir/Menus.cpp.o.provides.build: CMakeFiles/Lab10.dir/Menus.cpp.o


CMakeFiles/Lab10.dir/Player.cpp.o: CMakeFiles/Lab10.dir/flags.make
CMakeFiles/Lab10.dir/Player.cpp.o: ../Player.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/imirgrp/bogdani/lab1/vending_machine/Lab10/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/Lab10.dir/Player.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Lab10.dir/Player.cpp.o -c /home/imirgrp/bogdani/lab1/vending_machine/Lab10/Player.cpp

CMakeFiles/Lab10.dir/Player.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Lab10.dir/Player.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/imirgrp/bogdani/lab1/vending_machine/Lab10/Player.cpp > CMakeFiles/Lab10.dir/Player.cpp.i

CMakeFiles/Lab10.dir/Player.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Lab10.dir/Player.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/imirgrp/bogdani/lab1/vending_machine/Lab10/Player.cpp -o CMakeFiles/Lab10.dir/Player.cpp.s

CMakeFiles/Lab10.dir/Player.cpp.o.requires:

.PHONY : CMakeFiles/Lab10.dir/Player.cpp.o.requires

CMakeFiles/Lab10.dir/Player.cpp.o.provides: CMakeFiles/Lab10.dir/Player.cpp.o.requires
	$(MAKE) -f CMakeFiles/Lab10.dir/build.make CMakeFiles/Lab10.dir/Player.cpp.o.provides.build
.PHONY : CMakeFiles/Lab10.dir/Player.cpp.o.provides

CMakeFiles/Lab10.dir/Player.cpp.o.provides.build: CMakeFiles/Lab10.dir/Player.cpp.o


CMakeFiles/Lab10.dir/read_csv.cpp.o: CMakeFiles/Lab10.dir/flags.make
CMakeFiles/Lab10.dir/read_csv.cpp.o: ../read_csv.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/imirgrp/bogdani/lab1/vending_machine/Lab10/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/Lab10.dir/read_csv.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Lab10.dir/read_csv.cpp.o -c /home/imirgrp/bogdani/lab1/vending_machine/Lab10/read_csv.cpp

CMakeFiles/Lab10.dir/read_csv.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Lab10.dir/read_csv.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/imirgrp/bogdani/lab1/vending_machine/Lab10/read_csv.cpp > CMakeFiles/Lab10.dir/read_csv.cpp.i

CMakeFiles/Lab10.dir/read_csv.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Lab10.dir/read_csv.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/imirgrp/bogdani/lab1/vending_machine/Lab10/read_csv.cpp -o CMakeFiles/Lab10.dir/read_csv.cpp.s

CMakeFiles/Lab10.dir/read_csv.cpp.o.requires:

.PHONY : CMakeFiles/Lab10.dir/read_csv.cpp.o.requires

CMakeFiles/Lab10.dir/read_csv.cpp.o.provides: CMakeFiles/Lab10.dir/read_csv.cpp.o.requires
	$(MAKE) -f CMakeFiles/Lab10.dir/build.make CMakeFiles/Lab10.dir/read_csv.cpp.o.provides.build
.PHONY : CMakeFiles/Lab10.dir/read_csv.cpp.o.provides

CMakeFiles/Lab10.dir/read_csv.cpp.o.provides.build: CMakeFiles/Lab10.dir/read_csv.cpp.o


CMakeFiles/Lab10.dir/Find_by_name.cpp.o: CMakeFiles/Lab10.dir/flags.make
CMakeFiles/Lab10.dir/Find_by_name.cpp.o: ../Find_by_name.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/imirgrp/bogdani/lab1/vending_machine/Lab10/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/Lab10.dir/Find_by_name.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Lab10.dir/Find_by_name.cpp.o -c /home/imirgrp/bogdani/lab1/vending_machine/Lab10/Find_by_name.cpp

CMakeFiles/Lab10.dir/Find_by_name.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Lab10.dir/Find_by_name.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/imirgrp/bogdani/lab1/vending_machine/Lab10/Find_by_name.cpp > CMakeFiles/Lab10.dir/Find_by_name.cpp.i

CMakeFiles/Lab10.dir/Find_by_name.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Lab10.dir/Find_by_name.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/imirgrp/bogdani/lab1/vending_machine/Lab10/Find_by_name.cpp -o CMakeFiles/Lab10.dir/Find_by_name.cpp.s

CMakeFiles/Lab10.dir/Find_by_name.cpp.o.requires:

.PHONY : CMakeFiles/Lab10.dir/Find_by_name.cpp.o.requires

CMakeFiles/Lab10.dir/Find_by_name.cpp.o.provides: CMakeFiles/Lab10.dir/Find_by_name.cpp.o.requires
	$(MAKE) -f CMakeFiles/Lab10.dir/build.make CMakeFiles/Lab10.dir/Find_by_name.cpp.o.provides.build
.PHONY : CMakeFiles/Lab10.dir/Find_by_name.cpp.o.provides

CMakeFiles/Lab10.dir/Find_by_name.cpp.o.provides.build: CMakeFiles/Lab10.dir/Find_by_name.cpp.o


# Object files for target Lab10
Lab10_OBJECTS = \
"CMakeFiles/Lab10.dir/main.cpp.o" \
"CMakeFiles/Lab10.dir/Draw.cpp.o" \
"CMakeFiles/Lab10.dir/Menus.cpp.o" \
"CMakeFiles/Lab10.dir/Player.cpp.o" \
"CMakeFiles/Lab10.dir/read_csv.cpp.o" \
"CMakeFiles/Lab10.dir/Find_by_name.cpp.o"

# External object files for target Lab10
Lab10_EXTERNAL_OBJECTS =

Lab10: CMakeFiles/Lab10.dir/main.cpp.o
Lab10: CMakeFiles/Lab10.dir/Draw.cpp.o
Lab10: CMakeFiles/Lab10.dir/Menus.cpp.o
Lab10: CMakeFiles/Lab10.dir/Player.cpp.o
Lab10: CMakeFiles/Lab10.dir/read_csv.cpp.o
Lab10: CMakeFiles/Lab10.dir/Find_by_name.cpp.o
Lab10: CMakeFiles/Lab10.dir/build.make
Lab10: CMakeFiles/Lab10.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/imirgrp/bogdani/lab1/vending_machine/Lab10/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Linking CXX executable Lab10"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Lab10.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Lab10.dir/build: Lab10

.PHONY : CMakeFiles/Lab10.dir/build

CMakeFiles/Lab10.dir/requires: CMakeFiles/Lab10.dir/main.cpp.o.requires
CMakeFiles/Lab10.dir/requires: CMakeFiles/Lab10.dir/Draw.cpp.o.requires
CMakeFiles/Lab10.dir/requires: CMakeFiles/Lab10.dir/Menus.cpp.o.requires
CMakeFiles/Lab10.dir/requires: CMakeFiles/Lab10.dir/Player.cpp.o.requires
CMakeFiles/Lab10.dir/requires: CMakeFiles/Lab10.dir/read_csv.cpp.o.requires
CMakeFiles/Lab10.dir/requires: CMakeFiles/Lab10.dir/Find_by_name.cpp.o.requires

.PHONY : CMakeFiles/Lab10.dir/requires

CMakeFiles/Lab10.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Lab10.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Lab10.dir/clean

CMakeFiles/Lab10.dir/depend:
	cd /home/imirgrp/bogdani/lab1/vending_machine/Lab10/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/imirgrp/bogdani/lab1/vending_machine/Lab10 /home/imirgrp/bogdani/lab1/vending_machine/Lab10 /home/imirgrp/bogdani/lab1/vending_machine/Lab10/cmake-build-debug /home/imirgrp/bogdani/lab1/vending_machine/Lab10/cmake-build-debug /home/imirgrp/bogdani/lab1/vending_machine/Lab10/cmake-build-debug/CMakeFiles/Lab10.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Lab10.dir/depend

