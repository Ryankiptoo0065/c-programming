#include <iostream>
#include <string>
using namespace std;

int main() {
    string studentName;
    int age, score;

    cout << "Enter student name: ";
    getline(cin, studentName);

    cout << "Enter age: ";
    cin >> age;

    cout << "Enter exam score (0-100): ";
    cin >> score;

    cout << "\n--- Admission Decision ---" << endl;
    if (age >= 18) {
        if (score >= 50) {
            cout << "Name: " << studentName << endl;
            cout << "Age: " << age << endl;
            cout << "Score: " << score << endl;
            cout << "Decision: Admitted" << endl;
        } else {
            cout << "Name: " << studentName << endl;
            cout << "Age: " << age << endl;
            cout << "Score: " << score << endl;
            cout << "Decision: Not Admitted - Low Score" << endl;
        }
    } else {
        cout << "Name: " << studentName << endl;
        cout << "Age: " << age << endl;
        cout << "Score: " << score << endl;
        cout << "Decision: Not Admitted - Underage" << endl;
    }

    return 0;
}
