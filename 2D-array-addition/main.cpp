#include <iostream>
using namespace std;

int main() {
    const int rows = 3;
    const int cols = 3;

    // Declare two 2D arrays
    int array1[rows][cols], array2[rows][cols], result[rows][cols];

    // Prompt the user to enter elements of the first 2D array
    cout << "Enter elements of the first " << rows << "x" << cols << " array:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << "Enter element at position [" << i << "][" << j << "]: ";
            cin >> array1[i][j];
        }
    }

    // Prompt the user to enter elements of the second 2D array
    cout << "Enter elements of the second " << rows << "x" << cols << " array:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << "Enter element at position [" << i << "][" << j << "]: ";
            cin >> array2[i][j];
        }
    }

    // Add corresponding elements of the two arrays
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            result[i][j] = array1[i][j] + array2[i][j];
        }
    }

    // Print the resulting array after addition
    cout << "Resultant array after addition:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
