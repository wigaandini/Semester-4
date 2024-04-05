#include "Pecahan.hpp"
#include <iostream>
using namespace std;

pecahan::pecahan() {
    this->n = 0;
    this->d = 0;
}

pecahan::pecahan(int _n, int _d) {
    this->n = _n;
    this->d = _d;
}

pecahan::pecahan(const pecahan &P) {
    this->n = P.n;
    this->d = P.d;
}

pecahan::~pecahan() {}

int pecahan::getPemb() {
    return n;
}

int pecahan::getPeny() {
    return d;
}

void pecahan::setPemb(int _n) {
    this->n = _n;
}

void pecahan::setPeny(int _d){
    this->d = _d;
}

pecahan pecahan::operator+(const pecahan &P) {
    int pembilang = this->n * P.d + P.n * this->d;
    int penyebut = this->d * P.d;
    return pecahan(pembilang, penyebut);
}

pecahan pecahan::operator-(const pecahan &P) {
    int pembilang = this->n * P.d - P.n * this->d;
    int penyebut = this->d * P.d;
    return pecahan(pembilang, penyebut);
}

pecahan pecahan::operator*(int x) {
    if (x > 0) {
        int pembilang = this->n * x;
        int penyebut = this->d * x;
        return pecahan(pembilang, penyebut);
    }
}

int gcde(int a, int b) {
    if (b == 0)
        return a;
    return gcde(b, a % b);
}

bool pecahan::operator==(const pecahan &P) {
    int gcd1 = gcde(this->n, this->d);
    int gcd2 = gcde(P.n, P.d);

    return (this->n / gcd1 == P.n / gcd2) && (this->d / gcd1 == P.d / gcd2); 
}

float pecahan::RealP() {
    return (float) n/d;
}

void pecahan::Print() {
    cout << "n" << "/" << "d" << endl;
}