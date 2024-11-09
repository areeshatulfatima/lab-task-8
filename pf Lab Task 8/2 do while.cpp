#include<iostream>
using namespace std;

int main()
 {
    int i = 1, j;

    do {
        j = 1;  
        do {
            cout << i << " x " << j << " = " << i * j << "\n";
            j++;
        } while (j <= 10);
        cout << endl;
        i++;
    } while (i <= 10);

    return 0;
}
