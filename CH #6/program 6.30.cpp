#include<iostream>
using namespace std;
int main()
{
	int a=1, i, p,incre=3;
	cout<<"\n The Series: ";
	for(i=1; a<=40; i++)
	{
		if(i%2==0)
		{
			p=-a;
			cout<<p<<" ";
		}
		else
		cout<<a<<" ";
		a= a+incre;
	}
	return 0;
}
