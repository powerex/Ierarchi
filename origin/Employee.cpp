//
// Created by azbest on 11.12.17.
//

#include "Employee.h"

Employee::Employee(int day, int month, int year, const std::string &name, const std::string &surname,
                   const Phone &phone, const std::string &post) : Person(day, month, year, name, surname, phone),
                                                                  post(post) {}

Employee::Employee() : post("worker") {}

Employee::~Employee() {
    std::cout << "Delete employee\n";
}

void Employee::show() {
    std::cout << "Employee: {\n"
              << "\t\tpost: " << post << std::endl;
    Person::show();
    std::cout << "}\n";
}
