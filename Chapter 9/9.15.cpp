#include<iostream>
#include<math.h>
using namespace std;
int main()
{
double term;
int n;
unsigned long fact(int);
cout<<"Enter maximum value of denominators:";
cin>>n;
double sum=1;
for(int i=1;i<=n;i++)
{
term=1.0/fact(i);
sum+=term;
}
cout<<"sum of series is "<<n;
return 0;
}
unsigned long fact(int n)
{
unsigned long prod=1;
int i;
for(i=1;i<=n;i++)
prod*=i;
return prod;
}
