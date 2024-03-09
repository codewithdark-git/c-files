#include <iostream>
#include <string>
using namespace std;

// Base class
class Base {
public:
    int publicMember;    // Public member

protected:
    int protectedMember; // Protected member

private:
    int privateMember;   // Private member

public:
    // Constructor
    Base(int pub, int pro, int pri) : publicMember(pub), protectedMember(pro), privateMember(pri) {}

    // Method to display all members
    void display() {
        cout << "Base Class Members:" << endl;
        cout << "Public: " << publicMember << endl;
        cout << "Protected: " << protectedMember <<endl;
        cout << "Private: " << privateMember << endl;
    }
};

// Derived class
class Derived : public Base {
public:
    Derived(int pub, int pro, int pri) : Base(pub, pro, pri) {}

    // Method to display all members including inherited members
    void displayDerived() {
        cout << "Derived Class Members:" << endl;
        cout << "Public (Inherited): " << publicMember << endl;
        cout << "Protected (Inherited): " << protectedMember << endl;
        // privateMember is not accessible in derived class
    }
};

int main() {
    // Create an object of derived class
    Derived dObj(1, 2, 3);

    // Access public member of the base class
    cout << "Public member of Base class: " << dObj.publicMember << endl;

    // Access protected member of the base class (not directly accessible)
    // cout << "Protected member of Base class: " << derivedObj.protectedMember << endl; // This will cause an error

    // Access private member of the base class (not accessible)
    // cout << "Private member of Base class: " << derivedObj.privateMember << std::endl; // This will cause an error

    // Call display methods
    dObj.display();         // Display base class members
    dObj.displayDerived();  // Display base class and derived class members

    return 0;
}
