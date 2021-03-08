#include <iostream>

using namespace std;

// Enter from keyboard real number with 2 digits after decimal separator.
// Print entered amount of EUR split in denomination.
// Print how many pieces of money of each nominal are necessary to get entered amount.

int main() {
    constexpr int denominations[] = {50000, 10000, 5000, 2000, 1000, 500, 200, 100, 50, 10, 5, 2, 1};
    float money;
    cin >> money;
    int cents = money * 100;

    for (auto denomination : denominations) {
        int pieces = cents / denomination;
        cout << pieces << " - ";
        if (denomination >= 100) cout << denomination / 100;
        else printf("%.2f", denomination / 100.);
        cout << endl;
        cents %= denomination;
    }
    return 0;
}