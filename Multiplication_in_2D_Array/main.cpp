#include <iostream>
using namespace std;

int main() {
    int row, col, i, j, k;
 

    int A[row][col], B[row][col], result[row][col];

    cout << "This Program Multiplies Matrices" << endl;
    
    
    cout <<"Enter the number of row in matric: ";
    cin>>row;
    cout <<"Enter the number of col in matric: ";
    cin>>col;
    
    if (col != row) {
        cout << "Matrix multiplication is not possible." << endl;
        return 0;
    }
    
    cout << "Enter values for matrix A: " << endl;
    
    // Input matrix A
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            cin >> A[i][j];
        }
    }

    cout << "Enter values for matrix B: " << endl;

    // Input matrix B
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            cin >> B[i][j];
        }
    }

    // Initialize result matrix with 0
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            result[i][j] = 0;
        }
    }

    // Matrix multiplication
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            for (k = 0; k < col; k++) {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Output the result matrix
    cout << "Result of matrix multiplication:" << endl;
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
