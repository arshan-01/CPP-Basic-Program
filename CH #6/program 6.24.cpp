#include<iostream>
using namespace std;
int main()
{
	long int product=1;
	int c;
	for(c=1; c<=10; c =c+2)
	product*=c;
	cout<<"Result is "<<product;
	return 0;
}
