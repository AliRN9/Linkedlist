# CMakeList.txt: файл проекта CMake верхнего уровня; проведите глобальную конфигурацию
# и включите сюда подпроекты.
#
cmake_minimum_required (VERSION 3.21)

project (list)
set(CMAKE_CXX_STANDARD 14)

# Включите подпроекты.
##add_subdirectory ("list")
add_executable(list main.cpp Node.cpp Node.h  List.cpp   List.h)
