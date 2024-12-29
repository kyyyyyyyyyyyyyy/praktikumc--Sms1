#include <iostream>

using namespace std;

int findMax (int arr[], int size) {
    int maxVal = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > maxVal)
        {
            maxVal = arr[i];
        }
    }
    
    return maxVal;
}

int findMin (int arr[], int size) {
    int minVal = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < minVal)
        {
            minVal = arr[i];
        }
    }
    
    return minVal;
}

int main () {
    int number[5], size;

    size = sizeof(number) / sizeof(number[0]);
    for (int i = 0; i < size; i++)
    {
        cout << "masukan nilai ke-" << i << " : ";
        cin >> number[i];
    }

    cout << "nilai terbesar: " << findMax(number, size) << endl;
    cout << "nilai terkecil: " << findMin(number, size) << endl;
    
}