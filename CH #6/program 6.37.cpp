#include<iostream>
using namespace std;
int main()
{
	int n, i, j, s=1;
	cout<<"\n Enter a number: ";
	cin>>n;
	cout<<"\n Product Components of "<<n<<" are: \n";
	for(i=n; i>=s; i--)
	for(j=1; j<=n; j++)
	{
		if(i*j==n)
		{
			cout<<i<<" * "<<j<<endl;
			s= j+1;
		}
	}
	return 0;
}
