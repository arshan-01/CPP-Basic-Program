#include<iostream>
using namespace std;
int main()
{
	int num[5], i;
	for(i=0; i<5; i++)
	{
		cout<<"Enter an integer: ";
		cin>>num[i];
	}
	cout<<"\nThe arry in actual oder: \n";
	for(i=0; i<5; i++)
	cout<<num[i]<<" ";
	cout<<"\nThe array in reverse order: \n";
	for(i=4; i>=0; i--)
	cout<<num[i]<<" ";
	return 0;
}
