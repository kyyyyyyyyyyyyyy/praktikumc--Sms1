#include <iostream>
using namespace std;

int hitungDigit(int number) {
    int total = 0; // Inisialisasi total
    while (number != 0) {
        number /= 10;
        total++; // Hitung jumlah digit
    }
    return total;
}

int jumlahDigit(int number) {
    int total = 0; // Inisialisasi total
    while (number != 0) {
        total += number % 10; // Tambahkan digit terakhir
        number /= 10;         // Kurangi bilangan dengan membuang digit terakhir
    }
    return total;
}

int main() {
    int number;

    cout << "Masukkan sebuah bilangan genap: ";
    cin >> number;

    cout << "Jumlah digit dari " << number << " adalah: " << hitungDigit(number) << endl;
    cout << "Penjumlahan digit dari " << number << " adalah: " << jumlahDigit(number) << endl;

    return 0;
}
