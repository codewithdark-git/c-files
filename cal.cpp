#include <iostream>
#include <cstring> // for strcmp function
using namespace std;

class Calculator {
private:
    int first_number, second_number, result;

public:
    int addition() {
        cout << "This is an Addition Function\n";
        cout << "Enter your First Number: ";
        cin >> first_number;
        cout << "Enter your Second Number: ";
        cin >> second_number;
        result = first_number + second_number;
        return result;
    }

    int subtraction() {
        cout << "This is a Subtraction Function\n";
        cout << "Enter your First Number: ";
        cin >> first_number;
        cout << "Enter your Second Number: ";
        cin >> second_number;
        result = first_number - second_number;
        return result;
    }

    int multiplication() {
        cout << "This is a Multiplication Function\n";
        cout << "Enter your First Number: ";
        cin >> first_number;
        cout << "Enter your Second Number: ";
        cin >> second_number;
        result = first_number * second_number;
        return result;
    }

    int division() {
        cout << "This is a Division Function\n";
        cout << "Enter your First Number: ";
        cin >> first_number;
        cout << "Enter your Second Number: ";
        cin >> second_number;

        if (second_number == 0) {
            cout << "Cannot divide by zero\n";
            return 0;
        } else {
            result = first_number / second_number;
            return result;
        }
    }

    int modulo() {
        cout << "This is a Remainder after division\n";
        cout << "Enter your First Number: ";
        cin >> first_number;
        cout << "Enter your Second Number: ";
        cin >> second_number;
        result = first_number % second_number;
        return result;
    }
};

int main() {
    Calculator cal;
    int choice;
    cout << "Enter Your Choice: ";
    cin >> choice;

    cout<<"For Addition Enter --------> 1";
    cout<<"For subtraction Enter --------> 2";
    cout<<"For Multiplication Enter --------> 3";
    cout<<"For Division Enter --------> 4";
    cout<<"For (Remainder after division)  Enter --------> 5 ";

    if (choice == 1 ) {
        cout << "Addition result: " << cal.addition() << endl;
    } else if (choice == 2)  {
        cout << "Subtraction result: " << cal.subtraction() << endl;
    } else if (choice == 3)  {
        cout << "Multiplication result: " << cal.multiplication() << endl;
    } else if (choice == 4) {
        cout << "Division result: " << cal.division() << endl;
    } else if (choice == 5)  {
        cout << "Modulo result: " << cal.modulo() << endl;
    } else {
        cout << "Invalid choice!" << endl;
    }

    return 0;
}
