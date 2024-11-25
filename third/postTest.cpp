#include <iostream>

using namespace std;

int main () {

    int detak_nadi;

    cout << "masukan detak nadi anda : ";
    cin >> detak_nadi;

    if (detak_nadi < 60){
        cout << "Bradikardia";
    } else if (detak_nadi >= 60 && detak_nadi <= 100){
        cout << "normal";
    } else if (detak_nadi >= 101 && detak_nadi <=120){
        cout << "takikardia ringan";
    } else if (detak_nadi >= 121 && detak_nadi <=140){
        cout << "takikardia sedang";
    } else if (detak_nadi >= 140){
        cout << "takikardia berat";
    }

    return 0; 
    
}