#include <iostream>
using namespace std;
int fun(int n)
{
	if(n%2==0)
	return 1;
	else 
	return 0;
}
int main()
{
int n,i;
for(i=1;i<=5;i++)
{
	cout<<"Enter a number : ";
	cin>>n;
	if(fun(n)==1)
	cout<<n<<" is even number "<<endl;
	else 
	cout<<n<<" is odd number "<<endl;
	}	
}
