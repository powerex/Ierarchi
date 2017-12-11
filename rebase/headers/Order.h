#ifndef IERARHI_ORDER_H
#define IERARHI_ORDER_H

#include "Firm.h"
#include "Employee.h"
#include "Firm.h"

class Order: public Showable {
protected:
    Date date;
    Firm* firm;
    double amount;
    Employee* compiler;
public:
    Order(const Date &date, Firm *firm, double amount, Employee *compiler);
    Order();
    ~Order() override;
    void show() override;
};


#endif //IERARHI_ORDER_H
