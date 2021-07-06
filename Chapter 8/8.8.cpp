#include <iostream>
using namespace std;
struct test
{
	int rno;
	int m[5];
};
int main ()
{
test r;
int i,total=0;
float avg=0.0;
cout<<"Enter Roll No:";
cin>>r.rno;
for(i=0;i<5;i++)
{
cout<<"Enter marks:";
cin>>r.m[i];
total=total+r.m[i];
}
avg=total/5.0;
cout<<"Roll No:"<<r.rno<<endl;
cout<<"Total marks:"<<total<<endl;
cout<<"Average:"<<avg<<endl;
return 0;
}
