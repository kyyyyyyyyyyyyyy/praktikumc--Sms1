#include <iostream>
using namespace std;

// Fungsi untuk membuat matriks identitas berukuran n x n
void buatMatriksIdentitas(int n) {
    // Matriks identitas memiliki nilai 1 pada diagonal utama dan 0 di luar diagonal
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) {
                // Diagonal utama diisi dengan 1
                cout << "1 ";
            } else {
                // Elemen selain diagonal utama diisi dengan 0
                cout << "0 ";
            }
        }
        cout << endl;  // Pindah ke baris berikutnya setelah satu baris matriks
    }
}

int main() {
    int n;

    // Meminta pengguna untuk memasukkan ukuran matriks
    cout << "Masukkan ukuran matriks (n x n): ";
    cin >> n;

    // Memanggil fungsi untuk membuat dan mencetak matriks identitas
    cout << "Matriks Identitas berukuran " << n << "x" << n << " adalah: " << endl;
    buatMatriksIdentitas(n);

    return 0;
}
