#include "Kendaraan.hpp"

Kendaraan::Kendaraan() {
    nomor = 0;
    kategori = "Mobil";
    merk = "XXX";
    tahun = 0;
}

Kendaraan::Kendaraan(int nomor, string kategori, string merk, int tahun) {
    this->nomor = nomor;
    this->kategori = kategori;
    this->merk = merk;
    this->tahun = tahun;
}

Kendaraan::Kendaraan(const Kendaraan& k) {
    nomor = k.nomor;
    kategori = k.kategori;
    merk = k.merk;
    tahun = k.tahun;
}

Kendaraan::~Kendaraan() {
}

Kendaraan Kendaraan::operator=(const Kendaraan& k) {
    if (this != &k) {
        nomor = k.nomor;
        kategori = k.kategori;
        merk = k.merk;
        tahun = k.tahun;
    }
    return *this;
}

void Kendaraan::printInfo() {
    cout << "Nomor: " << nomor << endl;
    cout << "Kategori: " << kategori << endl;
    cout << "Merk: " << merk << endl;
    cout << "Tahun: " << tahun << endl;
}

int Kendaraan::biayaSewa(int lamaSewa) {
    int res = 0;
    if (kategori == "Bus") {
        res = 1000000 * lamaSewa;
    }
    else if (kategori == "Minibus") {
        if (lamaSewa <= 5) {
            res = 5000000;
        }
        else {
            res = 5000000 + 500000 * (lamaSewa - 5);
        }
    }
    else if (kategori == "Mobil") {
        res = 500000 * lamaSewa;
    }
    return res;
}

KoleksiKendaraan::KoleksiKendaraan() : size (100) {
    this->Neff = 0;
    this->buffer = new Kendaraan[this->size];
}

KoleksiKendaraan::KoleksiKendaraan(int s) : size(s) {
    this->Neff = 0;
    this->buffer = new Kendaraan[this->size];
}

KoleksiKendaraan::KoleksiKendaraan(const KoleksiKendaraan& k) : size(k.size) {
    this->Neff = k.Neff;
    this->buffer = new Kendaraan[this->size];
    for (int i = 0; i < this->Neff; i++) {
        this->buffer[i] = k.buffer[i];
    }
}

KoleksiKendaraan::~KoleksiKendaraan() {
    delete[] this->buffer;
}

void KoleksiKendaraan::printAll() {
    for (int i = 0; i < this->Neff; i++) {
        cout << "Kendaraan ke-" << i + 1 << endl;
        this->buffer[i].printInfo();
        cout << endl;
    }
}

void KoleksiKendaraan::operator<<(Kendaraan k) {
    this->buffer[this->Neff] = k;
    this->Neff++;
}

void KoleksiKendaraan::operator<<(KoleksiKendaraan kd) {
    for (int i = 0; i < kd.Neff; i++) {
        this->buffer[this->Neff] = kd.buffer[i];
        this->Neff++;
    }
}