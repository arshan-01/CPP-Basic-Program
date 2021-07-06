#include<iostream>
using namespace std;
void prime(int n)
{
	int count = 0;
	
	for(int c=2; c<=n;c++)
	if(n%c==0)
	{
		count++;      // count will cacluate the iteriation od dividing.
	}
	if(count==1)
	cout<<n<<" is a prime number.";
	else
	cout<<n<<" is not prime.";
}
int main()
{
	int num;
	cout<<"Enter an integer: ";
	cin>>num;
	prime(num);
	return 0;
}
