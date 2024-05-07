#include <iostream>
using namespace std;

class mahasiswa {
public:
    int nim;
    void showNim() {
        cout << "no induk = " << nim << endl;
    }
}; 

int main() {

    mahasiswa mhs{ 1 }; // object mhs
    mhs.showNim(); //member access operator

    mahasiswa& refmhs = mhs; 
    refmhs.nim = 2;
    mhs.showNim();

    mahasiswa* pmhs = &mhs;
    pmhs->nim = 3;
    pmhs->showNim();
    return 0;

}
