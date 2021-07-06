#include<iostream>
using namespace std;
int main()
{
	long int n, c, f;
	cout<<"Enter a number: ";
	cin>>n;
	for(f=1; c=1; c<=n; f=f*c; c=c+1;)
	{
    cout<<"The factorial of "<<n<<" is "<<f;
    cout<<"\n Enter a number('1' for continue '0' for end)";
    cin<<n;
    if(n!=1 && n!=0)
	continue;
	cout<<"\n Enter a valid number"
    }
	return 0;
	
}
