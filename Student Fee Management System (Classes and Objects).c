#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    string admissionNumber;
    double feeBalance;

public:
    void inputStudent() {
        cout << "Enter student name: ";
        getline(cin, name);
        cout << "Enter admission number: ";
        getline(cin, admissionNumber);
        cout << "Enter fee balance: ";
        cin >> feeBalance;
        cin.ignore();
    }

    void makePayment(double amount) {
        if (amount <= feeBalance) {
            feeBalance -= amount;
            cout << "Payment of " << amount << " accepted." << endl;
        } else {
            cout << "Payment exceeds fee balance. Transaction not allowed." << endl;
        }
    }

    void displayStatus() {
        cout << "\n--- Student Fee Status ---" << endl;
        cout << "Name: " << name << endl;
        cout << "Admission Number: " << admissionNumber << endl;
        cout << "Remaining Fee Balance: " << feeBalance << endl;
    }
};

int main() {
    Student s1;
    s1.inputStudent();
    double payment;
    cout << "\nEnter payment amount: ";
    cin >> payment;
    s1.makePayment(payment);
    s1.displayStatus();

    return 0;
}
