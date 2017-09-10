cmake_minimum_required(VERSION 3.8)
project(untitled)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES "Ejercicio 2/main.cpp" "Ejercicio 2/Profesor.cpp" "Ejercicio 2/Profesor.h" "Ejercicio 2/Fecha.cpp" "Ejercicio 2/Fecha.h" "Ejercicio 2/Monitor.cpp" "Ejercicio 2/Monitor.h" Ejercicio1/DEfiniciondeatributs.cpp Ejercicio1/DEfiniciondeatributs.h "Ejercicio 3/Classes.cpp" "Ejercicio 3/Classes.h")
add_executable(untitled ${SOURCE_FILES})