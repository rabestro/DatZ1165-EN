#include <cmath>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

vector<unsigned long> factors(unsigned long number);

/*
 * Lab Task A7.
 *
 * Requirements.
 *
 * Program should output error message for incorrect input data.
 * Program should allow repeated execution without quitting the program.
 */
int main() {
    cout << "The program prints factors of natural number." << endl;
    long number;

    do {
        cout << "Enter a natural number (0 for exit):" << endl;
        cin >> number;
        if (number < 0) {
            cout << "The number should be positive." << endl;
            continue;
        }
        if (number > 0) {
            cout << "The number " << number << " has factors: ";
            auto divisors = factors(number);
            /*
             * The function returns unsorted vector.
             * So we sort the result for pretty output.
             */
            sort(divisors.begin(), divisors.end());
            for (int divisor : divisors) {
                cout << ' ' << divisor;
            }
            if (divisors.size() < 3) {
                cout << " (prime number)";
            }
            cout << endl;
        }
    } while (number != 0);

    return 0;
}

/*
 * For a given number the function returns unsorted vector of it's factors.
 *
 * Time Complexity of the algorithm is O(sqrt(N)).
 */
vector<unsigned long> factors(unsigned long number) {
    vector<unsigned long> divisors;

    for (unsigned long divisor = sqrt(number); divisor > 0; --divisor) {
        if (number % divisor == 0) {
            divisors.push_back(divisor);
            const unsigned long paired_divisor = number / divisor;
            if (paired_divisor != divisor) {
                divisors.push_back(paired_divisor);
            }
        }
    }
    return divisors;
}
