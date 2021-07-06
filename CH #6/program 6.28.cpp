#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int i, r, x;
	float sum=0, den;
	cout<<"\nEnter the value of x : ";
	cin>>x;
	cout<<"\nEnter the Range: ";
	cin>>r;
	for(i=0; i<r; i++)
	{
		den= pow(x,i);
		sum= sum+(1/den);
	}
	cout<<"Sum of series: "<<sum;
	return 0;
}
