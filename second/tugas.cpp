#include <iostream>


using namespace std;

int main() {
    double rho_fluid, sisi, dayaApung;
    const double g = 9.81; 
    
    cout << "Masukkan massa jenis fluida (kg/m^3): ";
    cin >> rho_fluid;
    cout << "Masukkan panjang sisi benda (m): ";
    cin >> sisi;
    
    double volume = sisi * sisi * sisi;

    dayaApung = rho_fluid * volume * g;

    cout << "Daya apung yang dialami benda adalah: " << dayaApung << " N" << endl;

    return 0;
}
