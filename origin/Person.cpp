//
// Created by azbest on 10.12.17.
//

#include "Person.h"
#include <iomanip>

void Phone::show() {
    std::cout << "phone: +" << std::setfill('0') << country << '(' << region << ')' << town << '-' << area << '-' << std::setw(2) << id << std::endl;
}

Phone::Phone(int country, int region, int town, int area, int id) : country(country), region(region), town(town),
                                                                    area(area), id(id) {}

Phone::Phone() : country(380), region(44), town(555),
area(55), id(00) {}

Person::Person(int day, int month, int year, const std::string &name, const std::string &surname, const Phone &phone)
        : Date(day, month, year), name(name), surname(surname), phone(phone) {}

Person::Person(): name("Noname"), surname("Unknown") {}

void Person::show() {
    std::cout << "Person: {\n"
              << "\t\tname: " << name << std::endl
              << "\t\tsurname: " << surname << std::endl;
    phone.show();
    Date::show();
    std::cout << "}\n";
    ;

}

Person::~Person() {
    std::cout << "Delete person\n";
}
