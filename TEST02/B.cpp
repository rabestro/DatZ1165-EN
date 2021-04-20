/* 
    Function with five parameters. Given 3 integer numbers (in first three parameters). 
    Calculate: 
    1) maximum number of the three as the return value, 
    2) minimum number as the 4th parameter, 
    3) average of the first three as the 5th parameter.
*/

#include <iostream>
using namespace std;

int maxMinAvg(int a, int b, int c, int &min, double &avg) {
    int max = a > b ? a : b;
    max = max > c ? max : c;

    min = a < b ? a : b;
    min = min < c ? min : c;

    avg = (a + b + c) / 3.;
    return max;
}

int main() {
    int a = 3, b = -7, c = 11;
    int min;
    double avg;

    cout << "Maximum is " << maxMinAvg(a, b, c, min, avg) << endl;
    cout << "Minimum is " << min << endl;
    cout << "Average is " << avg;
    
    return 0;
}
