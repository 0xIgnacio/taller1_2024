cmake_minimum_required(VERSION 3.10)

project(Taller1 VERSION 1.0)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

include_directories(${CMAKE_SOURCE_DIR}/headers)

add_executable(Taller1
    main.cpp
    abb_expresion.cpp
    boolean.cpp
    datos_arbol.cpp
    expresion.cpp
    lista_expresion.cpp
    lista_string.cpp
    menu.cpp
    operador.cpp
    requerimiento.cpp
    string.cpp
    tipo_dato.cpp
)
