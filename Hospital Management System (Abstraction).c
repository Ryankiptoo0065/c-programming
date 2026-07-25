#include <iostream>
#include <string>
using namespace std;
class MedicalStaff {
protected:
    string name;
    string staffID;

public:
    MedicalStaff(string n, string id) : name(n), staffID(id) {}

    virtual double calculateSalary() = 0;
    void displayDetails() {
        cout << "Staff Name: " << name << endl;
        cout << "Staff ID: " << staffID << endl;
    }

    virtual ~MedicalStaff() {}
};

class Doctor : public MedicalStaff {
private:
    double basicSalary;
    double allowance;

public:
    Doctor(string n, string id, double salary, double allow)
        : MedicalStaff(n, id), basicSalary(salary), allowance(allow) {}

    double calculateSalary(); 
	override {
        return basicSalary + allowance;
    }
};

class Nurse : public MedicalStaff {
private:
    double basicSalary;
    double overtimePay;

public:
    Nurse(string n, string id, double salary, double overtime)
        : MedicalStaff(n, id), basicSalary(salary), overtimePay(overtime) {}

    double calculateSalary() override {
        return basicSalary + overtimePay;
    }
};

int main() {
    MedicalStaff* staffPtr;
    Doctor d("Dr. Jane", "DOC101", 50000, 15000);
    staffPtr = &d;
    cout << "\n--- Doctor Details ---" << endl;
    staffPtr->displayDetails();
    cout << "Salary: " << staffPtr->calculateSalary() << endl;
    Nurse n("Nurse John", "NUR202", 30000, 5000);
    staffPtr = &n;
    cout << "\n--- Nurse Details ---" << endl;
    staffPtr->displayDetails();
    cout << "Salary: " << staffPtr->calculateSalary() << endl;

    return 0;
}
