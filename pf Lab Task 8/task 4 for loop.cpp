#include<iostream>
using namespace std;
int main()
{
int fect,sum=1;
cout<<"enter a positive number: ";
cin>>fect;
for (int i=1; i<=fect; i++)
{
	sum=sum*i;
	cout <<"'"<<sum<<"'";
	
for(int j=1; j<=1; j++)
{
	cout <<" is the "<<i<<" factorial."<<endl;
}
cout<<endl;
}
return 0;
}
