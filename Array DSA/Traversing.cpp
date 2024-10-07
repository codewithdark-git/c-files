// Pseudo code:

// Traverse_Array(arr):
//     for i = 0 to length of arr - 1:
//         print arr[i]


#include <iostream>
using namespace std;

void traverse_array(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Array elements: ";
    traverse_array(arr, size);

    return 0;
}
