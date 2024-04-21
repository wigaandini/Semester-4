// Inheritance

#include <iostream>
using namespace std;

class Kendaraan {
private:
    int nomor;  
    string merk;
    int tahun_keluaran;
    string kategori;
public:
    Kendaraan() : nomor(0), merk("XXX"), tahun_keluaran(0), kategori("Mobil") {}
    Kendaraan(int nomor, const string& merk, int tahun_keluaran, const string& kategori) : nomor(nomor), merk(merk), tahun_keluaran(tahun_keluaran), kategori(kategori) {}
    Kendaraan(const Kendaraan& other) : nomor(other.nomor), merk(other.merk), tahun_keluaran(other.tahun_keluaran), kategori(other.kategori) {}
    ~Kendaraan() {}
    Kendaraan& operator=(const Kendaraan& other) {
        if (this != &other) {
            nomor = other.nomor;
            merk = other.merk;
            tahun_keluaran = other.tahun_keluaran;
            kategori = other.kategori;
        }
        return *this;
    }
    virtual void printInfo() const {
        cout << "Nomor: " << nomor << endl;
        cout << "Merk: " << merk << endl;
        cout << "Tahun keluaran: " << tahun_keluaran << endl;
        cout << "Kategori: " << kategori << endl;
    }
    virtual int BiayaSewa(int lamaSewa) const = 0;
};

class Bus : public Kendaraan {
private:
    int kapasitas;
public:
    Bus() : Kendaraan(), kapasitas(0) {}
    Bus(int nomor, const string& merk, int tahun_keluaran, int kapasitas) : Kendaraan(nomor, merk, tahun_keluaran, "Bus"), kapasitas(kapasitas) {}
    Bus(const Bus& other) : Kendaraan(other), kapasitas(other.kapasitas) {}
    ~Bus() {}
    Bus& operator=(const Bus& other) {
        if (this != &other) {
            Kendaraan::operator=(other);
            kapasitas = other.kapasitas;
        }
        return *this;
    }
    void printInfo() const {
        Kendaraan::printInfo();
        cout << "Kapasitas: " << kapasitas << endl;
    }
    int BiayaSewa(int lamaSewa) const {
        return (1000000 * lamaSewa);
    }
};

class MiniBus : public Kendaraan {
public:
    MiniBus() : Kendaraan() {}
    MiniBus(int nomor, const string& merk, int tahun_keluaran) : Kendaraan(nomor, merk, tahun_keluaran, "MiniBus") {}
    MiniBus(const MiniBus& other) : Kendaraan(other) {}
    ~MiniBus() {}
    MiniBus& operator=(const MiniBus& other) {
        if (this != &other) {
            Kendaraan::operator=(other);
        }
        return *this;
    }
    void printInfo() const {
        Kendaraan::printInfo();
    }
    int BiayaSewa(int lamaSewa) const {
        if (lamaSewa <= 5) {
            return 5000000;
        } else {
            return (5000000 + 500000*(lamaSewa-5));
        }
    }
    int diskon(int lamaSewa) const {
        if (lamaSewa > 10) {
            return BiayaSewa(lamaSewa) * 0.1;
        } else {
            return 0;
        }
    }
};

class Mobil : public Kendaraan {
private:
    string supir;
public:
    Mobil() : Kendaraan(), supir("XXXX") {}
    Mobil(int nomor, const string& merk, int tahun_keluaran, const string& supir) : Kendaraan(nomor, merk, tahun_keluaran, "Mobil"), supir(supir) {}
    Mobil(const Mobil& other) : Kendaraan(other), supir(other.supir) {}
    ~Mobil() {}
    Mobil& operator=(const Mobil& other) {
        if (this != &other) {
            Kendaraan::operator=(other);
            supir = other.supir;
        }
        return *this;
    }
    void printInfo() const {
        Kendaraan::printInfo();
        cout << "Supir: " << supir << endl;
    }
    int BiayaSewa(int lamaSewa) const {
        return (500000 * lamaSewa);
    }
};