#include<iostream>
using namespace std;
int reverse(int n)
	{
		int num,r=0;
	for(num=n;num!=0;num=num/10)
		r=(r*10)+num%10;
		return r;
	}
int main()
{
	long int num;
	int rev;
	cout<<"Enter a positive number: ";
	cin>>num;
	rev=reverse(num);
	cout<<"The reverse of the number is "<<rev<<endl;
	return 0;
}
