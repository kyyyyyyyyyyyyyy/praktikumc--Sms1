#include <iostream>

using namespace std;

int main () {
    int n, data [10];

    for ( n = 0; n <= 9; n++)
    {
        cout << "masukan data - " << n << ":";
        cin >> data[n];
    }

    for ( n = 0; n <= 9; n++)
    {
        cout << "\n data-" << n << " : " << data[n];
    }

    return 0;
    
}