#include <iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter a number : ";
	cin>>n;
int a,b,c;
    a=1;
	b=1;
    cout<<a<<" "<<b<<" ";
    c=a+b;
    while (c<=n)
    {   
    	cout<<c<<" ";
    	a=b;
    	b=c;
    	c=a+b;
	}
    return 0;
}
