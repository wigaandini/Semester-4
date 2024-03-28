#ifndef HOTEL_H
#define HOTEL_H

#include <string>
using namespace std;

class Hotel {
    protected:
        string name;
        string bintang;
        int openYear;
    public:
        Hotel();
        Hotel(string name, int openYear, string bintang);
        Hotel(const Hotel&);
        virtual ~Hotel();
        Hotel& operator=(const Hotel&);
        void set_name(string name);
        string get_name() const;
        void set_bintang(string bintang);
        string get_bintang() const;
        int get_age() const;
        virtual void displayInfo();
        int rate();        
};


class bintang_empat : public Hotel {
    private:
        int star;
    public:
        bintang_empat();
        bintang_empat(string name, int openYear);
        ~bintang_empat();
        void set_star(int star);
        int get_star() const;
        void displayInfo() override;
};


class bintang_lima : public Hotel {
    private:
        int facility;
    public:
        bintang_lima();
        bintang_lima(string name, int openYear);
        ~bintang_lima();
        void set_facility(int facility);
        int get_facility() const;
        int calculateFacility();
        void displayInfo() override;
};

#endif