#include<iostream>
using namespace std;
void swap (int &x,int &y);
int main()
{
int a,b;
cout<<"Enter the integers:";
cin>>a>>b;
cout<<"value before swaping";
cout<<" a ="<<a<<" b= "<<b;
cout<<" swaping value ";
swap(a,b);
cout<<" swaping after ";
cout<<" a= "<<a<<" b= "<<b;
return 0;
}
void swap(int &x,int &y)
{
int t;
t=x;
x=y;
y=t;
}
