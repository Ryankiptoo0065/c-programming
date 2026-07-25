#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string title;
    ofstream outFile;

    cout << "Enter book title borrowed today: ";
    getline(cin, title);

    outFile.open("borrowed_books.txt", ios::app);

    if (!outFile) {
        cout << "Error opening file!" << endl;
        return 1;
    }

    outFile << title << endl;
    outFile.close();

    cout << "Book title successfully stored in borrowed_books.txt" << endl;

    return 0;
}
