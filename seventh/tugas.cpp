#include <iostream>

using namespace std;

void findNumber(int arr[], int target) {
    int left, right, result, mid;
    left = 0;
    right = 10 -1;
    result = -1;
    while (left <= right)
    {
        mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            result = mid;
            break;
        } else if (arr[mid] < target){
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

int main () {
    int arr[10], target;

    for (int i = 0; i < 10; i++)
    {
        cout << "masukan bilangan ke-" << i << " :";
        cin >> arr[i];
    }

    cout << "masukan angka yang ingin dicari :";
    cin >> target;

    findNumber(arr, target);
    
}