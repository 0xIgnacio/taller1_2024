# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.28

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
CMAKE_COMMAND = /opt/homebrew/Cellar/cmake/3.28.3/bin/cmake

# The command to remove a file.
RM = /opt/homebrew/Cellar/cmake/3.28.3/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/ignacioperciante/Developer/c-cpp/taller1_main

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/ignacioperciante/Developer/c-cpp/taller1_main/build

# Include any dependencies generated for this target.
include CMakeFiles/Taller1.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Taller1.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Taller1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Taller1.dir/flags.make

CMakeFiles/Taller1.dir/main.cpp.o: CMakeFiles/Taller1.dir/flags.make
CMakeFiles/Taller1.dir/main.cpp.o: /Users/ignacioperciante/Developer/c-cpp/taller1_main/main.cpp
CMakeFiles/Taller1.dir/main.cpp.o: CMakeFiles/Taller1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/ignacioperciante/Developer/c-cpp/taller1_main/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Taller1.dir/main.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Taller1.dir/main.cpp.o -MF CMakeFiles/Taller1.dir/main.cpp.o.d -o CMakeFiles/Taller1.dir/main.cpp.o -c /Users/ignacioperciante/Developer/c-cpp/taller1_main/main.cpp

CMakeFiles/Taller1.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Taller1.dir/main.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/ignacioperciante/Developer/c-cpp/taller1_main/main.cpp > CMakeFiles/Taller1.dir/main.cpp.i

CMakeFiles/Taller1.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Taller1.dir/main.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/ignacioperciante/Developer/c-cpp/taller1_main/main.cpp -o CMakeFiles/Taller1.dir/main.cpp.s

CMakeFiles/Taller1.dir/abb_expresion.cpp.o: CMakeFiles/Taller1.dir/flags.make
CMakeFiles/Taller1.dir/abb_expresion.cpp.o: /Users/ignacioperciante/Developer/c-cpp/taller1_main/abb_expresion.cpp
CMakeFiles/Taller1.dir/abb_expresion.cpp.o: CMakeFiles/Taller1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/ignacioperciante/Developer/c-cpp/taller1_main/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Taller1.dir/abb_expresion.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Taller1.dir/abb_expresion.cpp.o -MF CMakeFiles/Taller1.dir/abb_expresion.cpp.o.d -o CMakeFiles/Taller1.dir/abb_expresion.cpp.o -c /Users/ignacioperciante/Developer/c-cpp/taller1_main/abb_expresion.cpp

CMakeFiles/Taller1.dir/abb_expresion.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Taller1.dir/abb_expresion.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/ignacioperciante/Developer/c-cpp/taller1_main/abb_expresion.cpp > CMakeFiles/Taller1.dir/abb_expresion.cpp.i

CMakeFiles/Taller1.dir/abb_expresion.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Taller1.dir/abb_expresion.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/ignacioperciante/Developer/c-cpp/taller1_main/abb_expresion.cpp -o CMakeFiles/Taller1.dir/abb_expresion.cpp.s

CMakeFiles/Taller1.dir/boolean.cpp.o: CMakeFiles/Taller1.dir/flags.make
CMakeFiles/Taller1.dir/boolean.cpp.o: /Users/ignacioperciante/Developer/c-cpp/taller1_main/boolean.cpp
CMakeFiles/Taller1.dir/boolean.cpp.o: CMakeFiles/Taller1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/ignacioperciante/Developer/c-cpp/taller1_main/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/Taller1.dir/boolean.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Taller1.dir/boolean.cpp.o -MF CMakeFiles/Taller1.dir/boolean.cpp.o.d -o CMakeFiles/Taller1.dir/boolean.cpp.o -c /Users/ignacioperciante/Developer/c-cpp/taller1_main/boolean.cpp

CMakeFiles/Taller1.dir/boolean.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Taller1.dir/boolean.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/ignacioperciante/Developer/c-cpp/taller1_main/boolean.cpp > CMakeFiles/Taller1.dir/boolean.cpp.i

CMakeFiles/Taller1.dir/boolean.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Taller1.dir/boolean.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/ignacioperciante/Developer/c-cpp/taller1_main/boolean.cpp -o CMakeFiles/Taller1.dir/boolean.cpp.s

CMakeFiles/Taller1.dir/datos_arbol.cpp.o: CMakeFiles/Taller1.dir/flags.make
CMakeFiles/Taller1.dir/datos_arbol.cpp.o: /Users/ignacioperciante/Developer/c-cpp/taller1_main/datos_arbol.cpp
CMakeFiles/Taller1.dir/datos_arbol.cpp.o: CMakeFiles/Taller1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/ignacioperciante/Developer/c-cpp/taller1_main/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/Taller1.dir/datos_arbol.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Taller1.dir/datos_arbol.cpp.o -MF CMakeFiles/Taller1.dir/datos_arbol.cpp.o.d -o CMakeFiles/Taller1.dir/datos_arbol.cpp.o -c /Users/ignacioperciante/Developer/c-cpp/taller1_main/datos_arbol.cpp

CMakeFiles/Taller1.dir/datos_arbol.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Taller1.dir/datos_arbol.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/ignacioperciante/Developer/c-cpp/taller1_main/datos_arbol.cpp > CMakeFiles/Taller1.dir/datos_arbol.cpp.i

CMakeFiles/Taller1.dir/datos_arbol.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Taller1.dir/datos_arbol.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/ignacioperciante/Developer/c-cpp/taller1_main/datos_arbol.cpp -o CMakeFiles/Taller1.dir/datos_arbol.cpp.s

CMakeFiles/Taller1.dir/expresion.cpp.o: CMakeFiles/Taller1.dir/flags.make
CMakeFiles/Taller1.dir/expresion.cpp.o: /Users/ignacioperciante/Developer/c-cpp/taller1_main/expresion.cpp
CMakeFiles/Taller1.dir/expresion.cpp.o: CMakeFiles/Taller1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/ignacioperciante/Developer/c-cpp/taller1_main/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/Taller1.dir/expresion.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Taller1.dir/expresion.cpp.o -MF CMakeFiles/Taller1.dir/expresion.cpp.o.d -o CMakeFiles/Taller1.dir/expresion.cpp.o -c /Users/ignacioperciante/Developer/c-cpp/taller1_main/expresion.cpp

CMakeFiles/Taller1.dir/expresion.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Taller1.dir/expresion.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/ignacioperciante/Developer/c-cpp/taller1_main/expresion.cpp > CMakeFiles/Taller1.dir/expresion.cpp.i

CMakeFiles/Taller1.dir/expresion.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Taller1.dir/expresion.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/ignacioperciante/Developer/c-cpp/taller1_main/expresion.cpp -o CMakeFiles/Taller1.dir/expresion.cpp.s

CMakeFiles/Taller1.dir/lista_expresion.cpp.o: CMakeFiles/Taller1.dir/flags.make
CMakeFiles/Taller1.dir/lista_expresion.cpp.o: /Users/ignacioperciante/Developer/c-cpp/taller1_main/lista_expresion.cpp
CMakeFiles/Taller1.dir/lista_expresion.cpp.o: CMakeFiles/Taller1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/ignacioperciante/Developer/c-cpp/taller1_main/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/Taller1.dir/lista_expresion.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Taller1.dir/lista_expresion.cpp.o -MF CMakeFiles/Taller1.dir/lista_expresion.cpp.o.d -o CMakeFiles/Taller1.dir/lista_expresion.cpp.o -c /Users/ignacioperciante/Developer/c-cpp/taller1_main/lista_expresion.cpp

CMakeFiles/Taller1.dir/lista_expresion.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Taller1.dir/lista_expresion.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/ignacioperciante/Developer/c-cpp/taller1_main/lista_expresion.cpp > CMakeFiles/Taller1.dir/lista_expresion.cpp.i

CMakeFiles/Taller1.dir/lista_expresion.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Taller1.dir/lista_expresion.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/ignacioperciante/Developer/c-cpp/taller1_main/lista_expresion.cpp -o CMakeFiles/Taller1.dir/lista_expresion.cpp.s

CMakeFiles/Taller1.dir/lista_string.cpp.o: CMakeFiles/Taller1.dir/flags.make
CMakeFiles/Taller1.dir/lista_string.cpp.o: /Users/ignacioperciante/Developer/c-cpp/taller1_main/lista_string.cpp
CMakeFiles/Taller1.dir/lista_string.cpp.o: CMakeFiles/Taller1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/ignacioperciante/Developer/c-cpp/taller1_main/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/Taller1.dir/lista_string.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Taller1.dir/lista_string.cpp.o -MF CMakeFiles/Taller1.dir/lista_string.cpp.o.d -o CMakeFiles/Taller1.dir/lista_string.cpp.o -c /Users/ignacioperciante/Developer/c-cpp/taller1_main/lista_string.cpp

CMakeFiles/Taller1.dir/lista_string.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Taller1.dir/lista_string.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/ignacioperciante/Developer/c-cpp/taller1_main/lista_string.cpp > CMakeFiles/Taller1.dir/lista_string.cpp.i

CMakeFiles/Taller1.dir/lista_string.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Taller1.dir/lista_string.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/ignacioperciante/Developer/c-cpp/taller1_main/lista_string.cpp -o CMakeFiles/Taller1.dir/lista_string.cpp.s

CMakeFiles/Taller1.dir/menu.cpp.o: CMakeFiles/Taller1.dir/flags.make
CMakeFiles/Taller1.dir/menu.cpp.o: /Users/ignacioperciante/Developer/c-cpp/taller1_main/menu.cpp
CMakeFiles/Taller1.dir/menu.cpp.o: CMakeFiles/Taller1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/ignacioperciante/Developer/c-cpp/taller1_main/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/Taller1.dir/menu.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Taller1.dir/menu.cpp.o -MF CMakeFiles/Taller1.dir/menu.cpp.o.d -o CMakeFiles/Taller1.dir/menu.cpp.o -c /Users/ignacioperciante/Developer/c-cpp/taller1_main/menu.cpp

CMakeFiles/Taller1.dir/menu.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Taller1.dir/menu.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/ignacioperciante/Developer/c-cpp/taller1_main/menu.cpp > CMakeFiles/Taller1.dir/menu.cpp.i

CMakeFiles/Taller1.dir/menu.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Taller1.dir/menu.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/ignacioperciante/Developer/c-cpp/taller1_main/menu.cpp -o CMakeFiles/Taller1.dir/menu.cpp.s

CMakeFiles/Taller1.dir/operador.cpp.o: CMakeFiles/Taller1.dir/flags.make
CMakeFiles/Taller1.dir/operador.cpp.o: /Users/ignacioperciante/Developer/c-cpp/taller1_main/operador.cpp
CMakeFiles/Taller1.dir/operador.cpp.o: CMakeFiles/Taller1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/ignacioperciante/Developer/c-cpp/taller1_main/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/Taller1.dir/operador.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Taller1.dir/operador.cpp.o -MF CMakeFiles/Taller1.dir/operador.cpp.o.d -o CMakeFiles/Taller1.dir/operador.cpp.o -c /Users/ignacioperciante/Developer/c-cpp/taller1_main/operador.cpp

CMakeFiles/Taller1.dir/operador.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Taller1.dir/operador.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/ignacioperciante/Developer/c-cpp/taller1_main/operador.cpp > CMakeFiles/Taller1.dir/operador.cpp.i

CMakeFiles/Taller1.dir/operador.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Taller1.dir/operador.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/ignacioperciante/Developer/c-cpp/taller1_main/operador.cpp -o CMakeFiles/Taller1.dir/operador.cpp.s

CMakeFiles/Taller1.dir/requerimiento.cpp.o: CMakeFiles/Taller1.dir/flags.make
CMakeFiles/Taller1.dir/requerimiento.cpp.o: /Users/ignacioperciante/Developer/c-cpp/taller1_main/requerimiento.cpp
CMakeFiles/Taller1.dir/requerimiento.cpp.o: CMakeFiles/Taller1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/ignacioperciante/Developer/c-cpp/taller1_main/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/Taller1.dir/requerimiento.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Taller1.dir/requerimiento.cpp.o -MF CMakeFiles/Taller1.dir/requerimiento.cpp.o.d -o CMakeFiles/Taller1.dir/requerimiento.cpp.o -c /Users/ignacioperciante/Developer/c-cpp/taller1_main/requerimiento.cpp

CMakeFiles/Taller1.dir/requerimiento.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Taller1.dir/requerimiento.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/ignacioperciante/Developer/c-cpp/taller1_main/requerimiento.cpp > CMakeFiles/Taller1.dir/requerimiento.cpp.i

CMakeFiles/Taller1.dir/requerimiento.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Taller1.dir/requerimiento.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/ignacioperciante/Developer/c-cpp/taller1_main/requerimiento.cpp -o CMakeFiles/Taller1.dir/requerimiento.cpp.s

CMakeFiles/Taller1.dir/string.cpp.o: CMakeFiles/Taller1.dir/flags.make
CMakeFiles/Taller1.dir/string.cpp.o: /Users/ignacioperciante/Developer/c-cpp/taller1_main/string.cpp
CMakeFiles/Taller1.dir/string.cpp.o: CMakeFiles/Taller1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/ignacioperciante/Developer/c-cpp/taller1_main/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object CMakeFiles/Taller1.dir/string.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Taller1.dir/string.cpp.o -MF CMakeFiles/Taller1.dir/string.cpp.o.d -o CMakeFiles/Taller1.dir/string.cpp.o -c /Users/ignacioperciante/Developer/c-cpp/taller1_main/string.cpp

CMakeFiles/Taller1.dir/string.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Taller1.dir/string.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/ignacioperciante/Developer/c-cpp/taller1_main/string.cpp > CMakeFiles/Taller1.dir/string.cpp.i

CMakeFiles/Taller1.dir/string.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Taller1.dir/string.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/ignacioperciante/Developer/c-cpp/taller1_main/string.cpp -o CMakeFiles/Taller1.dir/string.cpp.s

CMakeFiles/Taller1.dir/tipo_dato.cpp.o: CMakeFiles/Taller1.dir/flags.make
CMakeFiles/Taller1.dir/tipo_dato.cpp.o: /Users/ignacioperciante/Developer/c-cpp/taller1_main/tipo_dato.cpp
CMakeFiles/Taller1.dir/tipo_dato.cpp.o: CMakeFiles/Taller1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/ignacioperciante/Developer/c-cpp/taller1_main/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building CXX object CMakeFiles/Taller1.dir/tipo_dato.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Taller1.dir/tipo_dato.cpp.o -MF CMakeFiles/Taller1.dir/tipo_dato.cpp.o.d -o CMakeFiles/Taller1.dir/tipo_dato.cpp.o -c /Users/ignacioperciante/Developer/c-cpp/taller1_main/tipo_dato.cpp

CMakeFiles/Taller1.dir/tipo_dato.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Taller1.dir/tipo_dato.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/ignacioperciante/Developer/c-cpp/taller1_main/tipo_dato.cpp > CMakeFiles/Taller1.dir/tipo_dato.cpp.i

CMakeFiles/Taller1.dir/tipo_dato.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Taller1.dir/tipo_dato.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/ignacioperciante/Developer/c-cpp/taller1_main/tipo_dato.cpp -o CMakeFiles/Taller1.dir/tipo_dato.cpp.s

# Object files for target Taller1
Taller1_OBJECTS = \
"CMakeFiles/Taller1.dir/main.cpp.o" \
"CMakeFiles/Taller1.dir/abb_expresion.cpp.o" \
"CMakeFiles/Taller1.dir/boolean.cpp.o" \
"CMakeFiles/Taller1.dir/datos_arbol.cpp.o" \
"CMakeFiles/Taller1.dir/expresion.cpp.o" \
"CMakeFiles/Taller1.dir/lista_expresion.cpp.o" \
"CMakeFiles/Taller1.dir/lista_string.cpp.o" \
"CMakeFiles/Taller1.dir/menu.cpp.o" \
"CMakeFiles/Taller1.dir/operador.cpp.o" \
"CMakeFiles/Taller1.dir/requerimiento.cpp.o" \
"CMakeFiles/Taller1.dir/string.cpp.o" \
"CMakeFiles/Taller1.dir/tipo_dato.cpp.o"

# External object files for target Taller1
Taller1_EXTERNAL_OBJECTS =

Taller1: CMakeFiles/Taller1.dir/main.cpp.o
Taller1: CMakeFiles/Taller1.dir/abb_expresion.cpp.o
Taller1: CMakeFiles/Taller1.dir/boolean.cpp.o
Taller1: CMakeFiles/Taller1.dir/datos_arbol.cpp.o
Taller1: CMakeFiles/Taller1.dir/expresion.cpp.o
Taller1: CMakeFiles/Taller1.dir/lista_expresion.cpp.o
Taller1: CMakeFiles/Taller1.dir/lista_string.cpp.o
Taller1: CMakeFiles/Taller1.dir/menu.cpp.o
Taller1: CMakeFiles/Taller1.dir/operador.cpp.o
Taller1: CMakeFiles/Taller1.dir/requerimiento.cpp.o
Taller1: CMakeFiles/Taller1.dir/string.cpp.o
Taller1: CMakeFiles/Taller1.dir/tipo_dato.cpp.o
Taller1: CMakeFiles/Taller1.dir/build.make
Taller1: CMakeFiles/Taller1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/ignacioperciante/Developer/c-cpp/taller1_main/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Linking CXX executable Taller1"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Taller1.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Taller1.dir/build: Taller1
.PHONY : CMakeFiles/Taller1.dir/build

CMakeFiles/Taller1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Taller1.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Taller1.dir/clean

CMakeFiles/Taller1.dir/depend:
	cd /Users/ignacioperciante/Developer/c-cpp/taller1_main/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/ignacioperciante/Developer/c-cpp/taller1_main /Users/ignacioperciante/Developer/c-cpp/taller1_main /Users/ignacioperciante/Developer/c-cpp/taller1_main/build /Users/ignacioperciante/Developer/c-cpp/taller1_main/build /Users/ignacioperciante/Developer/c-cpp/taller1_main/build/CMakeFiles/Taller1.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/Taller1.dir/depend
