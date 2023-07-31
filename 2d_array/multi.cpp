#include <iostream>
using namespace std;

int main() {
    int row, column;
    cout << "Enter row and column: ";
    cin >> row >> column;

    int ar[row][column];
    cout << "Enter the elements of the first matrix: " << endl;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            cin >> ar[i][j];
        }
    }

    int row1, column1;
    cout << "Enter row and column: ";
    cin >> row1 >> column1;

    int ar1[row1][column1];
    cout << "Enter the elements of the second matrix: " << endl;
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < column1; j++) {
            cin >> ar1[i][j];
        }
    }

    if (column != row1) {
        cout << "Matrix multiplication not possible." << endl;
        return 0;
    }

    int c[row][column1];
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column1; j++) {
            int value = 0; 
            for (int k = 0; k < row1; k++) {
                value += ar[i][k] * ar1[k][j];
            }
            c[i][j] = value;
        }
    }

    cout << "Resultant matrix after multiplication: " << endl;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column1; j++) {
            cout << c[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
