#include <iostream>

using namespace std;

int createMatrix (int n) {
    int total = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
        cout << "1";
        total ++;
        }
        cout << endl;       
    }

    return total;
}

int main() {
    int n;

    cout << "masukan jumlah matrix: ";
    cin >> n;

    cout << createMatrix(n);
}