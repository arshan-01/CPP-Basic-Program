#include <iostream>
using namespace std;
int add(int*x,int*y);
int main()
{
	int a,b,sum;
	cout<<"2 Numbers:";
	cin>>a>>b;
	sum=add(&a,&b);
	cout<<"Sum is "<<sum;
	return 0;
}
    int add(int*x,int*y)
{
    int total=0;	
    total=*x+*y;	
}
