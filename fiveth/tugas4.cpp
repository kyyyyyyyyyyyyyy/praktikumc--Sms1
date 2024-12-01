#include <iostream>

using namespace std;

int main () {
    int average, total, n, data [7];

    for ( n = 0; n <= 6; n++)
    {
        cout << "masukan data - " << n << ":";
        cin >> data[n];
    }

    for ( n = 0; n <= 6; n++)
    {
        total += data [n];
    }

    average = total / 7;

    cout << "jumlah dari seluruh array adalah : "<< total << endl;
    cout << "rata rata dari seluruh array adalah : "<< average;

    return 0;
    
}