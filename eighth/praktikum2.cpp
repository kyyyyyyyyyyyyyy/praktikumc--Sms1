#include <iostream>
#include <vector>

using namespace std;

int main () {
    int i, n, target, position, foundit;

    cout << "masukan jumlah array: ";
    cin >> n;

    vector<int> arr(n);

    for ( i = 0; i < n; i++)
    {
        cout << "masukan nilai ke-" << i << ": ";
        cin >> arr[i];
    }

    cout << "masuykan angka yang ingin dicari: ";
    cin >> target;

    foundit = 0;
    i = 0;

    while ((foundit == 0) && (i < n))
    {
        if (arr[i] == target)
        {
            foundit = 1;
            position = i;
        } else {
            i = i + 1;
        }
    }
    
    if (foundit == 0)
    {
        cout << "angka yang dicari tidak ditemukan" << endl;
    } else{
        cout << "angka " << target << " ditemukan pada index ke-" << position << endl; 
    }
    
    return 0;

}