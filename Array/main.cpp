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

an array is a data structure that allows you to store multiple values of the same data type under a single name. Each value in an array is identified by an index. Arrays in C++ have a fixed size, meaning you must specify the number of elements it will hold when you declare it.