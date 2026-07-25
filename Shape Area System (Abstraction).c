#include <iostream>
#include <cmath>
using namespace std;
class Shape {
public:
    virtual double calculateArea() = 0;
    virtual ~Shape() {}
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    double calculateArea() override {
        return M_PI * radius * radius;
    }
};

class Rectangle : public Shape {
private:
    double length, width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}

    double calculateArea() override {
        return length * width;
    }
};

int main() {
    Shape* shapePtr;
    Circle c(7.0);
    shapePtr = &c;
    cout << "\n--- Circle ---" << endl;
    cout << "Area: " << shapePtr->calculateArea() << endl;
    Rectangle r(10.0, 5.0);
    shapePtr = &r;
    cout << "\n--- Rectangle ---" << endl;
    cout << "Area: " << shapePtr->calculateArea() << endl;

    return 0;
}
