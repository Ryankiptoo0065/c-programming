#include <iostream>
#include <string>
using namespace std;

int main() {
    // Input section
    string name;
    int score, attendanceRate;

    cout << "Student Name: ";
    getline(cin, name);
    cout << "Exam Score (0-100): ";
    cin >> score;
    cout << "Attendance Rate (0-100): ";
    cin >> attendanceRate;

    // Scholarship evaluation
    string award;

    if (score >= 70) {
        if (attendanceRate >= 80) {
            award = "Full Scholarship";
        } else {
            award = "Partial Scholarship";
        }
    } else if (score >= 50) {
        if (attendanceRate >= 85) {
            award = "Partial Scholarship";
        } else {
            award = "No Scholarship";
        }
    } else {
        award = "No Scholarship";
    }

    // Output section
    cout << "\nScholarship Decision\n";
    cout << "Name: " << name << endl;
    cout << "Result: " << award << endl;

    return 0;
}
