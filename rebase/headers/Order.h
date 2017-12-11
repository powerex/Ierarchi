#ifndef IERARHI_ORDER_H
#define IERARHI_ORDER_H

#include "Firm.h"
#include "Employee.h"

class Order: public Firm {
protected:
    Date date;
    double amount;
    Employee employee;
public:
    Order(const Date &date, double amount, const Employee &employee);
    Order();
    ~Order() override;
    void show() override;
};


#endif //IERARHI_ORDER_H
