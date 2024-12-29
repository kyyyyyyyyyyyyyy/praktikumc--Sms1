#include <iostream>
#include <string>

using namespace std;

int main() {
    string string1, string2;

    cout << "Masukan string pertama: ";
    getline(cin, string1);

    cout << "Masukan string kedua: ";
    getline(cin, string2);

    if (string1 == string2)
    {
        cout << "kedua string sama" << endl;
    } else {
        if (string1 > string2)
        {
            cout << string1 << " > " << string2 << endl;
        } else {
            cout << string1 << " < " << string2 << endl;
        }
        
    }
    
}