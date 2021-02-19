#include <iostream>
#include <cmath>

using namespace std;

void printTriples(const int n) {
    bool found = false;
    for (int x = sqrt(n); x >= 0; --x) {
        const int rest_x = n - x * x;
        for (int y = sqrt(rest_x); y >= 0; --y) {
            const int rest = rest_x - y * y;
            const int z = sqrt(rest);
            if (z * z == rest) {
                found = true;
                cout << '(' << x << ", " << y << ", " << z << ") " << endl;
            }
        }
    }
    if (not found) {
        cout << "No triples found..." << endl;
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
