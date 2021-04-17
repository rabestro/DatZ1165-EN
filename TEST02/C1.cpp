/*  C1[6]. 
    Given natural number N. 
    Print first N even natural numbers neither divisible by 3 nor 5. 
    Example. N = 10; answer: 2,4,8,14,16,22,26,28,32,34.
*/
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 1; n > 0; ++i) 
        if (i % 3 && i % 5 && 0 == i % 2) cout << (--n, i) << " ";     
    
    return 0;
}
