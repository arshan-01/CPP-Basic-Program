#include<iostream>
using namespace std;
int main()
{
	int x, num;
	for(x=1; x<=5; x++)
	{
		cout<<"Enter a number: ";
		cin>>num;
		if(num<=0)
		break;
		cout<<"You entered "<<num<<endl;
	}
	return 0;
}
