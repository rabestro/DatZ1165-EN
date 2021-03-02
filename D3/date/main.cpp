#include <iostream>
#include "Date.h"

using namespace std;

/*
 * Lab Task D3
 *
 * Requirements.
 *
 * Create class "Date" with three numbers stored - year, month, day.
 *
**/
int main() {

    cout << "Test 1. Create and delete an date object." << endl;

    Date *test1 = new Date(1998, 01, 01);
    test1->print();
    cout << "changed to ";
    test1->change(2000, 12, 30);
    test1->print();
    cout << endl;
    delete test1;

    cout << endl << "Test 2. Create an array of dates and test tomorrow method " << endl;

    Date dates[] = {
            Date(1999, 1, 27), Date(1999, 2, 27), Date(1999, 3, 27), Date(1999, 4, 27),
            Date(2020, 2, 27), Date(400, 2, 27), Date(2021, 2, 27), Date(2020, 2, 28),
            Date(1999, 12, 28)
    };

    for (auto date: dates) {
        date.print();
        for (int i = 5; i > 0; --i) date.tomorrow();
        cout << endl;
    }

    return 0;
}
