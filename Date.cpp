#include "Date.h"
#include <iostream>

Date::~Date() {
    std::cout << "Delete date\n";
}

Date::Date(int day, int month, int year) : day(day), month(month), year(year) {}

Date::Date() : day(15), month(12), year(2017) {}

void Date::show() {
    std::cout << "Date: {\n"
              << "\t\tday: " << day << std::endl
              << "\t\tmonth: " << month << std::endl
              << "\t\tyear: " << year << std::endl
              << "}\n";
}
