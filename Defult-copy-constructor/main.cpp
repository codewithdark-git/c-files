#include <iostream>

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
    MyClass obj1(5); // Creating an object obj1

    // Using the default copy constructor to create obj2 as a copy of obj1
    MyClass obj2 = obj1;

    // Printing the values of obj1 and obj2
    std::cout << "Value of obj1: " << obj1.getValue() << std::endl;
    std::cout << "Value of obj2: " << obj2.getValue() << std::endl;

    return 0;
}
