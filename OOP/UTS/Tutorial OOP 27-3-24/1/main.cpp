#include "Hotel.h"
#include <iostream>
using namespace std;

int main() {
    bintang_empat aston = bintang_empat("Hotel Aston", 2010);
    bintang_lima padma = bintang_lima("Hotel Padma", 2000);
    // cetak semua hotel dan informasi semua hotel
    // [ gunakan Hotel::displayInfo() ]

    aston.displayInfo();
    padma.displayInfo();

    cout << "=====================" << endl;

    Hotel temp1 = aston;
    temp1.displayInfo();

    cout << "=====================" << endl;

    Hotel& temp2 = padma;
    temp2.displayInfo();

    return 0;
}