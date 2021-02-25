#pragma once

class Date {
private:
    int year, month, day;
public:
    Date(int, int, int);

    ~Date();

    void change(int, int, int);

    // calculates and prints the next date
    void tomorrow() const;

    // prints the date in format YYYY-MM-DD
    void print() const;
};

