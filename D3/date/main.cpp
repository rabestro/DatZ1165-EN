#include <iostream>
#include "Date.h"

int main() {
    std::cout << "Hello, World!" << std::endl;

    Date date(2020, 11, 5);
    date.print();

    date.change(2000, 1, 2);
    date.print();

    date.tomorrow();

    return 0;
}
