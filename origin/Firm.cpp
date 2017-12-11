//
// Created by azbest on 11.12.17.
//

#include "Firm.h"

Firm::Firm(int day, int month, int year, const std::string &name, const std::string &surname, const Phone &phone,
           const std::string &title, long stock) : Person(day, month, year, name, surname, phone), title(title),
                                                   stock(stock) {}

Firm::Firm(): title("Firm"),
              stock(1000000) {}

Firm::~Firm() {
    std::cout << "Delete firm\n";
}

void Firm::show() {
    std::cout << "Firm: {\n"
              << "\t\ttitle: " << title << std::endl
              << "\t\tstock: " << stock << std::endl;
    Person::show();
}
