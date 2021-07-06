#include<iostream>
using namespace std;
int main()
{
	int n, c, lmt;
	c=1;
	cout<<"Enter a number: ";
	cin>>n;
	cout<<"Enter the limit: ";
	cin>>lmt;
	while(c<=lmt)
	{
		cout<<n<<"*"<<c<<"="<<n*c<<endl;
		c =c+1;
	}
	return 0;
}
