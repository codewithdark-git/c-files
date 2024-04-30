#include <iostream>
using namespace std;

class MyClass {
public:
    static int count; // Declaration of static data member

    // Constructor
    MyClass() {
        count++; // Increment count whenever a new object is created
    }

    // Method to get the count
    static int getCount() {
        return count;
    }
};

// Definition of static data member
int MyClass::count = 0;

int main() {
    cout << "Initial count: " << MyClass::getCount() << endl;

    MyClass obj1;
    MyClass obj2;
    MyClass obj3;

    cout << "Count after creating objects: " << MyClass::getCount() << endl;

    return 0;
}
```

Output:
```
Initial count: 0
Count after creating objects: 3
```
