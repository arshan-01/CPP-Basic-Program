#include<iostream>
using namespace std;
void cal (int a,int b,char ap);
int main()
{
int x,y;
char c;
cout<<"Enter first number ,operator and second number:";
cin>>x>>c>>y;
cal(x,y,c);
return 0;
}
void cal(int a,int b,char op)
{
switch(op)
{
case'+':
cout<<a<<"+"<<b<<"="<<a+b;
break;
case'-':
cout<<a<<"-"<<b<<"="<<a-b;
break;
case'*':
cout<<a<<"*"<<b<<"="<<a*b;
break;
case '/':
cout<<a<<"/"<<b<<"="<<a/b;
break;
case'%':
cout<<a<<"%"<<b<<"="<<a%b;
break;
default:
cout<<"invalid operator!";
}
}

