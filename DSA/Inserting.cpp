// Pseudo code:

// Insert_In_Array(arr, element, position, size):
//     if position > size or position < 0:
//         return "Invalid position"
//     for i = size-1 to position:
//         arr[i+1] = arr[i]  // Shift elements to the right
//     arr[position] = element




#include <iostream>
using namespace std;

void insert_in_array(int arr[], int& size, int element, int position) {
    if (position > size || position < 0) {
        cout << "Invalid position!" << endl;
        return;
    }

    for (int i = size - 1; i >= position; i--) {
        arr[i + 1] = arr[i];  // Shift elements to the right
    }
    
    arr[position] = element;  // Insert new element
    size++;  // Increase the size of the array
}

int main() {
    int arr[10] = {10, 20, 30, 40, 50};
    int size = 5;

    cout << "Before insertion: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    int element = 25, position = 2;
    insert_in_array(arr, size, element, position);

    cout << "After insertion: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
