#include <iostream>
using namespace std;

class Mahasiswa {
public:
    int nim;
    string nama;
    void tampil() {
        cout << "NIM= " << nim;
        cout << "\nNama= " << nama;
    }
};

class Matakuliah {
private:
    int sks;
    string kode;
    string namaMk;

public:
    void inputMK() {

        cout << "\nMasukan jumlah SKS= ";
        cin >> sks;
        cout << "\nMasukan kode MK= ";
        cin >> kode;
        cout << " \nMasukan Nama MK= ";
        cin >> namaMk;
    }

    void tampilMK() {
        cout << "n\Jumlah sks= " << sks;
        cout << "\nKode MK=" << kode;
        cout << "\nNama MK= " << namaMk << endl;

    }
};

int main() {
    Mahasiswa mhs;
    Matakuliah MK;

    cout << "Masukan NIM= ";
}