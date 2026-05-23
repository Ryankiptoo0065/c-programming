#include <iostream>
using namespace std;

int main() {
    // Input section
    int bookID, dueDate, returnDate;
    cout << "Book ID: ";
    cin >> bookID;
    cout << "Due Date (integer): ";
    cin >> dueDate;
    cout << "Return Date (integer): ";
    cin >> returnDate;

    // Calculate overdue days
    int overdueDays = returnDate - dueDate;

    // Decide fine rate
    int ratePerDay = 0;
    if (overdueDays > 0 && overdueDays <= 7) {
        ratePerDay = 20;
    } else if (overdueDays >= 8 && overdueDays <= 14) {
        ratePerDay = 50;
    } else if (overdueDays >= 15) {
        ratePerDay = 100;
    }

    // Compute fine amount
    int totalFine = (overdueDays > 0) ? overdueDays * ratePerDay : 0;

    // Output results
    cout << "\n--- Fine Summary ---\n";
    cout << "Book ID: " << bookID << endl;
    cout << "Due Date: " << dueDate << endl;
    cout << "Return Date: " << returnDate << endl;
    cout << "Days Overdue: " << (overdueDays > 0 ? overdueDays : 0) << endl;
    cout << "Rate per Day: Ksh. " << ratePerDay << endl;
    cout << "Total Fine: Ksh. " << totalFine << endl;

    return 0;
}
