#include <iostream>
#include <conio.h>

using namespace std;

int main () {

    int nilai1, nilai2, nilai;

    cout << "Melakukan operasi relasi terhadap dua nilai " << endl;
    cout << "Mauskan nilai 1 = ";
    cin >> nilai1; 

    cout << "Melakukan operasi relasi terhadap dua nilai " << endl;
    cout << "Mauskan nilai 2 = ";
    cin >> nilai2;
    getch();

    cout << "apakah nilai 1 == nilai2" << endl;
    getch();
    nilai = nilai1 == nilai2;
    cout << "hasilnya = " << nilai << endl;
    getch();

    cout << "apakah nilai 1 < nilai2" << endl;
    getch();
    nilai = nilai1 < nilai2;
    cout << "hasilnya = " << nilai << endl;
    getch();

    cout << "apakah nilai 1 > nilai2" << endl;
    getch();
    nilai = nilai1 > nilai2;
    cout << "hasilnya = " << nilai << endl;
    getch();

    cout << "apakah nilai 1 <= nilai2" << endl;
    getch();
    nilai = nilai1 <= nilai2;
    cout << "hasilnya = " << nilai << endl;
    getch();

    cout << "apakah nilai 1 >= nilai2" << endl;
    getch();
    nilai = nilai1 >= nilai2;
    cout << "hasilnya = " << nilai << endl;
    getch();

    cout << "demimkianlah opereasi relasi dilakukan dalam bahasa c/c++";
    return 0;

}