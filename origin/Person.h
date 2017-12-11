#ifndef IERARHI_PERSON_H
#define IERARHI_PERSON_H

#include "Date.h"
#include <iostream>

struct Phone {
    int country;
    int region;
    int town;
    int area;
    int id;

    Phone(int country, int region, int town, int area, int id);
    Phone();
    void show();
};
class Person: public Date {
protected:
    std::string name;
    std::string surname;
    Phone phone;
public:
    Person(int day, int month, int year, const std::string &name, const std::string &surname, const Phone &phone);
    Person();
    void show() override;
    ~Person() override ;
};


#endif //IERARHI_PERSON_H
