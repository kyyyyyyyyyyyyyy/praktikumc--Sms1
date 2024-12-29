#include <iostream>

using namespace std;

int gcd (int x, int y) {
    if(y == 0){
        return x;
    }
    return gcd(y, x % y);
}

int main () {
    int x, y;

    cout << "masukan bilangan pertama: ";
    cin >> x;

    cout << "masukan bilangan kedua: ";
    cin >> y;

    cout << "GCD dari " << x <<" dan " << y << " adalah: " << gcd(x, y) << endl;
    return 0;
}