#include<iostream>
using namespace std;
int main() {
    int i = 0, j;
    do {
        j = 0;
        do {
            cout << "*";
            j++;
        } while (j < 7);
        cout << endl;
        i++;
    } while (i < 7);
return 0;
}
