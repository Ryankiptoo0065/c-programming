#include <iostream>
#include <string>
using namespace std;


class Vehicle {
protected:
    string brand;
    int year;

public:
    void inputVehicle() {
        cout << "Enter vehicle brand: ";
        getline(cin, brand);
        cout << "Enter year of manufacture: ";
        cin >> year;
        cin.ignore();
    }

    void displayVehicle() {
        cout << "Brand: " << brand << endl;
        cout << "Year of Manufacture: " << year << endl;
    }
};

class Car : public Vehicle {
private:
    int doors;
    double engineCapacity;

public:
    void inputCar() {
        inputVehicle();
        cout << "Enter number of doors: ";
        cin >> doors;
        cout << "Enter engine capacity (in cc): ";
        cin >> engineCapacity;
        cin.ignore();
    }

    void displayCar() {
        cout << "\n--- Car Details ---" << endl;
        displayVehicle();
        cout << "Number of Doors: " << doors << endl;
        cout << "Engine Capacity: " << engineCapacity << " cc" << endl;
    }
};

int main() {
    Car c1;
    c1.inputCar();
    c1.displayCar();
    return 0;
}
