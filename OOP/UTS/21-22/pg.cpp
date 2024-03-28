#include <iostream>
using namespace std;

class Kendaraan {
    public:
        virtual void info() {
            cout << "Ini adalah Kendaraan\n" << endl;
        }
};

class Mobil : virtual public Kendaraan {
    public:
        void info() {
            cout << "Ini adalah Mobil\n" << endl;
        }
};

class Motor : virtual public Kendaraan {
    public:
        void info() {
            cout << "Ini adalah Motor\n" << endl;
        }
};

class Batmobile : public Mobil, public Motor {
    public:
        void info() {
            cout << "Ini adalah Batmobile\n" << endl;
        }
};


int main() {
    Kendaraan kendaraan;
    Mobil mobil;
    Motor motor;
    Batmobile batmobile;

    Kendaraan* obj1 = &kendaraan;
    cout << "Line 39: " << endl;
    obj1->info();
    obj1 = &mobil;
    cout << "Line 41: " << endl;
    obj1->info();
    obj1 = &motor;
    cout << "Line 43: " << endl;
    obj1->info();
    obj1 = &batmobile;
    cout << "Line 45: " << endl;
    obj1->info();

    Kendaraan obj2 = kendaraan;
    cout << "Line 48: " << endl;
    obj2.info();
    obj2 = mobil;
    cout << "Line 50: " << endl;
    obj2.info();
    obj2 = motor;
    cout << "Line 52: " << endl;
    obj2.info();
    obj2 = batmobile;
    cout << "Line 54: " << endl;
    obj2.info();

    return 0;
}