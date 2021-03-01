#include <cstdio>
#include <iostream>
#include "Date.h"

Date::Date(int year, int month, int day) : year(year), month(month), day(day) {
    std::cout << "--- The date object was created ---" << std::endl;
}

Date::~Date() {
    std::cout << "~~~ The date object was destroyed ~~~" << std::endl;
}

void Date::change(int year, int month, int day) {
    this->year = year;
    this->month = month;
    this->day = day;
}

void Date::print() const {
    printf("%4d-%02d-%02d\n", year, month, day);
}

void Date::tomorrow() {
    if (day < 28) {
        ++day;
    } else if (month == 2) {
        if (!is_leap_year() or day == 29) {
            ++month;
            day = 1;
        } else {
            ++day;
        }
    } else if (day == 30 && (month == 4 || month == 6 || month == 9 || month == 11)) {
        day = 1;
        ++month;
    } else if (month == 12) {
        day = 1;
        month = 1;
        ++year;
    } else {
        day = 1;
        ++month;
    }
    std::cout << "Tomorrow is ";
    print();
}
