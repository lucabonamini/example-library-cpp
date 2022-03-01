cmake_minimum_required(VERSION 3.15)

project(application VERSION 1.0 LANGUAGES CXX)

find_package(MyLibraries 1.0 REQUIRED EXACT)

add_executable(app src/application.cpp)

target_link_libraries(app PRIVATE MyLibraries::MyLibraryA)
