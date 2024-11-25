#include <iostream>

using namespace std;

main (){
    int i, perkalian, batas;

    cout << "masukan perkalian yang ingin dibuat : ";
    cin >> perkalian;

    cout << "masukan batas dari perkaliannya : ";
    cin >> batas;

    for ( i = 1; i < batas; i++) while (i <= batas)
    {
        cout << "5 x " << i << " = " << perkalian * i << endl;
        i ++;
    }
    
}