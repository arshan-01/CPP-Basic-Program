#include<iostream>
#include <conio.h>
using namespace std;
int main()
{
	int countch=0;
	int countwd=1;
	cout<<"Enter a sentence: "<<endl;
	char ch='a';
	while(ch!='\r')
	{
		ch=getche();
		if(ch=='')
		countwd++;
		else
		countch++;
	}
	cout<<"\Words ="<<countwd<<endl;
	cout<<"Characters ="<<countch-1<<endl;
	return 0;
}
