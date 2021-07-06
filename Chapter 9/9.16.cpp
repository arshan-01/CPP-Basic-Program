#include<iostream>
using namespace std;
int g;
void fun();
int main()
{
cout<<"Enter a number:";
cin>>g;
cout<<" value of g before function call "<<g;
fun();
cout<<" value of g after function call "<<g;
return 0;
}
void fun()
{
g=g*2;
}
