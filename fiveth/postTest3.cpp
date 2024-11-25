#include <iostream>

using namespace std;

int main () {
    int min, max, n, data [8];


    for ( n = 0; n < 8; n++)
    {
        cout << "masukan data - " << n << ":";
        cin >> data[n];
    }

    min = data[0];
    max = data[0];

    for ( n = 0; n < 8; n++)
    {
        if (data[n] < min) {
            min = data[n];
        }

        if (data[n] > max) {
            max = data[n];
        }
    }

    cout << "nilai terkecil dalam array adalah " << min << endl;
    cout << "nilai terbesar dalam array adalah " << max << endl;

    return 0;
    
}