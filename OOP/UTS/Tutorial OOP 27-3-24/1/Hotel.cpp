#include "Hotel.h"
#include <iostream>
using namespace std;

#define CURRENT_YEAR 2024;

Hotel::Hotel(string name, int openYear, string bintang){
    this->name = name;
    this->openYear = openYear;
    this->bintang = bintang;
}
Hotel::Hotel(){
    // name = “noname”; openYear = 1900; Bintang = “none”
    this->name = "noname";
    this->openYear = 1900;
    this->bintang = "none";
}
Hotel::Hotel(const Hotel& h){
    this->name = h.name;
    this->openYear = h.openYear;
    this->bintang = h.bintang;
}
Hotel::~Hotel(){
}
// A = j
// ==, < , >, <=, >=, !=
// <<, >>
Hotel& Hotel::operator=(const Hotel& h){
    // this = A
    this->name = h.name;
    this->openYear = h.openYear;
    this->bintang = h.bintang;
    // disini udah diubah
    return *this;
}
void Hotel::set_name(string name){
    this->name = name;
}
string Hotel::get_name() const{
    return this->name;
}
void Hotel::set_bintang(string bintang){
    this->bintang = bintang;
}
string Hotel::get_bintang() const{
    return this->bintang;
}
int Hotel::get_age() const{
    return CURRENT_YEAR - this->openYear;
}
void Hotel::displayInfo(){
    cout << "Info: " << endl;
    cout << "Nama Hotel: " << this->name << endl;
    cout << "Umur Hotel: " << this->get_age() << endl;
    cout << "Bintang: " << this->bintang << endl;
    cout << "Room Rate: " << this->rate() << endl;
}
int Hotel::rate(){
    // Asumsi Basis rate = 100000
    // Asumsi Rate berkurang 5000 tiap tahun
    // Asumsi Rate 4x untuk bintang 5, 3x untuk bintang 4, 2x untuk bintang 3
    int basisRate = 100000;
    int rate = basisRate - 5000*get_age();
    if (this->bintang == "Bintang_lima") return rate * 4;
    if (this->bintang == "Bintang_empat") return rate * 3;
    if (this->bintang == "Bintang_tiga") return rate * 2;
    return rate;
}










bintang_empat::bintang_empat() : Hotel(){}
bintang_empat::bintang_empat(string name, int openYear) : Hotel(name, openYear, "Bintang_empat"){}
bintang_empat::~bintang_empat(){}
void bintang_empat::set_star(int star){
    this->star = star;
}
int bintang_empat::get_star() const {
    return this->star;
}
void bintang_empat::displayInfo(){
    Hotel::displayInfo();
    cout << "Total Rate: " << this->star * this->rate() << endl;
}




bintang_lima::bintang_lima() : Hotel(){}
bintang_lima::bintang_lima(string name, int openYear) : Hotel(name, openYear, "Bintang_lima"){}
bintang_lima::~bintang_lima(){}
void bintang_lima::set_facility(int facility){
    this->facility = facility;
}
int bintang_lima::get_facility() const{
    return this->facility;
}
int bintang_lima::calculateFacility(){
    return this->facility * 100000;
}
void bintang_lima::displayInfo(){
    Hotel::displayInfo();
    cout << "Expense: " << this->calculateFacility() << endl;
}