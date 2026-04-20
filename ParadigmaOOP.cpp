#include <iostream>
using namespace std;

class Mahasiswa{

public :
    int nim;
    string nama;
    float nilai;

    void printData(){
        cout << "NIM : " << nim << endl;
        cout << "NAMA : " << nama << endl;
        cout << "NILAI : " << nilai << endl;
    }
}; //batas class

int main(){
    Mahasiswa mhs;
    mhs.nim = 2025;
    mhs.nama = "Mutia";
    mhs. nilai = 90.5;

    mhs.printData();
}