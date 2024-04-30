#include <iostream>
using namespace std;

class MyClass {
private:
    int x;

public:
    // Constructor
    MyClass(int val) : x(val) {
        cout << "Constructor called. x = " << x << endl;
    }

    // Copy constructor
    MyClass(const MyClass &source) {
        x = source.x;
        cout << "Copy constructor called. x = " << x << endl;
    }

    // Method to get the value of x
    int getValue() const {
        return x;
    }
};

int main() {
    MyClass obj1(5); // Creating an object obj1
    MyClass obj2 = obj1; // Using copy constructor to create obj2 as a copy of obj1

    cout << "Value of obj1: " << obj1.getValue() << endl;
    cout << "Value of obj2: " << obj2.getValue() << endl;

    return 0;
}
