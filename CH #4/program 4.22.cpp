#include<iostream>
using namespace std;
int main()
{
	int n,a,b;
	cout<<"Enter 3-digits number:";
	cin>>n;
	a=n/100;
	n=n%100;
	b=n/10;
	n=n%10;
	cout<<"Number inreverse order is "<<n<<b<<a;
	return 0;
}
