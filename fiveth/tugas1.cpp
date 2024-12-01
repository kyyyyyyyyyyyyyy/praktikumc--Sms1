#include <iostream>

using namespace std;

int main () {

    int i, result, target, left, mid, right, number [10];

    for ( i = 0; i < 10; i++)
    {
        cout << "masukan bilangan ke-" << i << ":";
        cin >> number [i];
    } 
    cout << "masukan bikangan yang ingin di cari : ";
    cin >> target;

    left = 0;
    right = 10 -1;
    result = -1;
    while (left <= right)
    {
        mid = left + (right - left) / 2;

        if (number[mid] == target) {
            result = mid;
            break;
        } else if (number[mid] < target){
            left = mid + 1;
        } else{
            right = mid - 1;
        }
    }
    
    if (result != -1)
    {
        cout << "bilangan " << target << " ditemukan pada indeks " << result << endl;
    } else {
        cout << "bilangan " << target << " tidak titemukan" << endl;
    }
}