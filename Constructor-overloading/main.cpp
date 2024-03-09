#include <iostream>
#include <string>
using namespace std;

class Person {
private:
    string name;
    int age;

public:
    // Default constructor
    Person() {
        name = "Unknown";
        age = 0;
    }

    // Constructor with parameters
    Person(string n, int a) {
        name = n;
        age = a;
    }

    // Constructor with only name
    Person(string n) {
        name = n;
        age = 0;
    }

    // Constructor with only age
    Person(int a) {
        name = "Unknown";
        age = a;
    }

    // Method to display information
    void display() const {
        std::cout << "Name: " << name << ", Age: " << age << std::endl;
    }
};

int main() {
    // Create objects using different constructors
    Person person1; // Default constructor
    Person person2("Alice", 30); // Constructor with parameters
    Person person3("Bob"); // Constructor with only name
    Person person4(25); // Constructor with only age

    // Display information of objects
    cout << "Person 1: ";
    person1.display();
    cout << "Person 2: ";
    person2.display();
    cout << "Person 3: ";
    person3.display();
    cout << "Person 4: ";
    person4.display();

    return 0;
}
