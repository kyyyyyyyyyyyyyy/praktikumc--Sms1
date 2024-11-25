#include <iostream>
using namespace std;

// double konversiKgKePound(double kg) {
//     return kg / 0.45359;
// }

// int main() {
//     double beratKg;
//     cout << "Masukkan berat dalam kilogram: ";
//     cin >> beratKg;

//     if (beratKg >= 0.45359) {
//         double beratPound = konversiKgKePound(beratKg);
//         cout << "Berat dalam pound: " << beratPound << endl;
//     }

//     return 0;
// }

int main () {

    int pound, hasil;
    double kg = 0.45359;
    cout << "masukan berat dalam satuan pound: ";
    cin >> pound;

    hasil = pound * kg;

    if ( pound > 0 )
    {
        cout << "berat" << pound << "dalam kg adalah " << hasil;
    }

    return 0;
    



}