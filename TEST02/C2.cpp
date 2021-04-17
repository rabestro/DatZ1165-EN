/*  C2
    Given natural number N. 
    Print first N even natural numbers neither divisible by 3 nor 5 in reverse order. 
    Example. N = 10; answer: 34,32,28,26,22,16,14,8,4,2.

    P.S. Example of dirty code programming
*/
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    string result = "";

    for (int i = 1; n > 0; ++i) 
        if (i % 3 && i % 5 && 1 - i % 2) 
            result = to_string((--n, i)) + " " + result; 
            
    cout << result;

    return 0;
}
