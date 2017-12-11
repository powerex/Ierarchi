//
// Created by azbest on 10.12.17.
//

#include "../headers/Person.h"
#include <iomanip>

void Phone::show() {
    std::cout << "phone: +" << std::setfill('0') << country << '(' << std::setw(3) << town << ')' <<  area << '-' << std::setw(2) << id << std::endl;
}

Phone::Phone(int country, int town, int area, int id) : country(country), town(town),
                                                                    area(area), id(id) {}

Phone::Phone() : country(380), town(555),
area(55), id(0) {}

Person::Person(): name("Noname"), surname("Unknown") {}

void Person::show() {
    std::cout << "Person: {\n"
              << "\t\tname: " << name << std::endl
              << "\t\tsurname: " << surname << std::endl;
    phone.show();
    birthday.show();
    std::cout << "}\n";
    ;

}

Person::~Person() {
    std::cout << "Delete person\n";
}

Person::Person(const Date &birthday, const std::string &name, const std::string &surname, const Phone &phone)
        : birthday(birthday), name(name), surname(surname), phone(phone) {}
