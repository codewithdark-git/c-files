// Pseudo code:

// Binary_Search(arr, target, low, high):
//     while low <= high:
//         mid = (low + high) // 2
//         if arr[mid] == target:
//             return mid
//         else if arr[mid] < target:
//             low = mid + 1
//         else:
//             high = mid - 1
//     return -1  // Element not found



#include <iostream>
using namespace std;

int binary_search(int arr[], int size, int target) {
    int low = 0;
    int high = size - 1;

    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == target) {
            return mid;  // Element found, return its index
        } else if (arr[mid] < target) {
            low = mid + 1;  // Search in the right half
        } else {
            high = mid - 1;  // Search in the left half
        }
    }
    return -1;  // Element not found
}

int main() {
    int arr[] = {0, 1, 2, 4, 9};
    int target = 1;
    int size = sizeof(arr) / sizeof(arr[0]);

    int result = binary_search(arr, size, target);
    if (result != -1) {
        cout << "Element found at index " << result << endl;
    } else {
        cout << "Element not found" << endl;
    }
    return 0;
}
