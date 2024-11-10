// Pseudo code:

// Bubble_Sort(arr):
//     n = length of arr
//     for i = 0 to n-1:
//         for j = 0 to n-i-2:
//             if arr[j] > arr[j+1]:
//                 swap arr[j] and arr[j+1]


#include <iostream>
using namespace std;

void bubble_sort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        // Last i elements are already in place
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j + 1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: \n";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    bubble_sort(arr, size);

    cout << "Sorted array: \n";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
