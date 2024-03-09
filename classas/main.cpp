#include <iostream>
#include <string> // Include string header for using string data type
using namespace std;

class Employee {
private:
    int id;
    string name;

public:
    // Constructor definition
    Employee(int id, string name) {
        this->id = id; // Use 'this->' to refer to the current object's member
        this->name = name;
    }

  
    int getId() {
        cout << "Employee Name: " << name << endl;
        
    }

    
    string getName() {
        cout << "Employee ID: " << id << endl;
       
    }

    // Function to display employee details
    void show() {
        cout << "Employee Name: " << name << endl;
        cout << "Employee ID: " << id << endl;
    }
};

int main() {
    // Creating an Employee object with ID 23 and name "Ahsan"
    Employee em(23, "Ahsan");
    Employee emm(10, "khan");

    // Using member functions to get and display employee details
    em.show(); // Alternatively, you can use the show() function
    emm.show();

    return 0;
}
