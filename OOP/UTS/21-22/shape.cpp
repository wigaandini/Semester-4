#include <iostream>
using namespace std;

// Base class
class Shape {
public:
    // Virtual function
    void draw() {
        cout << "Drawing a shape" << endl;
    }
};

// Derived class
class Circle : public Shape {
public:
    // Override the virtual function
    void draw() {
        cout << "Drawing a circle" << endl;
    }
};

// Derived class
class Square : public Shape {
public:
    // Override the virtual function
    void draw() {
        cout << "Drawing a square" << endl;
    }
};

int main() {
    Shape* shape1 = new Circle();
    Shape* shape2 = new Square();
    Circle shape3;

    shape1->draw(); // Output: Drawing a circle
    shape2->draw(); // Output: Drawing a square
    shape3.draw();

    delete shape1;
    delete shape2;

    return 0;
}