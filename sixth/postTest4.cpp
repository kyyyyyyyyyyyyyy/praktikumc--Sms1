#include <iostream>

using namespace std;

double conv(double c) {
    double f = (c * 9 /5) + 32;
    return f;
}

int main () {
    double c;
    cout << "konversi celcius ke fahrenheit" << endl;
    cout << "masukan suhu dalam celcius: ";
    cin >> c;

    cout << "celcius: " << c << endl;
    cout << "fahrenheit: " << conv(c) << endl;
}