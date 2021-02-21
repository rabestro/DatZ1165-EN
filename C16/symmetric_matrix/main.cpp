#include <iostream>

using namespace std;

int main() {
    std::cout << "The program checks is given matrix symmetric." << endl;

    int size;
    for (;;) {
        cout << endl << "Enter size of square matrix (0 for exit):" << endl;
        cin >> size;
        if (size < 0) {
            cout << "The number should be positive or zero." << endl;
            continue;
        }
        if (size == 0) {
            break;
        }
        const int cells = size * size;
        int *matrix = new int(cells);

        cout << "Enter " << cells << " numbers representing the square matrix:" << endl;

        for (int i = 0; i < cells; ++i) cin >> matrix[i];

        cout << "Is the matrix symmetric by ..." << std::boolalpha << endl;

        bool main_diagonal = true;
        bool side_diagonal = true;
        bool horizontal = true;
        bool vertical = true;

        for (int i = 0; i < cells; ++i) {
            main_diagonal &= matrix[i] == matrix[i / size + i % size * size];
            side_diagonal &= matrix[i] == matrix[size * (size - i % size) - i / size - 1];
            horizontal &= matrix[i] == matrix[size * (size - i / size - 1) + i % size];
            vertical &= matrix[i] == matrix[size - i % size - 1 + i / size * size];
        }
        cout << "main diagonal: " << main_diagonal << endl;
        cout << "side diagonal: " << side_diagonal << endl;
        cout << "   horizontal: " << horizontal << endl;
        cout << "     vertical: " << vertical << endl;

        delete matrix;
    }

    return 0;
}
