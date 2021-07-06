#include <iostream>
using namespace std;
int power(int x,int n)
{
	if (n==0)
	return 1;
	else 
	return x*power(x,n-1);
}
   int main ()
{
	int a,b;
cout<<"Enter two numbers:";
cin>>a>>b;
cout<<a<<"^"<<b<<" = "<<power(a,b);
return 0;
}
