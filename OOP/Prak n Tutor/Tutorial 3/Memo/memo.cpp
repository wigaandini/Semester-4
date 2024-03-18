#include "memo.h"
#include <iostream>

/* 
    Membuat objek Memo dengan 'pesan' dan 'untuk' kosong
*/
Memo::Memo() {
    pesan = "";
    untuk = "";
}

/* 
    Membuat objek Memo dengan isi sesuai yang diberikan.
    
    Jika panjang pesan melebihi panjang maksimum, maka
    metode ini melemparkan PesanKepanjanganException.
*/
Memo::Memo(string pesan, string untuk) {
    if(pesan.length() > PESAN_MAX){
        throw PesanKepanjanganException();
    }
    this->pesan = pesan;
    this->untuk = untuk;
}

/* 
    Menyalin nilai pesan dan untuk ke objek lain
*/
Memo& Memo::operator=(Memo& m) {
    this->pesan = m.pesan;
    this->untuk = m.untuk;
    return *this;
}


/*
    Mendapatkan nilai pesan
*/

string Memo::getPesan() {
    return pesan;
}

/*
    Mendapatkan nilai untuk
*/
string Memo::getUntuk() {
    return untuk;
}