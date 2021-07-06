#include<iostream>
using namespace std;
int main()
{
	int a, b, next, n;
	cout<<"Enter the number: ";
	cin>>n;
	if((n==0)||(n==1))
	cout<<n<<" is a Fibonacci number.";
	else
	{
		a=0;
		b=1;
		next=a+b;
		while(next<n)
		{
			a=b;
			b=next;
			next=a+b;
		}
		if(next==n)
		cout<<n<<" is Fibonacci number.";
		else
		cout<<" is not a Fibonacci number.";
	}
	return 0;
}
