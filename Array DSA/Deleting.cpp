// Pseudo code:

// Delete_From_Array(arr, position, size):
//     if position >= size or position < 0:
//         return "Invalid position"
//     for i = position to size - 2:
//         arr[i] = arr[i+1]  // Shift elements to the left
//     size = size - 1



#include <iostream>
using namespace std;

void delete_from_array(int arr[], int& size, int position) {
    if (position >= size || position < 0) {
        cout << "Invalid position!" << endl;
        return;
    }

    for (int i = position; i < size - 1; i++) {
        arr[i] = arr[i + 1];  // Shift elements to the left
    }
    
    size--;  // Decrease the size of the array
}

int main() {
    int arr[10] = {10, 20, 30, 40, 50};
    int size = 5;

    cout << "Before deletion: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    int position = 2;
    delete_from_array(arr, size, position);

    cout << "After deletion: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
