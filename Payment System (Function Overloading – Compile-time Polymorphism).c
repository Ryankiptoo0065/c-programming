#include <iostream>
using namespace std;

class Payment {
public:
    void processPayment(int amount) {
        cout << "\nCash Payment" << endl;
        cout << "Final Amount: " << amount << endl;
    }

    void processPayment(double amount, double fee) {
        double finalAmount = amount + fee;
        cout << "\nCard Payment" << endl;
        cout << "Amount: " << amount << ", Fee: " << fee << endl;
        cout << "Final Amount: " << finalAmount << endl;
    }

    void processPayment(double amount, double fee, double discount) {
        double finalAmount = (amount + fee) - discount;
        cout << "\nMobile Payment" << endl;
        cout << "Amount: " << amount << ", Fee: " << fee << ", Discount: " << discount << endl;
        cout << "Final Amount: " << finalAmount << endl;
    }
};

int main() {
    Payment p;

    p.processPayment(1000);
    p.processPayment(2000.0, 50.0);
    p.processPayment(3000.0, 100.0, 200.0);

    return 0;
}
