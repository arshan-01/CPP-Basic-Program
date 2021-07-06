#include<iostream>
using namespace std;
int main()
{
	double p,r,t,i;
	cout<<"Enter principal amount,rate,time:";
	cin>>p>>r>>t;
	i=(p*r*t)/100;
	cout<<"\nPrincipal Amt=Rs. "<<p;
	cout<<"\nRate= "<<r<<"%";
	cout<<"\nTime= "<<t<<"yrs.";
	cout<<"\nSimple Interest Amt=Rs. "<<i;
	return 0;
}
