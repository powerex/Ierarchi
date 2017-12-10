cmake_minimum_required(VERSION 3.8)
project(Ierarhi)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Date.cpp Date.h Person.cpp Person.h Firm.cpp Firm.h Employee.cpp Employee.h Order.cpp Order.h OrderList.cpp OrderList.h Showable.cpp Showable.h)
add_executable(Ierarhi ${SOURCE_FILES})