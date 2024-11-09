#include<iostream>
using namespace std;

int main() {
    int i = 7, j=7;

    do {
       
        do {
            cout << "*";
            i++;
        } 
		while (j <= 7);  
        cout << endl;
        i++;
    } while (i <= 7);  

    return 0;
}
