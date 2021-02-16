#include <iostream>
#include <math.h>

using namespace std;

int main() {
    unsigned long long max = 0xffffffffffffffff;
    cout << "Max: " << max << endl;
    unsigned long long maxParam = sqrt(max);
    cout << maxParam << endl;

    for (unsigned long long i = maxParam; i > 1; --i) {
        unsigned long long param = i * i;
        double result = sqrt (param);
        auto isEqual = i == (unsigned long long) result;
        if (i % 1000000 == 0) {
         cout << '.';
         }
        if (!isEqual) {
            cout << endl << i << "^2 = " << param << " sqrt = " << result << ", " << isEqual << endl;
        }

    }
    return 0;
}
