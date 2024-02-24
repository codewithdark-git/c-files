#include <iostream>
#include <cctype>

using namespace std;

string caesar_encrypt(const string& message, int key) {
    string result = "";
    for (char ch : message) {
        if (isalpha(ch)) {
            int shift = (ch >= 'A' && ch <= 'Z') ? 'A' : 'a';
            result += static_cast<char>((ch + key - shift + 26) % 26 + shift);
        } else {
            result += ch;
        }
    }
    return result;
}

string caesar_decrypt(const string& encrypted_message, int key) {
    return caesar_encrypt(encrypted_message, -key);
}

int main() {
    string choice;
    cout << "Enter '1' to encrypt or '2' to decrypt: ";
    cin >> choice;
    transform(choice.begin(), choice.end(), choice.begin(), ::tolower);

    if (choice == "1") {
        string message;
        int key;
        cout << "Enter the message to encrypt: ";
        cin.ignore(); // Clear the newline character from the buffer
        getline(cin, message);
        cout << "Enter the key (shift value): ";
        cin >> key;
        string encrypted_message = caesar_encrypt(message, key);
        cout << "Encrypted message: " << encrypted_message << endl;
    } else if (choice == "2") {
        string message;
        int key;
        cout << "Enter the message to decrypt: ";
        cin.ignore(); // Clear the newline character from the buffer
        getline(cin, message);
        cout << "Enter the key (shift value): ";
        cin >> key;
        string decrypted_message = caesar_decrypt(message, key);
        cout << "Decrypted message: " << decrypted_message << endl;
    } else {
        cout << "Invalid choice. Please enter '1' for encrypt or '2' for decrypt." << endl;
    }

    return 0;
}
