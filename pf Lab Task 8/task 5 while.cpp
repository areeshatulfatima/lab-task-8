#include <iostream>
using namespace std;

int main() {
    int num, sum = 0;

    cout<<"Enter a number: ";
    cin>>num;
    int n2 = num;
    while (n2 > 0) {
        int digit = n2 % 10;
        while (digit > 0) {
            sum += digit;
            break;
        }
        n2 /= 10;
    }
    cout<<"Sum:"<<sum<<endl;

    return 0;
}

