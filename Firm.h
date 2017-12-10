#ifndef IERARHI_FIRM_H
#define IERARHI_FIRM_H

#include "Person.h"

class Firm: public Person {
protected:
    std::string title;
    long stock;
public:
    Firm(int day, int month, int year, const std::string &name, const std::string &surname, const Phone &phone,
         const std::string &title, long stock);
    Firm();
    ~Firm() override ;
    void show() override;
};


#endif //IERARHI_FIRM_H
