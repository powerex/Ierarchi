//
// Created by azbest on 11.12.17.
//

#include "OrderList.h"

OrderList::OrderList(const std::vector<Order> &list) : list(list) {}

OrderList::OrderList() {}

OrderList::~OrderList() {
    std::cout << "Delete list\n";
}

void OrderList::show() {
//    for(auto& order: list) {
//        order.show();
//    }

    for (size_t i=0; i<list.size(); i++) {
        list[i].show();
    }
}

void OrderList::add(Order order) {
    list.push_back(order);
}

OrderList::OrderList(Showable *pShowable) {

}
