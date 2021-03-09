#include <iostream>

using namespace std;

class Score {
    int player1 = 0;
    int player2 = 0;

    void print() {
        printf("Total result is %d:%d\n", player1, player2);
        cout << "Total result is " << player1 << ":" << player2 << endl;
    }
};

int compare(int const p1, int const p2) {
    if (p1 == p2) return 0;
    if (p1 < 21 && p2 > 21) return 1;
    if (p2 < 21 && p1 > 21) return -1;
    return abs(p2 - 21) - abs(p1 - 21);
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
