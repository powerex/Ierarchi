#include <iostream>

#include "OrderList.h"
#include "Employee.h"

int main() {

    Order o1;
    Order o2;

    OrderList list;
    list.add(o1);
    list.add(o2);
    list.show();

    return 0;
}