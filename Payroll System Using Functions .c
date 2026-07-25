#include <iostream>
#include <string>
using namespace std;

void getEmployeeDetails(string &name, double &basicSalary, int &overtimeHours) {
    cout << "Enter employee name: ";
    getline(cin, name);

    cout << "Enter basic salary: ";
    cin >> basicSalary;

    cout << "Enter overtime hours: ";
    cin >> overtimeHours;
}

double calculateOvertimePay(int overtimeHours, double ratePerHour) {
    return overtimeHours * ratePerHour;
}

double calculateNetSalary(double basicSalary, double overtimePay) {
    return basicSalary + overtimePay;
}

void displayPayslip(string name, double basicSalary, int overtimeHours, double overtimePay, double netSalary) {
    cout << "\n--- Employee Payslip ---" << endl;
    cout << "Name: " << name << endl;
    cout << "Basic Salary: " << basicSalary << endl;
    cout << "Overtime Hours: " << overtimeHours << endl;
    cout << "Overtime Pay: " << overtimePay << endl;
    cout << "Net Salary: " << netSalary << endl;
}

int main() {
    string employeeName;
    double basicSalary, overtimePay, netSalary;
    int overtimeHours;
    double ratePerHour = 200.0;

    getEmployeeDetails(employeeName, basicSalary, overtimeHours);

    overtimePay = calculateOvertimePay(overtimeHours, ratePerHour);

    netSalary = calculateNetSalary(basicSalary, overtimePay);

    displayPayslip(employeeName, basicSalary, overtimeHours, overtimePay, netSalary);

    return 0;
}
