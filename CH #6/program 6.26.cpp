#include<iostream>
using namespace std;
int main()
{
	int n, c;
	long int sum;
	sum=0;
	cout<<"Enter a number: ";
	cin>>n;
	for(c=1; c<=n; c++)
	sum= sum+(c*c);
	cout<<"Sum of square: "<<sum;
	return 0;
}
