#include<iostream>
using namespace std;
int main()
{
	int n1, n2, d;
	cout<<"Enter the first number: ";
	cin>>n1;
	cout<<"Enter the second number: ";
	cin>>n2;
	d=(n1<n2)?n1:n2;
	for(;d>=1;d--)
	if((n1%d==0)&&(n2%d==0))
	break;
	cout<<"GCD of "<<n1<<" and "<<n2<<" is "<<d;
	return 0;
}
