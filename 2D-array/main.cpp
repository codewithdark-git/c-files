#include <iostream>
using namespace std;

int main() {
    const int rows = 3;
    const int cols = 3;
    int myArray[rows][cols];

    // Prompt the user to enter elements of the 2D array
    cout << "Enter " << (rows * cols) << " elements of the 2D array:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << "Enter element at position [" << i << "][" << j << "]: ";
            cin >> myArray[i][j];
        }
    }

    // Print the elements of the 2D array in matrix form
    cout << "Elements of the 2D array in matrix form:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << myArray[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}


