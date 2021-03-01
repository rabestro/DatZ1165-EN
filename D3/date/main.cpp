#include <iostream>
#include "Date.h"

using namespace std;

int main() {

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
