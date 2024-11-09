#include <iostream>
using namespace std;

int main() {
    int n, fact = 1;

    cout <<"Enter a number: ";
    cin >>n;

    int i = 1;
    while (i <= n)
	 {
        int j = 1;
        while (j <= 1)
		 {
            fact= fact* i;
            j++;
        }
            i++;
    }

    cout << "Factorial of " << n << " is " << fact << endl;

    return 0;
}

