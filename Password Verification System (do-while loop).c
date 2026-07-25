#include <iostream>
#include <string>
using namespace std;

int main() {
    string username, password;
    string correctUsername = "admin";
    string correctPassword = "12345";

    cout << "--- Password Verification System ---" << endl;

    do {
        cout << "\nEnter username: ";
        cin >> username;
        cout << "Enter password: ";
        cin >> password;

        if (username == correctUsername && password == correctPassword) {
            cout << "Access Granted" << endl;
            break;
        } else {
            cout << "Incorrect credentials, try again." << endl;
        }
    } while (true);

    return 0;
}
