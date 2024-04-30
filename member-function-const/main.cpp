#include <iostream>
using namespace std;

class Rectangle {
private:
    int length;
    int width;

public:
    // Constructor
    Rectangle(int l, int w) : length(l), width(w) {}

    // Getter methods
    int getLength() const {
        return length;
    }

    int getWidth() const {
        return width;
    }

    // Method to calculate area (does not modify object's state)
    int calculateArea() const {
        return length * width;
    }
};

int main() {
    Rectangle rect(5, 4);

    // Accessing object's data using const methods
    cout << "Length: " << rect.getLength() << endl;
    cout << "Width: " << rect.getWidth() << endl;

    // Calling a const method to calculate area
    cout << "Area: " << rect.calculateArea() << endl;

    return 0;
}
