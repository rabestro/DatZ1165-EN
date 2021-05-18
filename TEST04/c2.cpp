#include <iostream>
using namespace std;

void removeFirstDigit(char* s) {
    for (char *d = s; *d; ++d)
        if (*d >= '0' && *d <= '9')
            while (*d = *(1+d)) ++d;
}

int main() {
    char test[] = "x23a45bc6";

    cout << test << endl;
    removeFirstDigit(test);
    cout << test;

    return 0;
}