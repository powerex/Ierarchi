#ifndef IERARHI_DATE_H
#define IERARHI_DATE_H

#include "Showable.h"

class Date: public Showable {
protected:
    int day;
    int month;
    int year;
public:
    void show() override;
    Date(int day, int month, int year);
    Date();
    ~Date() override;
};

#endif //IERARHI_DATE_H
