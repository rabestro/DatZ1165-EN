#include <iostream>
#include <cmath>

using namespace std;

void printTriples(int n) {
    for (int x = sqrt(n); x >= 0; --x) {
        for (int y = sqrt(n - x * x); y >= 0; --y) {
            const int rest = n - x * x - y * y;
            const int z = sqrt(rest);
            if (z * z == rest) {
                cout << '(' << x << ", " << y << ", " << z << ") " << endl;
            }
        }
    }
}

int main() {
    cout << "The program prints all triples of numbers (x, y, z) " << endl;
    cout << "where x^2+y^2+z^2 = n (if such triplets exist)." << endl;

    int number;
    for (;;) {
        cout << "Enter a natural number (0 for exit):" << endl;
        cin >> number;
        if (number < 0) {
            cout << "The number should be positive." << endl;
            continue;
        }
        if (number == 0) {
            break;
        }
        printTriples(number);
    }

    return 0;
}

