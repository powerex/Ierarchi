
#ifndef IERARHI_ORDERLIST_H
#define IERARHI_ORDERLIST_H

#include "Order.h"
#include <vector>

class OrderList: public Showable {
protected:
    std::vector<Order> list;
public:
    OrderList(const std::vector<Order> &list);
    OrderList();
    virtual ~OrderList();

    void show() override;
    void add(Order order);

    OrderList(Showable *pShowable);
};


#endif //IERARHI_ORDERLIST_H
