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

    cout << endl << "Test 1. Create and delete an date object." << endl;

    Date *test_date = new Date(1998, 01, 01);
    test_date->print();
    cout << endl;
    delete test_date;

    cout << endl << endl << "Test 2. Method change." << endl;
    test_date = new Date(1800, 02, 01);
    test_date->print();
    cout << "changed to ";
    test_date->change(2000, 12, 30);
    test_date->print();
    cout << endl;
    delete test_date;


    cout << endl << "Test 3. Create an array of dates and test tomorrow method " << endl;

    Date dates[] = {
            Date(1600, 2, 27), Date(1700, 2, 27), Date(1999, 3, 27), Date(1999, 4, 27),
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
