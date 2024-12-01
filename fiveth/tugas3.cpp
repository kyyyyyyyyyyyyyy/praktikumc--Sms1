#include <iostream>

using namespace std;

int main () {
    int i, j, matrix1 [3] [3], matrix2 [3] [3], result[3] [3];

    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            cout << "elemen [" << i << "][" << j << "]: ";
            cin >> matrix1 [i] [j];
        }  
    }

    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            cout << "elemen [" << i << "][" << j << "]: ";
            cin >> matrix2 [i] [j];
        }  
    }

    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            result [i] [j] = matrix1 [i] [j] + matrix2 [i] [j];
        }  
    }
    
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            cout << result [i] [j] << " ";
        } 
        cout << endl;
    }

    return 0;
}