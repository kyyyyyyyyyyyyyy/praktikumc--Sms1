#include <iostream>
using namespace std;

bool primeCheck(int n) {
    if (n <= 1) {
        return false; 
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false; 
        }
    }
    return true; 
}

int main() {
    int number;
    cout << "Masukkan sebuah bilangan: ";
    cin >> number;

    if (primeCheck(number)) {
        cout << number << " adalah bilangan prima." << endl;
    } else {
        cout << number << " bukan bilangan prima." << endl;
    }

    return 0;
}
