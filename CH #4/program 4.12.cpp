#include<iostream>
using namespace std;
int main()
{
	int div,dis,q,r;
	cout<<"Enter divided & diviser:";
	cin>>div>>dis;
	q=div/dis;
	r=div%dis;
	cout<<"Quotient="<<q<<endl;
	cout<<"Remainder="<<r;
	return 0;
}
