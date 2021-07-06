#include<iostream>
using namespace std;
int main()
{
	int i, num, mid, sum=0;
	cout<<"Enter the number: ";
	cin>>num;
	mid= num/2;
	for(i=1; i<=mid; i++)
	{
		if((num%i)==0)
		sum=sum+i;
	}
	if(sum==num)
	cout<<num<<" is a perfect number";
	else
	cout<<num<<" is not a perfect number";
	return 0;
}
