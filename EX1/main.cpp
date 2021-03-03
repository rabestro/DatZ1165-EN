#include <iostream>
using namespace std;

// Enter from keyboard coordinates of one place on chess desk using Algebraic notation 
// Print on screen chess desc made from 0 and 1. Print 1 for places where Knight can move 
// from entered place. Print 0 for all other places.

int main() {
    char a;
    int b;
    cin >> a >> b;

    for (int x = a - 'a', y = 8 - b, row = 0; row < 8; ++row) {
        for (int col = 0; col < 8; ++col) {
            cout << (abs(row - y) + abs(col - x) == 3 && row != y && col != x);
        }
        cout << endl;
    }

    return 0;
}