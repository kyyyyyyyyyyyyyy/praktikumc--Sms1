#include <iostream>
using namespace std;

int hitungGCD(int a, int b){
    while (b != 0){
        int sisa = a % b;
        a = b;
        b = sisa;


    }
    return a;

}
int main(){
    int bill, bil2;
    cout<<"masukkan bilangan pertama: ";
    cin>>bill;
    cout<<"masukkan bilangan kedua: ";
    cin>>bil2;

    int gcd = hitungGCD(bill, bil2);
    cout<<"GCD dari "<< bill <<" dan "<<bil2 <<" adalah: "<<gcd <<endl;
    return 0;

}