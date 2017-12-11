#ifndef IERARHI_FIRM_H
#define IERARHI_FIRM_H

#include "Showable.h"
#include "Date.h"
#include "Person.h"

class Firm: public Showable {
protected:
    Date foundationdate;
    std::string title;
    long stock;
    Person foundator;
public:
    Firm();
    Firm(const Date &foundationdate, const std::string &title, long stock, const Person &foundator);
    ~Firm() override ;
    void show() override;
};


#endif //IERARHI_FIRM_H
