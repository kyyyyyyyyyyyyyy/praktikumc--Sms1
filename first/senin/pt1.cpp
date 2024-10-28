#include <iostream>
#include <string>

using namespace std;

int main () {

    string NIM{10}, name{10};
    int UTS{2}, UAS{2}, nilaiAkhir{2};

    cout << "masukan NIM anda : " << endl;
    cin >> NIM;
    cout << "masukan Nama anda : " << endl;
    cin >> name;
    cout << "masukan  nilai UTS anda : " << endl;
    cin >> UTS;
    cout << "masukan  nilai UAS anda : " << endl;
    cin >> UAS;
    cout << "masukan  nilai nilaiAkhir anda : " << endl;
    cin >> nilaiAkhir;


    cout << "nim : " << NIM << endl;
    cout << "nama : " << name << endl;
    cout << "nilai UTS : " << UTS << endl;
    cout << "nilai UAS : " << UAS << endl;
    cout << "nilai akhir : " << nilaiAkhir << endl;

    return 0;

}