#include <iostream>
#include <stdio.h>

using namespace std;

void sayHello(const char[]); 

int main() { 
    char n[50];
    cout << "Masukkan nama Anda: ";
    cin.getline(n, 50); 
    sayHello(n);
    return 0; 
}

void sayHello(const char nama[]) { 
    cout << "Selamat datang " << nama << endl; 
}
