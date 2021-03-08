#include <iostream>

using namespace std;

// Enter sequence of numbers until two following zeros (0 0) are entered. 
// Print how many negative, how many positive and how many zeros are entered.

int main() {
    int positive = 0;
    int negative = 0;
    int zeros = 0;
    int number = -1;
    bool nonZero;

    do {
        nonZero = number != 0;
        cin >> number;
        if (number > 0) ++positive;
        else if (number < 0) ++negative;
        else ++zeros;
    } while (nonZero || number != 0);

    cout << positive << " positive "
         << negative << " negative "
         << zeros << " zeros." << endl;

    return 0;
}