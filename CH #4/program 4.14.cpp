#include<iostream>
using namespace std;
int main()
{
	int x,y;
	cout<<"\nEnter 2 integers respectively:";
	cin>>x>>y;
	cout<<"\nThe orignal value in x="<<x<<" and y="<<y;
	x=x+y;
	y=x-y;
	x=x-y;
	cout<<"\nThe swapped value in x="<<x<<" and y="<<y;
	return 0;
}
