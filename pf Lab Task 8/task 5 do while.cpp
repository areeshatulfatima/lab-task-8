#include <iostream>
using namespace std;

int main() {
    int num, sum = 0;

    cout<<"Enter a number: ";
    cin>>num;
    int n3 = num;
    do {
        int digit = n3 % 10;
        do {
            sum += digit;
            break;
        } while (digit > 0);
        n3 /= 10;
    } while (n3 > 0);
    cout<<"Sum:"<<sum<<endl;

    return 0;
}

