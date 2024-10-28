#include <iostream>
#include <conio.h>

main () {
    int k, l, m, n, o, p, q, r;

    std::cout << "masukan nilai ke-1 = ";
    std::cin >> k;
    std::cout << "masukan nilai ke-2 = ";
    std::cin >> l;
    std::cout << "masukan nilai ke-3 = ";
    std::cin >> m;

    o = (k + l) * m < 100;
    p = k * l * m > 100;
    q = o + p < 500;
    r = 0 &&  p && q;

    std::cout << "Program operasi logika AND \n" << std::endl;
    getch();

    std::cout << "hasil dari nilai ke-4 = (nilai ke-1 + nilai ke-2) x nilai ke-3 < 100 adalah : "<< o << std::endl;
    getch();

    std::cout << "hasil dari nilai ke-5 = nilai ke-1 + nilai ke-2 + nilai ke-3 > 100 adalah : "<< p << std::endl;
    getch();

    std::cout << "hasil dari nilai ke-6 = nilai ke-4 + nilai ke-5 < 500 adalah : "<< q << std::endl;
    getch();

    std::cout << "\n maka logika AND = Nilai ke-4 && Nilai ke-5 && Nilai ke-6 adlah = "<< r << std::endl;
    getch();

}