// Pseudo code:

// Linear_Search(arr, target):
//     for each element in arr:
//         if element == target:
//             return index of element
//     return -1  // Element not found



#include <iostream>
using namespace std;

int linear_search(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i;  // Element found, return its index
        }
    }
    return -1;  // Element not found
}

int main() {
    int arr[] = {2, 4, 0, 1, 9};
    int target = 1;
    int size = sizeof(arr) / sizeof(arr[0]);

    int result = linear_search(arr, size, target);
    if (result != -1) {
        cout << "Element found at index " << result << endl;
    } else {
        cout << "Element not found" << endl;
    }
    return 0;
}
