#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    void inputPerson() {
        cout << "Enter name: ";
        getline(cin, name);
        cout << "Enter age: ";
        cin >> age;
        cin.ignore();
    }

    void displayPerson() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student : public Person {
private:
    string admissionNumber;
    string studentClass;

public:
    void inputStudent() {
        inputPerson();
        cout << "Enter admission number: ";
        getline(cin, admissionNumber);
        cout << "Enter class: ";
        getline(cin, studentClass);
    }

    void displayStudent() {
        cout << "\n--- Student Details ---" << endl;
        displayPerson();
        cout << "Admission Number: " << admissionNumber << endl;
        cout << "Class: " << studentClass << endl;
    }
};

int main() {
    Student s1;
    s1.inputStudent();
    s1.displayStudent();
    return 0;
}
