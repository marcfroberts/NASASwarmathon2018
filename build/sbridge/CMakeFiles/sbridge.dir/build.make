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
CMAKE_SOURCE_DIR = /home/swarmie/SwarmBaseCode-ROS/src/sbridge

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/swarmie/SwarmBaseCode-ROS/build/sbridge

# Include any dependencies generated for this target.
include CMakeFiles/sbridge.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/sbridge.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/sbridge.dir/flags.make

CMakeFiles/sbridge.dir/src/main.cpp.o: CMakeFiles/sbridge.dir/flags.make
CMakeFiles/sbridge.dir/src/main.cpp.o: /home/swarmie/SwarmBaseCode-ROS/src/sbridge/src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/swarmie/SwarmBaseCode-ROS/build/sbridge/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/sbridge.dir/src/main.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/sbridge.dir/src/main.cpp.o -c /home/swarmie/SwarmBaseCode-ROS/src/sbridge/src/main.cpp

CMakeFiles/sbridge.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/sbridge.dir/src/main.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/swarmie/SwarmBaseCode-ROS/src/sbridge/src/main.cpp > CMakeFiles/sbridge.dir/src/main.cpp.i

CMakeFiles/sbridge.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/sbridge.dir/src/main.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/swarmie/SwarmBaseCode-ROS/src/sbridge/src/main.cpp -o CMakeFiles/sbridge.dir/src/main.cpp.s

CMakeFiles/sbridge.dir/src/main.cpp.o.requires:

.PHONY : CMakeFiles/sbridge.dir/src/main.cpp.o.requires

CMakeFiles/sbridge.dir/src/main.cpp.o.provides: CMakeFiles/sbridge.dir/src/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/sbridge.dir/build.make CMakeFiles/sbridge.dir/src/main.cpp.o.provides.build
.PHONY : CMakeFiles/sbridge.dir/src/main.cpp.o.provides

CMakeFiles/sbridge.dir/src/main.cpp.o.provides.build: CMakeFiles/sbridge.dir/src/main.cpp.o


CMakeFiles/sbridge.dir/src/sbridge.cpp.o: CMakeFiles/sbridge.dir/flags.make
CMakeFiles/sbridge.dir/src/sbridge.cpp.o: /home/swarmie/SwarmBaseCode-ROS/src/sbridge/src/sbridge.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/swarmie/SwarmBaseCode-ROS/build/sbridge/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/sbridge.dir/src/sbridge.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/sbridge.dir/src/sbridge.cpp.o -c /home/swarmie/SwarmBaseCode-ROS/src/sbridge/src/sbridge.cpp

CMakeFiles/sbridge.dir/src/sbridge.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/sbridge.dir/src/sbridge.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/swarmie/SwarmBaseCode-ROS/src/sbridge/src/sbridge.cpp > CMakeFiles/sbridge.dir/src/sbridge.cpp.i

CMakeFiles/sbridge.dir/src/sbridge.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/sbridge.dir/src/sbridge.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/swarmie/SwarmBaseCode-ROS/src/sbridge/src/sbridge.cpp -o CMakeFiles/sbridge.dir/src/sbridge.cpp.s

CMakeFiles/sbridge.dir/src/sbridge.cpp.o.requires:

.PHONY : CMakeFiles/sbridge.dir/src/sbridge.cpp.o.requires

CMakeFiles/sbridge.dir/src/sbridge.cpp.o.provides: CMakeFiles/sbridge.dir/src/sbridge.cpp.o.requires
	$(MAKE) -f CMakeFiles/sbridge.dir/build.make CMakeFiles/sbridge.dir/src/sbridge.cpp.o.provides.build
.PHONY : CMakeFiles/sbridge.dir/src/sbridge.cpp.o.provides

CMakeFiles/sbridge.dir/src/sbridge.cpp.o.provides.build: CMakeFiles/sbridge.dir/src/sbridge.cpp.o


# Object files for target sbridge
sbridge_OBJECTS = \
"CMakeFiles/sbridge.dir/src/main.cpp.o" \
"CMakeFiles/sbridge.dir/src/sbridge.cpp.o"

# External object files for target sbridge
sbridge_EXTERNAL_OBJECTS =

/home/swarmie/SwarmBaseCode-ROS/devel/lib/sbridge/sbridge: CMakeFiles/sbridge.dir/src/main.cpp.o
/home/swarmie/SwarmBaseCode-ROS/devel/lib/sbridge/sbridge: CMakeFiles/sbridge.dir/src/sbridge.cpp.o
/home/swarmie/SwarmBaseCode-ROS/devel/lib/sbridge/sbridge: CMakeFiles/sbridge.dir/build.make
/home/swarmie/SwarmBaseCode-ROS/devel/lib/sbridge/sbridge: /opt/ros/kinetic/lib/libroscpp.so
/home/swarmie/SwarmBaseCode-ROS/devel/lib/sbridge/sbridge: /usr/lib/x86_64-linux-gnu/libboost_signals.so
/home/swarmie/SwarmBaseCode-ROS/devel/lib/sbridge/sbridge: /usr/lib/x86_64-linux-gnu/libboost_filesystem.so
/home/swarmie/SwarmBaseCode-ROS/devel/lib/sbridge/sbridge: /opt/ros/kinetic/lib/librosconsole.so
/home/swarmie/SwarmBaseCode-ROS/devel/lib/sbridge/sbridge: /opt/ros/kinetic/lib/librosconsole_log4cxx.so
/home/swarmie/SwarmBaseCode-ROS/devel/lib/sbridge/sbridge: /opt/ros/kinetic/lib/librosconsole_backend_interface.so
/home/swarmie/SwarmBaseCode-ROS/devel/lib/sbridge/sbridge: /usr/lib/x86_64-linux-gnu/liblog4cxx.so
/home/swarmie/SwarmBaseCode-ROS/devel/lib/sbridge/sbridge: /usr/lib/x86_64-linux-gnu/libboost_regex.so
/home/swarmie/SwarmBaseCode-ROS/devel/lib/sbridge/sbridge: /opt/ros/kinetic/lib/libxmlrpcpp.so
/home/swarmie/SwarmBaseCode-ROS/devel/lib/sbridge/sbridge: /opt/ros/kinetic/lib/libroscpp_serialization.so
/home/swarmie/SwarmBaseCode-ROS/devel/lib/sbridge/sbridge: /opt/ros/kinetic/lib/librostime.so
/home/swarmie/SwarmBaseCode-ROS/devel/lib/sbridge/sbridge: /opt/ros/kinetic/lib/libcpp_common.so
/home/swarmie/SwarmBaseCode-ROS/devel/lib/sbridge/sbridge: /usr/lib/x86_64-linux-gnu/libboost_system.so
/home/swarmie/SwarmBaseCode-ROS/devel/lib/sbridge/sbridge: /usr/lib/x86_64-linux-gnu/libboost_thread.so
/home/swarmie/SwarmBaseCode-ROS/devel/lib/sbridge/sbridge: /usr/lib/x86_64-linux-gnu/libboost_chrono.so
/home/swarmie/SwarmBaseCode-ROS/devel/lib/sbridge/sbridge: /usr/lib/x86_64-linux-gnu/libboost_date_time.so
/home/swarmie/SwarmBaseCode-ROS/devel/lib/sbridge/sbridge: /usr/lib/x86_64-linux-gnu/libboost_atomic.so
/home/swarmie/SwarmBaseCode-ROS/devel/lib/sbridge/sbridge: /usr/lib/x86_64-linux-gnu/libpthread.so
/home/swarmie/SwarmBaseCode-ROS/devel/lib/sbridge/sbridge: /usr/lib/x86_64-linux-gnu/libconsole_bridge.so
/home/swarmie/SwarmBaseCode-ROS/devel/lib/sbridge/sbridge: CMakeFiles/sbridge.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/swarmie/SwarmBaseCode-ROS/build/sbridge/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable /home/swarmie/SwarmBaseCode-ROS/devel/lib/sbridge/sbridge"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/sbridge.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/sbridge.dir/build: /home/swarmie/SwarmBaseCode-ROS/devel/lib/sbridge/sbridge

.PHONY : CMakeFiles/sbridge.dir/build

CMakeFiles/sbridge.dir/requires: CMakeFiles/sbridge.dir/src/main.cpp.o.requires
CMakeFiles/sbridge.dir/requires: CMakeFiles/sbridge.dir/src/sbridge.cpp.o.requires

.PHONY : CMakeFiles/sbridge.dir/requires

CMakeFiles/sbridge.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/sbridge.dir/cmake_clean.cmake
.PHONY : CMakeFiles/sbridge.dir/clean

CMakeFiles/sbridge.dir/depend:
	cd /home/swarmie/SwarmBaseCode-ROS/build/sbridge && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/swarmie/SwarmBaseCode-ROS/src/sbridge /home/swarmie/SwarmBaseCode-ROS/src/sbridge /home/swarmie/SwarmBaseCode-ROS/build/sbridge /home/swarmie/SwarmBaseCode-ROS/build/sbridge /home/swarmie/SwarmBaseCode-ROS/build/sbridge/CMakeFiles/sbridge.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/sbridge.dir/depend

