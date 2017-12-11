#ifndef IERARHI_PERSON_H
#define IERARHI_PERSON_H

#include "Showable.h"
#include "Date.h"
#include <iostream>

struct Phone {
    int country;
    int town;
    int area;
    int id;

    Phone(int country, int town, int area, int id);
    Phone();
    void show();
};
class Person: public Showable {
protected:
    Date birthday;
    std::string name;
    std::string surname;
    Phone phone;
public:

    Person(const Date &birthday, const std::string &name, const std::string &surname, const Phone &phone);
    Person();
    void show() override;
    ~Person() override ;
};


#endif //IERARHI_PERSON_H
