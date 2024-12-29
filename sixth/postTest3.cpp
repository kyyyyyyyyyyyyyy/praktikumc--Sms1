#include <iostream>
#include <vector>

using namespace std;

int average (int arr[]) {
    int val =0;

    for (int i = 0; i < 10; i++)
    {
        val += arr [i];
    }
        return val / 10;
}

int main () {
    int arr [10];

    for (int i = 0; i < 10; i++)
    {
        cout << "masukan bilangan ke-" << i << ": ";
        cin >> arr [i];
    }

    cout << "rata rata dari array adalah: " << average(arr) << endl;
    
}