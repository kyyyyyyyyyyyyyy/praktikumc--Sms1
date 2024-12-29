#include <iostream>

using namespace std;

void balikArray(int arr[], int size) {
    for (int i = 4; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }
}

int main () {
    int number[5], size;

    size = sizeof(number) / sizeof(number[0]);
    for (int i = 0; i < size; i++)
    {
        cout << "masukan nilai ke-" << i << " : ";
        cin >> number[i];
    }

    cout << "nilai sebelum dirubah: ";
        for (int i = 0; i < size; i++)
    {
        cout << number[i] << " ";
    }

    cout << "nilai setelah dirubah: ";
    balikArray(number, size);
    return 0;

}