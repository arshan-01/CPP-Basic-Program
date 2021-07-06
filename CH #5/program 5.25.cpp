#include<iostream>
using namespace std;
int main()
{
	float a, b;
	char op;
	cout<<"Enter a floating point number: ";
	cin>>a;
	cout<<"Enter an operater: ";
	cin>>op;
	cout<<"Enter a floating point number: ";
	cin>>b;
	switch(op)
	{
		case '+':
			cout<<a+b<<endl;
			break;
		case '-':
			cout<<a-b<<endl;
			break;
		case '*':
			cout<<a*b<<endl;
			break;
		case '/':
			if(b==0)
			cout<<"Division by zero!"<<endl;
			else
			cout<<a/b<<endl;
			break;
		default:
			cout<<"Invalid operator!"<<endl;	
	}
	return 0;
}
