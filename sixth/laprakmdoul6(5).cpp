#include <iostream>
#include <vector>
using namespace std;

// Fungsi untuk menukar dua elemen dalam array
void tukar(vector<int>& arr, int i, int j) {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

// Fungsi rekursif untuk menghasilkan semua permutasi
void permutasi(vector<int>& arr, int start, vector<vector<int>>& hasil) {
    // Jika start sudah mencapai panjang array, simpan permutasi
    if (start == arr.size()) {
        hasil.push_back(arr);
        return;
    }
    
    // Rekursif untuk setiap elemen di posisi start
    for (int i = start; i < arr.size(); i++) {
        // Tukar elemen start dengan elemen i
        tukar(arr, start, i);
        
        // Rekursif untuk elemen berikutnya
        permutasi(arr, start + 1, hasil);
        
        // Kembalikan ke keadaan semula (backtracking)
        tukar(arr, start, i);
    }
}

int main() {
    int n;
    
    // Meminta pengguna untuk memasukkan jumlah elemen array
    cout << "Masukkan jumlah elemen array: ";
    cin >> n;
    
    vector<int> arr(n);
    
    // Meminta pengguna untuk memasukkan elemen-elemen array
    cout << "Masukkan elemen-elemen array:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    vector<vector<int>> hasil;
    
    // Memanggil fungsi permutasi untuk menghasilkan semua permutasi
    permutasi(arr, 0, hasil);
    
    // Menampilkan hasil permutasi
    cout << "Permutasi yang mungkin:" << endl;
    for (const auto& perm : hasil) {
        for (int elemen : perm) {
            cout << elemen << " ";
        }
        cout << endl;
    }
    
    return 0;
}
