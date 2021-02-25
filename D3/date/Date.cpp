#include <cstdio>
#include <iostream>
#include "Date.h"

Date::Date(int year, int month, int day): year(year), month(month), day(day) {
}

Date::~Date() {
    std::cout << "~~~ The date object was destroyed ~~~" << std::endl;
}

void Date::change(int y, int m, int d) {
    year = y;
    month = m;
    day = d;
}

void Date::print() const {
    printf("%4d-%02d-%02d\n", year, month, day);
}

void Date::tomorrow() const {
    if (day < 28) {

    }
    Date tomorrow = Date(year, month, day + 1);
    tomorrow.print();
}
