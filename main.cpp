#include <iostream>

#include "rebase/headers/Date.h"
#include "rebase/headers/Person.h"
#include "rebase/headers/Firm.h"
#include "rebase/headers/Employee.h"

int main() {

    /*Order o1;
    Order o2;

    OrderList list;
    list.add(o1);
    list.add(o2);
    list.show();*/

    Showable* value = new Employee;

    value->show();

    delete value;
    return 0;
}