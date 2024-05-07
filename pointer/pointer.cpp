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

}
