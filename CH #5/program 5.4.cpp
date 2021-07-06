#include<iostream>
using namespace std;
int main()
{
	int sub1,sub2,sub3;
	float avg;
	cout<<"Enter marks of first subject:";
	cin>>sub1;
	cout<<"Enter marks of second subject:";
	cin>>sub2;
	cout<<"Enter marks of third subject:";
	cin>>sub3;
	avg=(sub1+sub2+sub3)/3.0;
	if(avg>80)
	cout<<"You are above standerd!\n";
	cout<<"Admission granted!";
	return 0;
}
