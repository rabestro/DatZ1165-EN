#include <iostream>

void printFactors(int number);

using namespace std;

int main() {
    cout << "The program prints factors of natural number." << endl;
    int number;

    do {
        cout << "Enter a natural number (0 for exit):" << endl;
        cin >> number;
        if (number < 0) {
            cout << "The number should be positive" << endl;
            continue;
        }
        if (number > 0) {
            printFactors(number);
        }
    } while (number != 0);
    return 0;
}

void printFactors(int number) {
    cout << "Factors for " << number << ":";
    cout << endl;
}
