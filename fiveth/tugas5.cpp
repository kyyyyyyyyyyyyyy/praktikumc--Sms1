#include <iostream>
#include <vector>

using namespace std;

int main () {
    int i, size, odd, even;

    cout << "masukan jumlah bilangan yg ingin dimasukan: ";
    cin >> size;

    vector<int> arr(size);
    for ( i = 0; i < size; i++)
    {
        cout << "masukan bilangan ke-" << i + 1 << " : ";
        cin >> arr[i];
    }

    cout << "bilangan ganjil" << endl;
    for ( i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 1)
        {
            cout << arr[i] << endl;
        }
    }

    cout << "bilangan genap" << endl;
    for ( i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
        {
            cout << arr[i] << endl;
        }
    }
    
    return 0;
    
}