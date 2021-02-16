#include <cmath>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

template <class T>
vector<T> factors(T number);

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
    long long int number;

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
 * Time Complexity of the algorithm is O(sqrt(N)).
 */
template <class T>
vector<T> factors(T number) {
    vector<T> divisors;

    for (T divisor = sqrt(number); divisor > 0; --divisor) {
        if (number % divisor == 0) {
            divisors.push_back(divisor);
            T paired_divisor = number / divisor;
            if (paired_divisor != divisor) {
                divisors.push_back(paired_divisor);
            }
        }
    }
    return divisors;
}
