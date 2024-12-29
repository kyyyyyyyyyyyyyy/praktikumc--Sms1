#include <iostream>
using namespace std;

// Fungsi untuk menghitung jumlah digit dari bilangan
int hitungDigit(int bilangan) {
    int jumlahDigit = 0;
    
    // Menghitung jumlah digit dengan membagi bilangan hingga mencapai 0
    while (bilangan != 0) {
        bilangan /= 10;  // Menghapus digit terakhir
        jumlahDigit++;    // Menambah jumlah digit
    }
    
    return jumlahDigit;  // Mengembalikan jumlah digit
}

// Fungsi untuk menghitung jumlah total dari setiap digit
int jumlahDigit(int bilangan) {
    int jumlah = 0;
    
    // Menghitung jumlah dari setiap digit
    while (bilangan != 0) {
        jumlah += bilangan % 10;  // Menambahkan digit terakhir
        bilangan /= 10;           // Menghapus digit terakhir
    }
    
    return jumlah;  // Mengembalikan jumlah dari setiap digit
}

int main() {
    int bilangan;
    
    // Meminta input dari pengguna
    cout << "Masukkan sebuah bilangan bulat: ";
    cin >> bilangan;
    
    // Memanggil fungsi hitungDigit untuk menghitung jumlah digit
    int totalDigit = hitungDigit(bilangan);
    
    // Memanggil fungsi jumlahDigit untuk menghitung penjumlahan digit
    int totalJumlahDigit = jumlahDigit(bilangan);
    
    // Menampilkan hasil
    cout << "Jumlah digit dari " << bilangan << " adalah: " << totalDigit << endl;
    cout << "Penjumlahan dari setiap digitnya adalah: " << totalJumlahDigit << endl;
    
    return 0;
}
