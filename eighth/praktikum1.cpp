#include <iostream>

using namespace std;

int main() {
    int data [] = {52, 19, 62, 87, 30, 32, 49, 80, 41, 20};
    int i, j;
    int range = sizeof(data) / sizeof(int);

    cout << "Data Sebelum Diubah :" << endl;
    for ( i = 0; i < range; i++)
    {
        cout << data[i] << " "; 
        cout << endl;
    }

    for ( i = 0; i < range - 1; i++)
    {
        for ( j = i; j < range; j++)
        {
            if (data[i] > data[j])
            {
                int temp = data[i];
                data[i] = data[j];
                data[j] = temp;
            }
        }
    }
    
    cout << "Data Setelah Diurutkan: " << endl;
    for ( i = 0; i < range; i++)
    {
        cout << data[i] << " ";
        cout << endl;
    }
    
    
}