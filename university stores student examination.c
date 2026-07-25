#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct Student {
    char name[50];
    char regNo[20];
    int totalMarks;
};

int main() {
    Student s;
    ifstream inFile("results.dat", ios::binary);

    if (!inFile) {
        cout << "Error opening results.dat file!" << endl;
        return 1;
    }

    cout << "--- Student Results ---" << endl;
    while (inFile.read(reinterpret_cast<char*>(&s), sizeof(s))) {
        cout << "Name: " << s.name << ", Marks: " << s.totalMarks << endl;
    }

    inFile.close();
    return 0;
}
