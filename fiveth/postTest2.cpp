#include <iostream>

using namespace std;

int main () {
    int total, n, data [10];

    for ( n = 0; n <= 9; n++)
    {
        cout << "masukan data - " << n << ":";
        cin >> data[n];
    }

    for ( n = 0; n <= 9; n++)
    {
        total += data [n];
    }

    cout << "jumlah dari seluruh array adalah : "<< total;

    return 0;
    
}