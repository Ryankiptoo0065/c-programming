#include <iostream>
#include <string>
using namespace std;
class BankAccount {
private:
    string accountHolderName;
    int accountNumber;
    double accountBalance;
public:
    BankAccount(string name, int number, double balance) {
        accountHolderName = name;
        accountNumber = number;
        accountBalance = balance;
        cout << "Account successfully created" << endl;
    }
    void displayAccount() {
        cout << "\n--- Account Details ---" << endl;
        cout << "Account Holder Name: " << accountHolderName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Balance: $" << accountBalance << endl;
    }
    ~BankAccount() {
        cout << "Account closed successfully" << endl;
    }
};
int main() {
    BankAccount account1("John Doe", 123456, 5000.75);
    account1.displayAccount();
    return 0;
}
