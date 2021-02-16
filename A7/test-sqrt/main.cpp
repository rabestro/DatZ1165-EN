#include <iostream>
#include <cmath>

using namespace std;

int main() {
    unsigned long long max = 0xffffffffffffffff;
    cout << "Max: " << max << endl;
    unsigned long long maxParam = sqrt(max);
    cout << maxParam << endl;
    double delta = 0.0;

    for (auto i = maxParam - 1ul; i > 1; --i) {
        auto param = i * i;
        auto result = sqrt(param);
        delta += abs(result - i);

        if (i % 1000000 == 0) {
         cout << '.';
         }
        auto isEqual = i == (unsigned long long) result;
        if (!isEqual) {
            cout << endl << i << "^2 = " << param << " sqrt = " << result << ", " << isEqual << endl;
        }

    }

    cout << endl << "Delta: " << delta << endl;

    return 0;
}
