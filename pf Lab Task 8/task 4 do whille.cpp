#include <iostream>
using namespace std;
int main() {
    int n, fact = 1;
    cout<<"Enter a number: ";
    cin>>n;
    int i = 1;
    do 
	{
        int j = 1;
        do 
		{ 
            fact=fact*i;
            j++;
        } while (j <= 1);
        i++;
    } 
	while (i <= n);
    cout << "Factorial of "<<n<<" is "<<fact<<endl;
    return 0;
}

