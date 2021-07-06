#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter number: ";
	cin>>n;
	(n%3==0 ? cout<<"Divisible by 3" : cout<<"Not divisible by 3");
	return 0;
}
