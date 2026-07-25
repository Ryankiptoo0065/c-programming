#include <iostream>
using namespace std;

int main() {
    double balance, withdrawal;

    cout << "--- Savings Withdrawal System ---" << endl;
    cout << "Enter initial account balance: ";
    cin >> balance;

    while (balance > 0) {
        cout << "\nEnter withdrawal amount: ";
        cin >> withdrawal;

        if (withdrawal > balance) {
            cout << "Withdrawal amount exceeds balance. Transaction stopped." << endl;
            break;
        }

        balance -= withdrawal;
        cout << "Withdrawal successful. Remaining balance: " << balance << endl;

        if (balance == 0) {
            cout << "Account balance is zero. No further withdrawals allowed." << endl;
            break;
        }
    }

    return 0;
}
