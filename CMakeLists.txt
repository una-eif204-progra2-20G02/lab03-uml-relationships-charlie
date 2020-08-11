cmake_minimum_required(VERSION 3.14)
project(basic-00-example)

set(CMAKE_CXX_STANDARD 17)

set(SOURCE_FILES Main.cpp Person.cpp Person.h Professor.cpp Professor.h
        Title.cpp Title.h University.cpp University.h)
        
add_executable(sample Basic00Example.cpp)