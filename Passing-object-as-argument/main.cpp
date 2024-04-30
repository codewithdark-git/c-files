#include <iostream>
using namespace std;

class MyClass {
private:
    int x;

public:
    // Constructor
    MyClass(int val) : x(val) {}

    // Method to set the value of x
    void setValue(int val) {
        x = val;
    }

    // Method to get the value of x
    int getValue() const {
        return x;
    }
};

// Function that modifies the object passed to it
void modifyObject(MyClass obj, int newVal) {
    obj.setValue(newVal);
}

int main() {
    MyClass obj(5);

    cout << "Before modification: " << obj.getValue() << endl;

    modifyObject(obj, 10);

    cout << "After modification: " << obj.getValue() << endl;

    return 0;
}
