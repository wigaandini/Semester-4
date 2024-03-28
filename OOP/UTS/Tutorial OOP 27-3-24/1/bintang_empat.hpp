#ifndef BINTANG_EMPAT_H
#define BINTANG_EMPAT_H

#include "Hotel.h"

class bintang_empat : public Hotel {
    private:
        int star;
    public:
        bintang_empat();
        bintang_empat(string name, int openYear, int star);
        ~bintang_empat();

        void set_star(int star);
        int get_star();

        void displayInfo() override;  
};

#endif