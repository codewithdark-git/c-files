#include <iostream>
#include <string>
using namespace std;

// Define a class named "Person"
class Person {
private:
    string name;
    int age;

public:
    // Constructor
    Person(string n, int a) : name(n), age(a) {}

    // Method to set name
    void setName(string n) {
        name = n;
    }

    // Method to set age
    void setAge(int a) {
        age = a;
    }

    // Method to get name
    string getName() const {
        return name;
    }

    // Method to get age
    int getAge() const {
        return age;
    }

    // Method to display information
    void display() const {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    // Create objects of class Person
    Person person1("Alice", 30);
    Person person2("Bob", 25);

    // Accessing methods of objects
    person1.display();
    person2.display();

    // Modify object's data
    person1.setAge(35);
    person1.display();

    return 0;
}
