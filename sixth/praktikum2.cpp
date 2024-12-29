#include <iostream>

using namespace std;

double hitungLuasLingkaran(double radius) {
    const double pi = 3.14159;
    return pi * radius * radius;
}

int main () {
    int r;
    cout << "masukan jari-jari lingkaran: ";
    cin >> r;

    double luas = hitungLuasLingkaran(r);

    cout << "luas lingkaran dari jari-jari " << r << " adalah " << luas << endl;
}