#include <iostream>
using namespace std;

class Mahasiswa {
    public;
    int nim;
    string nama;
    void tampil() {
        cout << "NIM= " << nim;
        cout << "\nNama= "n << nama;
    }
};

class Matakuliah {
private:
    int sks;
    string kode;
    string namaMK;

public:
    void inputMK() {
        cout << "\nMasukan jumlah SKS= ";
        cin >> sks;
        cout << "\nMasukan kode MK= ";
        cin >> kode;