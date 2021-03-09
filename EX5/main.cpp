
#include <iostream>
#include <cmath>

using namespace std;

/*
 * The method prints all triples of numbers (a, b, c)
 * where all numbers in triplet are less than n and c² = a² + b²
 *
 * if no such triplets exist then "No triples found..." printed.
 */
void printTriples(const int n) {
    bool found = false;
    for (int a = sqrt(n * n / 2); a > 0; --a) {
        const int rest = n * n - a * a;
        for (int b = sqrt(rest); b > 0; --b) {
            const int hypo = a * a + b * a;
            int c = sqrt(hypo);
            if (c * c == hypo) {
                found = true;
                cout << a << "^2 + " << b << "^2 = " << c << "^2" << endl;
            }
        }
    }
    if (not found) {
        cout << "No triples found..." << endl;
    }
}

int main() {
    cout << "The program prints all triples of numbers (a, b, c) " << endl;
    cout << "where each number < n and a² + b² = c² (if such triplets exist)." << endl;

    int number;
    for (;;) {
        cout << endl << "Enter a natural number (0 for exit):" << endl;
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