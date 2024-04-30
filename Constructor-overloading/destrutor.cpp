#include <iostream>
using namespace std;

class MyClass {
    private:
        int *ptr;
    public:
        // Constructor
        MyClass() {
            ptr = new int; // Allocate memory
            cout << "Constructor called. Memory allocated." << endl;
        }
        
        // Destructor
        ~MyClass() {
            delete ptr; // Free memory
            cout << "Destructor called. Memory freed." << endl;
        }
};

int main() {
    // Creating object of MyClass
    MyClass obj;
    
    // Rest of the program...
    
    return 0;
}
