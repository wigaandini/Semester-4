// class Hotel
// File: Hotel.h

#ifndef HOTEL_H
#define HOTEL_H

#include <string>
using namespace std;

class Hotel {
  protected:
  // atribut
    string name;
    string bintang; // Melati; bintang_tiga; bintang_empat; Bintang_lima
    int openYear;
  public:
    // user-defined constructor: set nilai atribut berdasarkan nilai parameter 	masukan
    Hotel(string name, int openYear, string bintang);
    
    // Default constructor: set nilai atribut sbb:
    // name = “noname”; openYear = 1900; Bintang = “none”
    Hotel();

    // Copy constructor
    Hotel(const Hotel& h);

    // Destructor
    virtual ~Hotel();

    // Operator Assignment
    // A = h, A adalah objek yang sudah ada sebelumnya
    Hotel& operator=(const Hotel& h);

    // ... set_name(...)
    void set_name(string name);

    // ... get_name(...)
    string get_name() const;

    // ... set_bintang(...)
    void set_bintang(string bintang);

    // ... get_Bintang(...)
    string get_bintang() const;

    // ... get_age(), asumsikan tahun saat ini dapat diakses dengan makro CURRENT_YEAR
    int get_age() const;

    // ... displayInfo(): Mencetak nama, umur hotel, Bintang, dan room rate
    virtual void displayInfo();

    // ... rate(): Menghitung biaya menginap sesuai dengan umur dan tergantung 	Bintang hotel
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

#endif // HOTEL_H
