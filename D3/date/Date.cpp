#include <cstdio>
#include <iostream>
#include "Date.h"

using std::endl;
using std::cout;

Date::Date(int year, int month, int day) : year(year), month(month), day(day) {
    cout << "    -> The date object was created -" << endl;
}

Date::~Date() {
    cout << "    ~~ The date object was destroyed ~" << endl;
}

void Date::change(int year, int month, int day) {
    this->year = year;
    this->month = month;
    this->day = day;
}

void Date::print() const {
    printf("%4d-%02d-%02d ", year, month, day);
}

void Date::tomorrow() {
    if (day < 28) {
        ++day;
    } else if (month == 2) {
        if (!is_leap_year() or day == 29) {
            day = 1;
            ++month;
        } else {
            ++day;
        }
    } else if (day < 30) {
        ++day;
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        day = 1;
        ++month;
    } else if (day == 30) {
        ++day;
    } else if (month == 12) {
        day = 1;
        month = 1;
        ++year;
    } else {
        day = 1;
        ++month;
    }
    cout << "-> ";
    print();
}
