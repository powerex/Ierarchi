//
// Created by azbest on 11.12.17.
//

#include "Order.h"

Order::Order(const Date &date, double amount, const Employee &employee) : date(date), amount(amount),
                                                                          employee(employee) {}

Order::Order() : amount(250000.0) {}

Order::~Order() {
    std::cout << "Delete order\n";
}

void Order::show() {
    date.show();
    employee.show();
    Firm::show();
}
