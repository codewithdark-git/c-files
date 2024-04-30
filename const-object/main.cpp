#include <iostream>
using namespace std;

class MyClass {
private:
    int x;

public:
    // Constructor
    MyClass(int val) : x(val) {}

    // Method to get the value of x
    int getValue() const {
        return x;
    }

    // Method to set the value of x (const objects cannot have non-const member functions)
    // void setValue(int val) {
    //     x = val;  // This would cause an error for const objects
    // }
};

int main() {
    const MyClass obj1(5); // Creating a constant object obj1
    // obj1.setValue(10); // This would cause a compilation error because setValue is not a const member function

    cout << "Value of obj1: " << obj1.getValue() << endl;

    return 0;
}
