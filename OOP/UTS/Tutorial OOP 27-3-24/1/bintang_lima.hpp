#ifndef BINTANG_LIMA_H
#define BINTANG_LIMA_H

#include "Hotel.h"

class bintang_lima : public Hotel {
    private:
        int facility;
    public:
        bintang_lima();
        bintang_lima(string name, int openYear, int facility);
        ~bintang_lima();

        void set_facility(int facility);
        int get_facility();
        int calculateFacility();

        void displayInfo() override;
};

#endif