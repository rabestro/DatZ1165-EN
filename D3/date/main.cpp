#include <iostream>
#include "Date.h"
using namespace std;

int main() {

    Date date(2020, 2, 28);
    date.print();
    date.tomorrow();
    date.change(2020, 2, 29);
    date.tomorrow();

    date.change(2020, 1, 31);
    date.print();
    date.tomorrow();

    return 0;
}
