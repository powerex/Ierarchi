cmake_minimum_required(VERSION 3.8)
project(Ierarhi)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp
        rebase/sources/Date.cpp rebase/headers/Date.h rebase/sources/Person.cpp rebase/headers/Person.h rebase/sources/Firm.cpp rebase/headers/Firm.h rebase/sources/Employee.cpp rebase/headers/Employee.h rebase/sources/Order.cpp rebase/headers/Order.h rebase/sources/OrderList.cpp rebase/headers/OrderList.h rebase/sources/Showable.cpp rebase/headers/Showable.h)
add_executable(Ierarhi ${SOURCE_FILES})

#origin/Date.cpp origin/Date.h origin/Person.cpp origin/Person.h origin/Firm.cpp origin/Firm.h origin/Employee.cpp origin/Employee.h origin/Order.cpp origin/Order.h origin/OrderList.cpp origin/OrderList.h origin/Showable.cpp origin/Showable.h