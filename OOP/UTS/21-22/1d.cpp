#include "1a-b.hpp"
#include <iostream>
using namespace std;

int main() {
    bintang_empat aston = bintang_empat("Hotel Aston", 2010);
    bintang_lima padma = bintang_lima("Hotel Padma", 2000);

    aston.displayInfo();
    cout << endl << "=========================\n" << endl;
    padma.displayInfo();


    cout << endl << "=========================\n" << endl;

    Hotel temp1 = aston;
    temp1.displayInfo();

    cout << endl << "=========================\n" << endl;
    
    Hotel& temp2 = padma;
    temp2.displayInfo();

    return 0;
}