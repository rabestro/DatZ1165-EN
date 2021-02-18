#include <iostream>

using namespace std;

int main() {
    cout << "The program prints factors of natural number." << endl;

    for (;;) {
        int number;
        cout << "Enter a natural number (0 for exit):" << endl;
        cin >> number;
        if (number < 0) {
            cout << "The number should be positive." << endl;
            continue;
        }
        if (number == 0) {
            break;
        }
        for (int divisor = 1; divisor <= number / divisor; ++divisor) {
            if (number % divisor == 0) {
                cout << divisor << ' ';
                const int paired_divisor = number / divisor;
                if (paired_divisor != divisor) {
                    cout << paired_divisor << ' ';
                }
            }
        }
        cout << endl;
    }

    return 0;
}
