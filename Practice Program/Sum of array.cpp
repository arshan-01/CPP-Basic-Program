#include <iostream>
using namespace std;
int main()
{
	int n,sum=0;
	cout<<"Enter size of array:";
	cin>>n;
	int a[n];
	cout<<"Enter an array"<<endl;
	for ( int i=0;i<n;i++)
	cin>>a[i];
	//Sum of Array
	for ( int i=0;i<n;i++)
    {
    sum=sum+a[i];
	a[i]++;	
	}
	cout<<sum;
	return 0;
		
}
