#include <iostream>
#include <vector>

using namespace std;

int average (const vector<int>& arr, int size) {
    
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }

    return sum / size;
    
}

int main () {
    int size;
    cout << "masukan ukuran untuk data: ";
    cin >> size;

    vector<int> arr(size);

    for (int i = 1; i <= size; i++)
    {
        cout << "masukan bilangan ke-" << i << ": ";
        cin >> arr[i];
    }

    cout << "rata rata dari data diatas adalah " << average(arr, size) << endl;

    return 0;
}