# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /home/florin/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/212.5457.51/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/florin/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/212.5457.51/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/florin/Projects/CLionProjects/ParkingSystem

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/florin/Projects/CLionProjects/ParkingSystem/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/CarRentalSystem.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/CarRentalSystem.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/CarRentalSystem.dir/flags.make

CMakeFiles/CarRentalSystem.dir/main.cpp.o: CMakeFiles/CarRentalSystem.dir/flags.make
CMakeFiles/CarRentalSystem.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/florin/Projects/CLionProjects/ParkingSystem/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/CarRentalSystem.dir/main.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/CarRentalSystem.dir/main.cpp.o -c /home/florin/Projects/CLionProjects/ParkingSystem/main.cpp

CMakeFiles/CarRentalSystem.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CarRentalSystem.dir/main.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/florin/Projects/CLionProjects/ParkingSystem/main.cpp > CMakeFiles/CarRentalSystem.dir/main.cpp.i

CMakeFiles/CarRentalSystem.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CarRentalSystem.dir/main.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/florin/Projects/CLionProjects/ParkingSystem/main.cpp -o CMakeFiles/CarRentalSystem.dir/main.cpp.s

CMakeFiles/CarRentalSystem.dir/parkingLot.cpp.o: CMakeFiles/CarRentalSystem.dir/flags.make
CMakeFiles/CarRentalSystem.dir/parkingLot.cpp.o: ../parkingLot.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/florin/Projects/CLionProjects/ParkingSystem/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/CarRentalSystem.dir/parkingLot.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/CarRentalSystem.dir/parkingLot.cpp.o -c /home/florin/Projects/CLionProjects/ParkingSystem/parkingLot.cpp

CMakeFiles/CarRentalSystem.dir/parkingLot.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CarRentalSystem.dir/parkingLot.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/florin/Projects/CLionProjects/ParkingSystem/parkingLot.cpp > CMakeFiles/CarRentalSystem.dir/parkingLot.cpp.i

CMakeFiles/CarRentalSystem.dir/parkingLot.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CarRentalSystem.dir/parkingLot.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/florin/Projects/CLionProjects/ParkingSystem/parkingLot.cpp -o CMakeFiles/CarRentalSystem.dir/parkingLot.cpp.s

CMakeFiles/CarRentalSystem.dir/Client.cpp.o: CMakeFiles/CarRentalSystem.dir/flags.make
CMakeFiles/CarRentalSystem.dir/Client.cpp.o: ../Client.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/florin/Projects/CLionProjects/ParkingSystem/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/CarRentalSystem.dir/Client.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/CarRentalSystem.dir/Client.cpp.o -c /home/florin/Projects/CLionProjects/ParkingSystem/Client.cpp

CMakeFiles/CarRentalSystem.dir/Client.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CarRentalSystem.dir/Client.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/florin/Projects/CLionProjects/ParkingSystem/Client.cpp > CMakeFiles/CarRentalSystem.dir/Client.cpp.i

CMakeFiles/CarRentalSystem.dir/Client.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CarRentalSystem.dir/Client.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/florin/Projects/CLionProjects/ParkingSystem/Client.cpp -o CMakeFiles/CarRentalSystem.dir/Client.cpp.s

# Object files for target CarRentalSystem
CarRentalSystem_OBJECTS = \
"CMakeFiles/CarRentalSystem.dir/main.cpp.o" \
"CMakeFiles/CarRentalSystem.dir/parkingLot.cpp.o" \
"CMakeFiles/CarRentalSystem.dir/Client.cpp.o"

# External object files for target CarRentalSystem
CarRentalSystem_EXTERNAL_OBJECTS =

CarRentalSystem: CMakeFiles/CarRentalSystem.dir/main.cpp.o
CarRentalSystem: CMakeFiles/CarRentalSystem.dir/parkingLot.cpp.o
CarRentalSystem: CMakeFiles/CarRentalSystem.dir/Client.cpp.o
CarRentalSystem: CMakeFiles/CarRentalSystem.dir/build.make
CarRentalSystem: CMakeFiles/CarRentalSystem.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/florin/Projects/CLionProjects/ParkingSystem/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable CarRentalSystem"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/CarRentalSystem.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/CarRentalSystem.dir/build: CarRentalSystem
.PHONY : CMakeFiles/CarRentalSystem.dir/build

CMakeFiles/CarRentalSystem.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/CarRentalSystem.dir/cmake_clean.cmake
.PHONY : CMakeFiles/CarRentalSystem.dir/clean

CMakeFiles/CarRentalSystem.dir/depend:
	cd /home/florin/Projects/CLionProjects/ParkingSystem/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/florin/Projects/CLionProjects/ParkingSystem /home/florin/Projects/CLionProjects/ParkingSystem /home/florin/Projects/CLionProjects/ParkingSystem/cmake-build-debug /home/florin/Projects/CLionProjects/ParkingSystem/cmake-build-debug /home/florin/Projects/CLionProjects/ParkingSystem/cmake-build-debug/CMakeFiles/CarRentalSystem.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/CarRentalSystem.dir/depend

