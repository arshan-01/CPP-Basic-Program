#include<iostream>
using namespace std;
float area(int b,int h);
int main()
{
int base ,height;
float ar;
cout<<"Enter base and height:";
cin>>base>>height;
ar=area(base,height);
cout<<"AREA OF TRAINGLE IS "<<ar;
return 0;
}
float area(int b,int h)
{
float a;
a=0.5*b*h;
return a;
}
