#include <iostream>
using namespace std;

int main() {
    int num, sum = 0;

    cout<<"Enter a number: ";
    cin>>num;


    for (int n1 = num; n1 > 0; n1 /= 10) {
        for (int i = n1 % 10; i > 0; i -= 0) {
            sum += i;
            break;
        }
    }
    cout<<"Sum:"<<sum<<endl;

    return 0;
}

