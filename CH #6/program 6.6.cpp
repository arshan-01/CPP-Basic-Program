#include<iostream>
using namespace std;
int main()
{
	int x, a, r, sum=0;
	cout<<"Enter an integer: ";
	cin>>x;
	a=x;
	while(x!=0)
	{
	r= x%10;
	sum= sum+r;
	x= x/10;
    }
    cout<<"The sum of digits  "<<a<<"="<<sum; 
	return 0;
	
}
