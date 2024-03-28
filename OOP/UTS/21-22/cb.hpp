#include <iostream>
using namespace std;

class Base {
    virtual void f() {
    std::cout << "base\n";
    }
};

class Derived: Base {
    void f() override { // keyword 'override’ tidak wajib
    std::cout << "derived\n";
    }
};


