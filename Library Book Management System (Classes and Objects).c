#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    string title;
    string author;
    int copies;

public:
    void inputDetails() {
        cout << "Enter book title: ";
        getline(cin, title);
        cout << "Enter author: ";
        getline(cin, author);
        cout << "Enter number of copies available: ";
        cin >> copies;
        cin.ignore();
    }

    void borrowBook() {
        if (copies > 0) {
            copies--;
            cout << "Book borrowed successfully!" << endl;
        } else {
            cout << "No copies available to borrow." << endl;
        }
    }

    void displayDetails() {
        cout << "\n--- Book Details ---" << endl;
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Copies Available: " << copies << endl;
    }
};

int main() {
    Book myBook;

    myBook.inputDetails();

    myBook.borrowBook();

    myBook.displayDetails();

    return 0;
}
