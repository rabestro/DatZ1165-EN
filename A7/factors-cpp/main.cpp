#include <iostream>
#include <vector>
#include<algorithm>

using namespace std;

vector<long> factors(long number);

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
    int number;

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
             * So we sort the result to pretty output.
             */
            sort(divisors.begin(), divisors.end());
            for (int divisor : divisors) {
                cout << ' ' << divisor;
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
vector<long> factors(const long number) {
    vector<long> divisors;

    for (long divisor = 1; divisor * divisor <= number; ++divisor) {
        if (number % divisor == 0) {
            divisors.push_back(divisor);
            const long paired_divisor = number / divisor;
            if (paired_divisor != divisor) {
                divisors.push_back(paired_divisor);
            }
        }
    }
    return divisors;
}
