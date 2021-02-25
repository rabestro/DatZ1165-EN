#pragma once

class Date {
private:
    int year, month, day;
public:
    Date(int, int, int);

    ~Date();

    // change the date
    void change(int, int, int);

    // calculates and prints the next date
    void tomorrow() const;

    // prints the date in format YYYY-MM-DD
    void print() const;

    bool is_leap_year() const {
        return year % 400 == 0 || (year % 4 == 0 && year % 100 != 0);
    }
};

