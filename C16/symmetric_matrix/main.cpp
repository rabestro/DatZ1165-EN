/*
 * Lab Task C16.
 *
 * Requirements.
 *
 * Program should output error message for incorrect input data.
 * Program should allow repeated execution without quitting the program.
 *
 *  Check - is given matrix symmetric against center or any axes (horizontal or vertical)
**/
#include <iostream>

using namespace std;

int main() {
    cout << "The program checks is given matrix symmetric." << endl;

    for (;;) {
        cout << endl << "Enter size of square matrix (0 for exit):" << endl;
        int size;
        cin >> size;
        if (size < 0) {
            cout << "The number should be positive or zero." << endl;
            continue;
        }
        if (size == 0) {
            break;
        }
        int cells = size * size;
        int matrix[cells];
        cout << "Enter " << cells << " number" << (cells > 1 ? "s" : "") << " representing the matrix:" << endl;
        for (int i = 0; i < cells; ++i) cin >> matrix[i];

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
        cout << "Is the matrix symmetric against ..." << boolalpha << endl;
        cout << "    main diagonal: " << main_diagonal << endl;
        cout << "    side diagonal: " << side_diagonal << endl;
        cout << "  horizontal axis: " << horizontal << endl;
        cout << "    vertical axis: " << vertical << endl;
    }

    return 0;
}
