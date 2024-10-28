#include <iostream>

using namespace std;

int main() {

    char var;

    cout<< "maukan sesuatu : ";
    cin>> var;

    int conv = static_cast <int> (var);

    cout<< "variabel yang dimasukan : ";
    cout<< var << endl;
    
    cout<< var;
    cout<< "dalam ASCII adalah ";
    cout<< conv;


    return 0;

}