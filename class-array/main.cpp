#include <iostream>
using namespace std;

class MyClass {
private:
    int value;

public:
    // Constructor
    MyClass(int val) : value(val) {}

    // Method to get the value
    int getValue() const {
        return value;
    }
};

int main() {
    const int arraySize = 5;
    MyClass myArray[arraySize] = {1, 2, 3, 4, 5}; // Array of MyClass objects

    // Accessing elements of the array
    for (int i = 0; i < arraySize; ++i) {
        cout << "Element " << i << ": " << myArray[i].getValue() << endl;
    }

    return 0;

}