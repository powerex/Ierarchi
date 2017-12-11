//
// Created by azbest on 11.12.17.
//

#include "../headers/Firm.h"

Firm::Firm(): title("Firm"),
              stock(1000000) {}

Firm::~Firm() {
    std::cout << "Delete firm\n";
}

void Firm::show() {
    std::cout << "Firm: {\n"
              << "\t\ttitle: " << title << std::endl
              << "\t\tstock: " << stock << std::endl;
    std::cout << "Foundation date\n";
    foundationdate.show();
    std::cout << "Foundator\n";
    foundator.show();
}

Firm::Firm(const Date &foundationdate, const std::string &title, long stock, const Person &foundator) : foundationdate(
        foundationdate), title(title), stock(stock), foundator(foundator) {}
