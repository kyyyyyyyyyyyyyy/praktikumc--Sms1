#include <iostream>

using namespace std;

class Mobil {
    public:
        string merek;
        int tahun;

    void tampilInfo() {
        cout << "merek: " << merek << ", tahun: " << tahun << endl;
    }
};

int main () {

    Mobil mobil1;
    mobil1.merek = "toyota";
    mobil1.tahun = 2000;
    mobil1.tampilInfo();

}