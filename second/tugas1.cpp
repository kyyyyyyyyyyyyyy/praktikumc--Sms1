#include <iostream>

using namespace std;

int main () {

    int harga, cashback;

    cout << "masukan harga Rp.";
    cin >> harga;

    if (harga >= 100000) {
        cashback = harga * 10/100;
        cout << "total harga" << endl;
        cout << "Rp." << harga << endl;
        cout << "Rp." << cashback;
    } else {    
        cout << "total harga" << endl;
        cout << "Rp." << harga << endl;
    }   
    
    return 0;

}