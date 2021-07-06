#include <iostream>
using namespace std;
int fab(int);
int main()
{
	int n;
	cout<<"Enter a number : ";
	cin>>n;
cout<<"Result is = "<<fab(n);
    return 0;
}
int fab(int x)
{
	if(x==1)
	return 1;
    else if(x==2)
	return 1;
	else 
	return fab(x-1)+fab(x-2);
	
}
