#include<iostream>
using namespace std;
int main()
{
	int n, i ,j;
	char ch='A';
	cout<<"\n Enter the height of triangle: ";
	cin>>n;
	for(i=1; i<=n; i++)
	{
		for(j=1; j<=i; j++)
		{
			cout<<ch<<" ";
			ch++;
		}
		cout<<"\n";
	}
	return 0;
}
