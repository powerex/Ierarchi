//
// Created by azbest on 11.12.17.
//

#include "../headers/Order.h"

Order::Order() : amount(250000.0) {
    firm = new Firm;
    Date td = Date(1,1,2003);
    Phone tp = Phone(380,44,555,1111);
    compiler = new Employee(
            td,
            "Clerk",
            "Worker",
            tp,
            "Director"
    );
}

Order::~Order() {
    std::cout << "Delete order\n";
}

void Order::show() {
    std::cout << "Order {\n";
    date.show();
    firm->show();
    std::cout << "\t\tamount " << amount << std::endl;
    std::cout << "Compiler: \n";
    compiler->show();
    std::cout << "}\n";
}

Order::Order(const Date &date, Firm *firm, double amount, Employee *compiler) : date(date), firm(firm), amount(amount),
                                                                                compiler(compiler) {}
