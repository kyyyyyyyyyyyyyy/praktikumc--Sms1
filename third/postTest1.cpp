#include <iostream>

using namespace std;

int main() {
    int pemakaian;
    int biaya = 0;
    const int biayaAdmin = 10000;

    const int tarif1 = 2500;
    const int tarif2 = 2550;
    const int tarif3 = 2585;
    const int tarif4 = 10000;

    cout << "Masukkan jumlah pemakaian air (dalam m³): ";
    cin >> pemakaian;

    if (pemakaian < 10) {
        pemakaian = 10;
    }

    if (pemakaian <= 10) {
        biaya = pemakaian * tarif1;
    } 
    else if (pemakaian <= 20) {
        biaya = (10 * tarif1) + ((pemakaian - 10) * tarif2);
    } 
    else if (pemakaian <= 30) {
        biaya = (10 * tarif1) + (10 * tarif2) + ((pemakaian - 20) * tarif3);
    } 
    else {
        biaya = (10 * tarif1) + (10 * tarif2) + (10 * tarif3) + ((pemakaian - 30) * tarif4);
    }

    biaya += biayaAdmin;
    cout << "Biaya total penggunaan air: Rp. " << biaya << endl;

    return 0;
}
