# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canoncical targets will work.
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

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/lu/mccad2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/lu/mccad2/bld

# Include any dependencies generated for this target.
include src/CMakeFiles/TKMcCadCSGBuild.dir/depend.make

# Include the progress variables for this target.
include src/CMakeFiles/TKMcCadCSGBuild.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/TKMcCadCSGBuild.dir/flags.make

src/CMakeFiles/TKMcCadCSGBuild.dir/McCadCSGBuild/McCadCSGBuild_SolidFromCSG.cxx.o: src/CMakeFiles/TKMcCadCSGBuild.dir/flags.make
src/CMakeFiles/TKMcCadCSGBuild.dir/McCadCSGBuild/McCadCSGBuild_SolidFromCSG.cxx.o: ../src/McCadCSGBuild/McCadCSGBuild_SolidFromCSG.cxx
	$(CMAKE_COMMAND) -E cmake_progress_report /home/lu/mccad2/bld/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object src/CMakeFiles/TKMcCadCSGBuild.dir/McCadCSGBuild/McCadCSGBuild_SolidFromCSG.cxx.o"
	cd /home/lu/mccad2/bld/src && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/TKMcCadCSGBuild.dir/McCadCSGBuild/McCadCSGBuild_SolidFromCSG.cxx.o -c /home/lu/mccad2/src/McCadCSGBuild/McCadCSGBuild_SolidFromCSG.cxx

src/CMakeFiles/TKMcCadCSGBuild.dir/McCadCSGBuild/McCadCSGBuild_SolidFromCSG.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TKMcCadCSGBuild.dir/McCadCSGBuild/McCadCSGBuild_SolidFromCSG.cxx.i"
	cd /home/lu/mccad2/bld/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/lu/mccad2/src/McCadCSGBuild/McCadCSGBuild_SolidFromCSG.cxx > CMakeFiles/TKMcCadCSGBuild.dir/McCadCSGBuild/McCadCSGBuild_SolidFromCSG.cxx.i

src/CMakeFiles/TKMcCadCSGBuild.dir/McCadCSGBuild/McCadCSGBuild_SolidFromCSG.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TKMcCadCSGBuild.dir/McCadCSGBuild/McCadCSGBuild_SolidFromCSG.cxx.s"
	cd /home/lu/mccad2/bld/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/lu/mccad2/src/McCadCSGBuild/McCadCSGBuild_SolidFromCSG.cxx -o CMakeFiles/TKMcCadCSGBuild.dir/McCadCSGBuild/McCadCSGBuild_SolidFromCSG.cxx.s

src/CMakeFiles/TKMcCadCSGBuild.dir/McCadCSGBuild/McCadCSGBuild_SolidFromCSG.cxx.o.requires:
.PHONY : src/CMakeFiles/TKMcCadCSGBuild.dir/McCadCSGBuild/McCadCSGBuild_SolidFromCSG.cxx.o.requires

src/CMakeFiles/TKMcCadCSGBuild.dir/McCadCSGBuild/McCadCSGBuild_SolidFromCSG.cxx.o.provides: src/CMakeFiles/TKMcCadCSGBuild.dir/McCadCSGBuild/McCadCSGBuild_SolidFromCSG.cxx.o.requires
	$(MAKE) -f src/CMakeFiles/TKMcCadCSGBuild.dir/build.make src/CMakeFiles/TKMcCadCSGBuild.dir/McCadCSGBuild/McCadCSGBuild_SolidFromCSG.cxx.o.provides.build
.PHONY : src/CMakeFiles/TKMcCadCSGBuild.dir/McCadCSGBuild/McCadCSGBuild_SolidFromCSG.cxx.o.provides

src/CMakeFiles/TKMcCadCSGBuild.dir/McCadCSGBuild/McCadCSGBuild_SolidFromCSG.cxx.o.provides.build: src/CMakeFiles/TKMcCadCSGBuild.dir/McCadCSGBuild/McCadCSGBuild_SolidFromCSG.cxx.o
.PHONY : src/CMakeFiles/TKMcCadCSGBuild.dir/McCadCSGBuild/McCadCSGBuild_SolidFromCSG.cxx.o.provides.build

# Object files for target TKMcCadCSGBuild
TKMcCadCSGBuild_OBJECTS = \
"CMakeFiles/TKMcCadCSGBuild.dir/McCadCSGBuild/McCadCSGBuild_SolidFromCSG.cxx.o"

# External object files for target TKMcCadCSGBuild
TKMcCadCSGBuild_EXTERNAL_OBJECTS =

../lib/libTKMcCadCSGBuild.so: src/CMakeFiles/TKMcCadCSGBuild.dir/McCadCSGBuild/McCadCSGBuild_SolidFromCSG.cxx.o
../lib/libTKMcCadCSGBuild.so: /usr/local/lib/libTKBool.so.2.0.0
../lib/libTKMcCadCSGBuild.so: /usr/local/lib/libTKernel.so.2.0.0
../lib/libTKMcCadCSGBuild.so: /usr/local/lib/libTKBO.so.2.0.0
../lib/libTKMcCadCSGBuild.so: /usr/local/lib/libTKG3d.so.2.0.0
../lib/libTKMcCadCSGBuild.so: /usr/local/lib/libTKTopAlgo.so.2.0.0
../lib/libTKMcCadCSGBuild.so: /usr/local/lib/libTKShHealing.so.2.0.0
../lib/libTKMcCadCSGBuild.so: /usr/local/lib/libTKMath.so.2.0.0
../lib/libTKMcCadCSGBuild.so: /usr/local/lib/libTKBRep.so.2.0.0
../lib/libTKMcCadCSGBuild.so: /usr/local/lib/libTKMesh.so.2.0.0
../lib/libTKMcCadCSGBuild.so: /usr/local/lib/libTKGeomAlgo.so.2.0.0
../lib/libTKMcCadCSGBuild.so: /usr/local/lib/libTKG2d.so.2.0.0
../lib/libTKMcCadCSGBuild.so: /usr/local/lib/libTKGeomBase.so.2.0.0
../lib/libTKMcCadCSGBuild.so: /usr/local/lib/libTKPrim.so.2.0.0
../lib/libTKMcCadCSGBuild.so: ../lib/libTKMcCadCSGGeom.so
../lib/libTKMcCadCSGBuild.so: ../lib/libTKMcCadGTOOL.so
../lib/libTKMcCadCSGBuild.so: /usr/local/lib/libTKTopAlgo.so.2.0.0
../lib/libTKMcCadCSGBuild.so: /usr/local/lib/libTKGeomAlgo.so.2.0.0
../lib/libTKMcCadCSGBuild.so: /usr/local/lib/libTKBRep.so.2.0.0
../lib/libTKMcCadCSGBuild.so: /usr/local/lib/libTKGeomBase.so.2.0.0
../lib/libTKMcCadCSGBuild.so: /usr/local/lib/libTKG3d.so.2.0.0
../lib/libTKMcCadCSGBuild.so: /usr/local/lib/libTKG2d.so.2.0.0
../lib/libTKMcCadCSGBuild.so: /usr/local/lib/libTKMath.so.2.0.0
../lib/libTKMcCadCSGBuild.so: /usr/local/lib/libTKernel.so.2.0.0
../lib/libTKMcCadCSGBuild.so: src/CMakeFiles/TKMcCadCSGBuild.dir/build.make
../lib/libTKMcCadCSGBuild.so: src/CMakeFiles/TKMcCadCSGBuild.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX shared library ../../lib/libTKMcCadCSGBuild.so"
	cd /home/lu/mccad2/bld/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/TKMcCadCSGBuild.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/TKMcCadCSGBuild.dir/build: ../lib/libTKMcCadCSGBuild.so
.PHONY : src/CMakeFiles/TKMcCadCSGBuild.dir/build

src/CMakeFiles/TKMcCadCSGBuild.dir/requires: src/CMakeFiles/TKMcCadCSGBuild.dir/McCadCSGBuild/McCadCSGBuild_SolidFromCSG.cxx.o.requires
.PHONY : src/CMakeFiles/TKMcCadCSGBuild.dir/requires

src/CMakeFiles/TKMcCadCSGBuild.dir/clean:
	cd /home/lu/mccad2/bld/src && $(CMAKE_COMMAND) -P CMakeFiles/TKMcCadCSGBuild.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/TKMcCadCSGBuild.dir/clean

src/CMakeFiles/TKMcCadCSGBuild.dir/depend:
	cd /home/lu/mccad2/bld && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/lu/mccad2 /home/lu/mccad2/src /home/lu/mccad2/bld /home/lu/mccad2/bld/src /home/lu/mccad2/bld/src/CMakeFiles/TKMcCadCSGBuild.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/TKMcCadCSGBuild.dir/depend

