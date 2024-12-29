#include <iostream>
#include <vector>

using namespace std;

void findNumber(const vector<int>& arr, int n, int target) {
    int left, right, result, mid;
    left = 0;
    right = n -1;
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
        cout << result << endl;
    }
}

int main () {
    int i, j, n, target;

    cout << "masukan jumlah array: ";
    cin >> n;

    vector<int> arr(n);

    for ( i = 0; i < n; i++)
    {
        cout << "masukan nilai ke-" << i << ": ";
        cin >> arr[i];
    }

        for ( i = 0; i < n - 1; i++)
    {
        for ( j = i; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    cout << "masukan angka yang ingin dicari: ";
    cin >> target;

    findNumber(arr, n, target);
    
    return 0;

}