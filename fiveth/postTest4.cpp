#include <iostream>

using namespace std;

int main () {
    int n, data [6];

    for ( n = 0; n <= 5; n++)
    {
        cout << "masukan data - " << n << ":";
        cin >> data[n];
    }

    for ( n = 5; n >= 0; n--)
    {
        cout << "\n data-" << n << " : " << data[n];
    }

    return 0;
    
}