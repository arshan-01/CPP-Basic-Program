#include<iostream>
using namespace std;
int main()
{
	int a, b, c, r;
	cout<<"Enter first number: ";
	cin>>a;
	cout<<"Enter second number: ";
	cin>>b;
	c=1;
	r=1;
	do
	{
		r= r*a;
		c= c+1;
	}
	while(c<=b);
	cout<<"Result is "<<r;
	return 0;
}
