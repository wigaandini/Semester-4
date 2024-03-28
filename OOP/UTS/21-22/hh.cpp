#include <iostream>

class Parent {
public:
    virtual void display() {
        std::cout << "Parent's display()" << std::endl;
    }
};

class Child : public Parent {
public:
    void display() {
        Parent::display();
        std::cout << "Child's display()" << std::endl;
    }
};

int main() {
    Parent* ptr = new Child();
    ptr->display(); // Calls Parent's display(), not Child's display()
    delete ptr;
    return 0;
}
