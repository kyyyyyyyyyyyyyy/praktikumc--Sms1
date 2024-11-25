#include <iostream>

using namespace std;

int main () {
    int number;

     do {
        cout << "Masukkan angka dari 1-10: ";
        cin >> number;

        if (number < 1 || number > 10) {
            cout << "Angka tidak boleh lebih dari 10. Coba lagi." << endl;
        }
    } while (number < 1 || number > 10);

    cout << "Anda memasukkan angka yang benar: " << number << endl;

    return 0;
    
    
}