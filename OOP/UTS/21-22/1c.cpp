#include "1a-b.hpp"
#include <iostream>
using namespace std;

#define CURRENT_YEAR 2024;

Hotel::Hotel() {
    name = "noname";
    openYear = 1990;
    bintang = "none";
}

Hotel::Hotel(string name, int openYear, string bintang) {
    this->name = name;
    this->openYear = openYear; 
    this->bintang = bintang;
}

Hotel::Hotel(const Hotel& h) {
    name = h.name;
    openYear = h.openYear;
    bintang = h.bintang;
}

Hotel::~Hotel() {}

Hotel& Hotel::operator=(const Hotel& h) {
    this->name = h.name;
    this->openYear = h.openYear;
    this->bintang = h.bintang;
    return *this;
}

void Hotel::set_name(string name) {
    this->name = name;
}

string Hotel::get_name() const {
    return name;
}

void Hotel::set_bintang(string bintang) {
    this->bintang = bintang;
}

string Hotel::get_bintang() const {
    return bintang;
}

int Hotel::get_age() const {
    return CURRENT_YEAR - openYear;
}

void Hotel::displayInfo() {
    cout << "Info: " << endl;
    cout << "Nama Hotel: " << name << endl;
    cout << "Umur Hotel: " << get_age() << endl;
    cout << "Bintang: " << bintang << endl;
    cout << "Room Rate: " << rate() << endl;
}

int Hotel::rate() {
    // asumsi basis rate = 100000
    // asumsi rate berkurang 2000 tiap tahun
    // asumsi rate 4x untuk bintang 5, 3x untuk bintang 4, 2x untuk bintang 3
    int basisRate = 100000;
    int rate = basisRate - 2000*get_age();
    if (this->bintang == "Bintang_lima") {
        return rate * 4;
    }
    if (this->bintang == "Bintang_empat") {
        return rate * 3;
    }
    if (this->bintang == "Bintang_tiga") {
        return rate * 2;
    }
    return rate;
}




bintang_empat::bintang_empat() : Hotel() {}

bintang_empat::bintang_empat(string name, int openYear) : Hotel(name, openYear, "Bintang_empat") {}

bintang_empat::~bintang_empat() {}

void bintang_empat::set_star(int star) {
    this->star = star;
}   

int bintang_empat::get_star() const {
    return star;
}  

void bintang_empat::displayInfo() {
    Hotel::displayInfo();
    cout << "Total Rate: " << this->star * this->rate() << endl;
}




bintang_lima::bintang_lima() : Hotel() {}

bintang_lima::bintang_lima(string name, int openYear) : Hotel(name, openYear, "Bintang_lima") {}

bintang_lima::~bintang_lima() {}

void bintang_lima::set_facility(int facility) {
    this->facility = facility;
}

int bintang_lima::get_facility() const {
    return facility;
}

int bintang_lima::calculateFacility() {
    // asumsi facility rate = 100000
    return 100000 * this->facility;

}

void  bintang_lima::displayInfo() {
    Hotel::displayInfo();
    cout << "Expense: " << this->calculateFacility() << endl;
}