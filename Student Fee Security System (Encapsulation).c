#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    string admissionNumber;
    double feeBalance;

public:
    void inputStudentData(string n, string admNo, double balance) {
        name = n;
        admissionNumber = admNo;
        feeBalance = balance;
    }

    void makePayment(double amount) {
        if (amount <= feeBalance) {
            feeBalance -= amount;
            cout << "Payment of " << amount << " processed successfully." << endl;
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

    string name, admNo;
    double balance, payment;

    cout << "Enter student name: ";
    getline(cin, name);
    cout << "Enter admission number: ";
    getline(cin, admNo);
    cout << "Enter fee balance: ";
    cin >> balance;

    s1.inputStudentData(name, admNo, balance);

    cout << "\nEnter payment amount: ";
    cin >> payment;
    s1.makePayment(payment);

    s1.displayStatus();

    return 0;
}
