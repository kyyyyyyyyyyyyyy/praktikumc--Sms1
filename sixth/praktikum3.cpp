#include <iostream>

using namespace std;

int max (int a, int b) {
    return (a >b) ? a : b;
}

int max (double a, double b) {
    return (a >b) ? a : b;
}

int main () {
    cout << max(12, 15) << endl;
    cout << max(1.2, 1.5) << endl;
}
