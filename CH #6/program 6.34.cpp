#include<iostream>
using namespace std;
int main()
{
	int sum=0;
	for(int i=1; i<100; i++)
	{
		if(i%2==0)
		continue;
		sum=sum+i;
	}
	cout<<"The sum is "<<sum;
	return 0;
}
