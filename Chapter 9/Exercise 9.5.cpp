#include <iostream>
using namespace std;
void fab(int n)
{
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
}
int main()
{
	int number;
	cout<<"Enter a number : ";
	cin>>number;
	fab(number);
    return 0;
}
