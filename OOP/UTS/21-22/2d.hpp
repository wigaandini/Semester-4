#ifndef MOBIL_HPP
#define MOBIL_HPP


#include <iostream>
using namespace std;

class Mobil {
    private:
        string merek;
        string plat;
        int tahun;

    public:
        Mobil(){
            merek = "";
            plat = "";
            tahun = 0;
        }
        Mobil(string merek, string plat, int tahun){
            this->merek = merek;
            this->plat = plat;
            this->tahun = tahun;
        }
        string getMerek(){
            return merek;
        }
        string getPlat(){
            return plat;
        }
        int getTahun(){
            return tahun;
        }
        friend ostream& operator<<(ostream& os, Mobil& m){
            os << "Mobil: " << endl;
            os << "Merek: " << m.merek << endl;
            os << "Plat: " << m.plat << endl;
            os << "Tahun: " << m.tahun << endl;
            return os;
        }
};

#endif