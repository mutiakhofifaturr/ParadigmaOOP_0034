#include <iostream>
using namespace std;

class Barang{

    public :
    string nama;
    int jumlah;
    string kategori;
    string tanggalproduksi;

     void printData(){
        cout << "NAMA : " << nama << endl;
        cout << "JUMLAH : " << jumlah << endl;
        cout << "KATEGORI : " << kategori << endl;
        cout << "TANGGALPRODUKSI : " << tanggalproduksi << endl;
    }
};//batas class

int main(){
    Barang elektronik;
    elektronik.nama = "HP";
    elektronik.jumlah = 2;
    elektronik.kategori = "elektronik";
    elektronik.tanggalproduksi = "2025-09-18";

    Barang nonElektronik;
    nonElektronik.nama = "buku";
    nonElektronik.jumlah = 4;
    nonElektronik.kategori = "nonElektronik";
    nonElektronik.tanggalproduksi ="2025-10-30";
}
