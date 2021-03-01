#include <iostream>
#include "Date.h"

using namespace std;

int main() {

    Date dates[] = {Date(2020, 2, 27), Date(400, 2, 27), Date(2021, 2, 27), Date(2020, 2, 28)};

    for (auto date: dates) {
        cout << "The date is ";
        date.print();
        for (int i = 5; i > 0; --i) date.tomorrow();
    }

    return 0;
}
