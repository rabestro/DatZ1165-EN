#include <iostream>

using namespace std;

class Score {
    int player1 = 0;
    int player2 = 0;
    int round = 0;

public:
    void add(int p1, int p2) {
        ++round;
        int result = compare(p1, p2);
        player1 += result == 1;
        player2 += result == -1;

        printResult(result);
        printTotal();
    }

    void printTotal() const {
        cout << "--> Total result is " << player1 << ":" << player2 << endl;
    }

private :
    static int compare(int const p1, int const p2) {
        if (p1 == p2) return 0;
        if (p1 < 21 && p2 > 21) return 1;
        if (p2 < 21 && p1 > 21) return -1;
        return abs(p2 - 21) - abs(p1 - 21) > 0 ? 1 : -1;
    }

    void printResult(int result) const {
        if (result == 0)
            cout << "Spare in " << round << ". set - no winner." << endl;
        else
            cout << "The winner of " << round << ". set is " << (result == 1 ? 1 : 2) << " player." << endl;
    }

};


int main() {
    int rounds = 10;
    Score score;

    for (int round = 1; round <= rounds; ++round) {
        int p1, p2;
        cout << round << ". set:" << endl;
        cout << "1 player result is: " << endl;
        cin >> p1;
        cout << "2 player result is: " << endl;
        cin >> p2;
        score.add(p1, p2);
    }

    return 0;
}
