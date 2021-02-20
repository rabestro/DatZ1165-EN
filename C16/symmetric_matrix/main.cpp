#include <iostream>
#include <algorithm>
#include <array>

using namespace std;

int main() {
    std::cout << "Hello, World!" << std::endl;

    int size;
    for (;;) {
        cout << "Enter a matrix size (0 for exit):" << endl;
        cin >> size;
        if (size < 0) {
            cout << "The size should be positive or zero." << endl;
            continue;
        }
        if (size == 0) {
            break;
        }
        const int cells = size * size;
        int Matrix[cells];
        for (int i = 0; i < cells; ++i) cin >> Matrix[i];

    }

    return 0;
}
