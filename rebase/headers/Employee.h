#ifndef IERARHI_EMPLOYEE_H
#define IERARHI_EMPLOYEE_H

#include "Person.h"

class Employee: public Person {
protected:
    std::string post;
public:
    Employee(const Date &birthday, const std::string &name, const std::string &surname, const Phone &phone,
             const std::string &post);

    Employee();
    ~Employee() override ;
    void show() override;
};


#endif //IERARHI_EMPLOYEE_H
