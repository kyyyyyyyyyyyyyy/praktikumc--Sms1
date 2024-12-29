#include <iostream>
using namespace std;

void flip(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
}

int main () {
    int a, b;

    cout << "masukan nilai ke-1: ";
    cin >> a;

    cout << "masukan nilai ke-2: ";
    cin >> b;

    cout << "\nsebelum di tukar" << endl;
    cout << "nilai ke-1 = " << a << " nilai ke-2 = " << b << endl;

    flip(a, b);

    cout << "\nsetelah di tukar" << endl;
    cout << "nilai ke-1 = " << a << " nilai ke-2 = " << b << endl;
}