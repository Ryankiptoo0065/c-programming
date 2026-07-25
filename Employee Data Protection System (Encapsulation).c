#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string name;
    string employeeID;
    double basicSalary;

public:
    void setEmployeeDetails(string n, string id, double salary) {
        name = n;
        employeeID = id;
        basicSalary = salary;
    }

    double calculateSalary() {
        return basicSalary + (0.10 * basicSalary);
    }

    void displayEmployeeDetails() {
        cout << "\n--- Employee Details ---" << endl;
        cout << "Name: " << name << endl;
        cout << "Employee ID: " << employeeID << endl;
        cout << "Basic Salary: " << basicSalary << endl;
        cout << "Net Salary (with 10% allowance): " << calculateSalary() << endl;
    }
};

int main() {
    Employee emp1;

    string name, id;
    double salary;

    cout << "Enter employee name: ";
    getline(cin, name);
    cout << "Enter employee ID: ";
    getline(cin, id);
    cout << "Enter basic salary: ";
    cin >> salary;

    emp1.setEmployeeDetails(name, id, salary);
    emp1.displayEmployeeDetails();

    return 0;
}
