#include <iostream>
#include <conio.h>

using namespace std;


main () {
    int n, i, j, s;

    cout << "membuat segitiga siku siku rata kanan" << endl;
    cout << "masukan jumalah baris bintang = ";
    cin >> n;

    for (i = 1;i <= n; i++ ) {
        s = n-1;
        for (j = 1; j <= s; j++) cout << "";
        for (j = 1; j <= i; j++) cout << "*";
        cout << "\n";
    }

    getch();
    cout << "benerkanh bintangnya jadi rata kanan" << endl;

    getch();
    cout << "SELESAI";

}