# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.25

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
CMAKE_COMMAND = /home/anonymous/.local/lib/python3.8/site-packages/cmake/data/bin/cmake

# The command to remove a file.
RM = /home/anonymous/.local/lib/python3.8/site-packages/cmake/data/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/anonymous/Documents/Bitcoin-protocol/Bitcoin-Protocol

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/anonymous/Documents/Bitcoin-protocol/Bitcoin-Protocol/build

# Include any dependencies generated for this target.
include CMakeFiles/bitcoin_proto.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/bitcoin_proto.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/bitcoin_proto.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/bitcoin_proto.dir/flags.make

CMakeFiles/bitcoin_proto.dir/src/Block.cpp.o: CMakeFiles/bitcoin_proto.dir/flags.make
CMakeFiles/bitcoin_proto.dir/src/Block.cpp.o: /home/anonymous/Documents/Bitcoin-protocol/Bitcoin-Protocol/src/Block.cpp
CMakeFiles/bitcoin_proto.dir/src/Block.cpp.o: CMakeFiles/bitcoin_proto.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/anonymous/Documents/Bitcoin-protocol/Bitcoin-Protocol/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/bitcoin_proto.dir/src/Block.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/bitcoin_proto.dir/src/Block.cpp.o -MF CMakeFiles/bitcoin_proto.dir/src/Block.cpp.o.d -o CMakeFiles/bitcoin_proto.dir/src/Block.cpp.o -c /home/anonymous/Documents/Bitcoin-protocol/Bitcoin-Protocol/src/Block.cpp

CMakeFiles/bitcoin_proto.dir/src/Block.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/bitcoin_proto.dir/src/Block.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/anonymous/Documents/Bitcoin-protocol/Bitcoin-Protocol/src/Block.cpp > CMakeFiles/bitcoin_proto.dir/src/Block.cpp.i

CMakeFiles/bitcoin_proto.dir/src/Block.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/bitcoin_proto.dir/src/Block.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/anonymous/Documents/Bitcoin-protocol/Bitcoin-Protocol/src/Block.cpp -o CMakeFiles/bitcoin_proto.dir/src/Block.cpp.s

CMakeFiles/bitcoin_proto.dir/src/BlockHeader.cpp.o: CMakeFiles/bitcoin_proto.dir/flags.make
CMakeFiles/bitcoin_proto.dir/src/BlockHeader.cpp.o: /home/anonymous/Documents/Bitcoin-protocol/Bitcoin-Protocol/src/BlockHeader.cpp
CMakeFiles/bitcoin_proto.dir/src/BlockHeader.cpp.o: CMakeFiles/bitcoin_proto.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/anonymous/Documents/Bitcoin-protocol/Bitcoin-Protocol/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/bitcoin_proto.dir/src/BlockHeader.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/bitcoin_proto.dir/src/BlockHeader.cpp.o -MF CMakeFiles/bitcoin_proto.dir/src/BlockHeader.cpp.o.d -o CMakeFiles/bitcoin_proto.dir/src/BlockHeader.cpp.o -c /home/anonymous/Documents/Bitcoin-protocol/Bitcoin-Protocol/src/BlockHeader.cpp

CMakeFiles/bitcoin_proto.dir/src/BlockHeader.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/bitcoin_proto.dir/src/BlockHeader.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/anonymous/Documents/Bitcoin-protocol/Bitcoin-Protocol/src/BlockHeader.cpp > CMakeFiles/bitcoin_proto.dir/src/BlockHeader.cpp.i

CMakeFiles/bitcoin_proto.dir/src/BlockHeader.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/bitcoin_proto.dir/src/BlockHeader.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/anonymous/Documents/Bitcoin-protocol/Bitcoin-Protocol/src/BlockHeader.cpp -o CMakeFiles/bitcoin_proto.dir/src/BlockHeader.cpp.s

CMakeFiles/bitcoin_proto.dir/src/utils.cpp.o: CMakeFiles/bitcoin_proto.dir/flags.make
CMakeFiles/bitcoin_proto.dir/src/utils.cpp.o: /home/anonymous/Documents/Bitcoin-protocol/Bitcoin-Protocol/src/utils.cpp
CMakeFiles/bitcoin_proto.dir/src/utils.cpp.o: CMakeFiles/bitcoin_proto.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/anonymous/Documents/Bitcoin-protocol/Bitcoin-Protocol/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/bitcoin_proto.dir/src/utils.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/bitcoin_proto.dir/src/utils.cpp.o -MF CMakeFiles/bitcoin_proto.dir/src/utils.cpp.o.d -o CMakeFiles/bitcoin_proto.dir/src/utils.cpp.o -c /home/anonymous/Documents/Bitcoin-protocol/Bitcoin-Protocol/src/utils.cpp

CMakeFiles/bitcoin_proto.dir/src/utils.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/bitcoin_proto.dir/src/utils.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/anonymous/Documents/Bitcoin-protocol/Bitcoin-Protocol/src/utils.cpp > CMakeFiles/bitcoin_proto.dir/src/utils.cpp.i

CMakeFiles/bitcoin_proto.dir/src/utils.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/bitcoin_proto.dir/src/utils.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/anonymous/Documents/Bitcoin-protocol/Bitcoin-Protocol/src/utils.cpp -o CMakeFiles/bitcoin_proto.dir/src/utils.cpp.s

# Object files for target bitcoin_proto
bitcoin_proto_OBJECTS = \
"CMakeFiles/bitcoin_proto.dir/src/Block.cpp.o" \
"CMakeFiles/bitcoin_proto.dir/src/BlockHeader.cpp.o" \
"CMakeFiles/bitcoin_proto.dir/src/utils.cpp.o"

# External object files for target bitcoin_proto
bitcoin_proto_EXTERNAL_OBJECTS =

libbitcoin_proto.a: CMakeFiles/bitcoin_proto.dir/src/Block.cpp.o
libbitcoin_proto.a: CMakeFiles/bitcoin_proto.dir/src/BlockHeader.cpp.o
libbitcoin_proto.a: CMakeFiles/bitcoin_proto.dir/src/utils.cpp.o
libbitcoin_proto.a: CMakeFiles/bitcoin_proto.dir/build.make
libbitcoin_proto.a: CMakeFiles/bitcoin_proto.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/anonymous/Documents/Bitcoin-protocol/Bitcoin-Protocol/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX static library libbitcoin_proto.a"
	$(CMAKE_COMMAND) -P CMakeFiles/bitcoin_proto.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/bitcoin_proto.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/bitcoin_proto.dir/build: libbitcoin_proto.a
.PHONY : CMakeFiles/bitcoin_proto.dir/build

CMakeFiles/bitcoin_proto.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/bitcoin_proto.dir/cmake_clean.cmake
.PHONY : CMakeFiles/bitcoin_proto.dir/clean

CMakeFiles/bitcoin_proto.dir/depend:
	cd /home/anonymous/Documents/Bitcoin-protocol/Bitcoin-Protocol/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/anonymous/Documents/Bitcoin-protocol/Bitcoin-Protocol /home/anonymous/Documents/Bitcoin-protocol/Bitcoin-Protocol /home/anonymous/Documents/Bitcoin-protocol/Bitcoin-Protocol/build /home/anonymous/Documents/Bitcoin-protocol/Bitcoin-Protocol/build /home/anonymous/Documents/Bitcoin-protocol/Bitcoin-Protocol/build/CMakeFiles/bitcoin_proto.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/bitcoin_proto.dir/depend

