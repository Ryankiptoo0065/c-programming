#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    double basicSalary, bonus, totalSalary;

    cout << "--- Employee Bonus System ---" << endl;

    for (int i = 1; i <= 5; i++) {
        cout << "\nEnter name of employee " << i << ": ";
        cin.ignore();
        getline(cin, name);

        cout << "Enter basic salary: ";
        cin >> basicSalary;

        bonus = 0.05 * basicSalary;
        totalSalary = basicSalary + bonus;

        cout << "\nEmployee Report:" << endl;
        cout << "Name: " << name << endl;
        cout << "Basic Salary: " << basicSalary << endl;
        cout << "Bonus: " << bonus << endl;
        cout << "Total Salary: " << totalSalary << endl;
    }

    return 0;
}
