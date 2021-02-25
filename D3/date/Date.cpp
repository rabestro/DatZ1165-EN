#include <cstdio>
#include <iostream>
#include "Date.h"

Date::Date(int year, int month, int day) : year(year), month(month), day(day) {
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

void Date::tomorrow() const {
    int t_year = year;
    int t_month = month;
    int t_day = day;

    if (day < 28) {
        ++t_day;
    } else if (month == 2) {
        if (!is_leap_year() or day == 29) {
            ++t_month;
            t_day = 1;
        } else {
            ++t_day;
        }
    } else if (day == 30 && (month == 4 || month == 6 || month == 9 || month == 11)) {
        t_day = 1;
        ++t_month;
    } else if (month == 12) {
        t_day = 1;
        t_month = 1;
        ++t_year;
    } else {
        t_day = 1;
        ++t_month;
    }
    std::cout << "Tomorrow is ";

    Date(t_year, t_month, t_day).print();
}
