#include <iostream>
#include <string>
using namespace std;

void getCustomerDetails(string &name, int &units) {
    cout << "Enter customer name: ";
    getline(cin, name);

    cout << "Enter number of units consumed: ";
    cin >> units;
}

double calculateBill(int units, double ratePerUnit) {
    return units * ratePerUnit;
}

double applyDiscount(int units, double bill) {
    if (units > 100) {
        return bill * 0.10;
    } else {
        return 0.0;
    }
}

void displayBill(string name, int units, double bill, double discount, double finalAmount) {
    cout << "\n--- Water Bill ---" << endl;
    cout << "Customer Name: " << name << endl;
    cout << "Units Consumed: " << units << endl;
    cout << "Total Bill (before discount): " << bill << endl;
    cout << "Discount: " << discount << endl;
    cout << "Final Amount Payable: " << finalAmount << endl;
}

int main() {
    string customerName;
    int units;
    double ratePerUnit = 50.0;
    double bill, discount, finalAmount;

    getCustomerDetails(customerName, units);

    bill = calculateBill(units, ratePerUnit);

    discount = applyDiscount(units, bill);

    finalAmount = bill - discount;

    displayBill(customerName, units, bill, discount, finalAmount);

    return 0;
}
