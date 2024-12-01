#include <iostream>

using namespace std;

int main () {
    int i, count, current, number[30];

    for ( i = 0; i < 30; i++)
    {
        cout << "masukan bilangan ke-" << i << endl;
        cin >> number[i];
    }

    for ( i = 0; i < 30;)
    {
        count = 1;
        current = number[i];

        while (i + 1 < 30 && number[i] == number[i + 1])
        {
            count ++;
            i++;
        }

        if (count > 1)
        {
        cout << "angka " << current << " muncul sebanyak " << count << endl;
        }
        
        i++;
    }
    
    
}