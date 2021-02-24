#ifndef DATE_DATE_H
#define DATE_DATE_H

class Date {
private:
    int year, month, day;
public:
    Date(int, int, int);

    ~Date();

    void change(int, int, int);

    Date tomorrow();

    void print();
};


#endif //DATE_DATE_H
