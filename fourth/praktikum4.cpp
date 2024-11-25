#include <iostream>

using namespace std;

main () {
    int j = 1;
    int k;

    while (j <= 10)
    {
        k=1;
        while (k <= 10)
        {
            cout << "" << j*k;
            k++;
        }

        cout << "" << endl;
        j++;
        
    }
    
}