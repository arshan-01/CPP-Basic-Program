#include<iostream>
using namespace std;
int main()
{
	int arr[5], i, j, temp;
	for(i=0; i<5; i++)
	{
		cout<<"Enter value: ";
		cin>>arr[i];
	}
	cout<<"The original values in array:\n";
	for(i=0; i<5; i++)
	cout<<arr[i]<<" ";
	for(i=0; i<5; i++)
	for(j=0; j<4; j++)
	if(arr[j]>arr[j+1])
	{
		temp=arr[j];
		arr[j]=arr[j+1];
		arr[j+1]=temp;
	}
	cout<<"\nThe sorted array:\n";
	for(i=0; i<5; i++)
	cout<<arr[i]<<" ";
	return 0;
}

