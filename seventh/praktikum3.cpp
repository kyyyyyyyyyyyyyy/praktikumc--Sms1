#include <iostream>

using namespace std;

void ubahNilaiArray(int array[], int ukuran) {
    for (int i = 0; i < ukuran; i++)
    {
        array[i] = array[i] * 2;
    }
}

int main () {
    int nilai[] = {5, 10, 15, 20};
    int ukuran = sizeof(nilai) / sizeof(nilai[0]);

    cout << "nilai sebelum dirubah: ";
    for (int i = 0; i < ukuran; i++)
    {
        cout << nilai[i] << " ";
    }
    cout << endl;

    ubahNilaiArray(nilai, ukuran);
    cout << "nilai setelah dirubah: ";
    for (int i = 0; i < ukuran; i++)
    {
        cout << nilai[i] << " ";
    }
    cout << endl;

    return 0;
    
}