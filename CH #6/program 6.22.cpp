#include<iostream>
using namespace std;
int main()
{
	char s;
	do
	{
		cout<<"Enter state of phone(\'w\' for working \'d\' for dead): ";
		cin>>s;
	}
	while(s!='w'&&s!='d');
	return 0;
}
