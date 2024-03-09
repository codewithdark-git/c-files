#include <iostream>
using namespace std;

int main() {
    const int size = 5; // Size of the array
    int myArray[size];  // Declare an array of integers with size 5

    // Prompt the user to enter elements of the array
    cout << "Enter " << size << " elements of the array:" << std::endl;
    for (int i = 0; i < size; ++i) {
        cout << "Enter element " << i << ": ";
        cin >> myArray[i];
    }

    // Print the elements of the array
    cout << "Elements of the array:" << std::endl;
    for (int i = 0; i < size; ++i) {
        cout << "Element at index " << i << ": " << myArray[i] << std::endl;
    }

    return 0;
}
