#include <cstdio>
#include <iostream>
#include "Date.h"

Date::Date(int year, int month, int day) {
    this->year = year;
    this->month = month;
    this->day = day;
}

Date::~Date() {
    std::cout << "The date object was destroyed" << std::endl;
}

void Date::change(int y, int m, int d) {
    year = y;
    month = m;
    day = d;
}

void Date::print() const {
    printf("%4d-%02d-%02d\n", year, month, day);
}

Date Date::tomorrow() {
    if (day < 28) {

    }
    return Date(year, month, day + 1);
}
