#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"\n Enter a number: ";
	cin>>n;
	int num=n;
	int high=n%10, low= n%10, rem;
	n= n/10;
	for(int i=n; i>=1; i= i/10)
	{
		rem= i%10;
		if(rem>high)
		high=rem;
		if(rem<low)
		low=rem;
	}
	cout<<"\n The highest digit of "<<num<<" is "<<high;
	cout<<"\n The lowest digit of "<<num<<" is "<<low;
	return 0;
}
