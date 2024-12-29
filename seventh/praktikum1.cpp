#include <iostream>

using namespace std;

void tampilkanArray (int array[], int ukuran) {
    for (int i = 0; i < ukuran; i++)
    {
        cout << "elemen ke-" << i << ": " << array[i] << endl;
    }
}

float hitungRataRata(int array[], int ukuran) {
    int total = 0;
    for (int i = 0; i < ukuran; i++)
    {
        total += array[i];
    }

    return total / ukuran;
}

int main () {
    int nilai[] = {10, 20, 30, 40, 50};
    int ukuran = sizeof(nilai) / sizeof(nilai[0]);

    cout << "nilai dalam array: " << endl;
    tampilkanArray(nilai, ukuran);

    float rataRara = hitungRataRata(nilai, ukuran);
    cout << "rata-rata: " << rataRara << endl;
}