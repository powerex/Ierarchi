//
// Created by azbest on 11.12.17.
//

#include "../headers/Employee.h"

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

Employee::Employee(const Date &birthday, const std::string &name, const std::string &surname, const Phone &phone,
                   const std::string &post) : Person(birthday, name, surname, phone), post(post) {}
