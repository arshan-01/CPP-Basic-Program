#include <iostream>
using namespace std;
void max(int a,int b);
int main( )
{
int x,y;
cout <<"Enter 2 number:";
cin>>x>>y;
max(x,y);
return 0;
}
void max(int a,int b)
{
if (a>b)
{
cout<<a<<" is a maximum number";
}
else
{
cout<<b<<" is a maximum number";
}
}
