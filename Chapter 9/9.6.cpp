#include<iostream>
using namespace std;
void check_number(int n)
{
int c=0,i;
for(i=2;i<n;i++)
{
if(n%i==0)
c=1;
}
if(n%2==0&&c==0)
cout<<"prime no "<<n;
else if (n%2!=0&&c==0)
cout<<"odd no "<<n;
else if (n%2==0&&c!=0)
cout<<"is not a even nor a prime"<<n ;
else if (n%2!=0)
cout<<"It is only odd number not a prime "<<n;
else 
cout<<"not a prime number";
}
int main ()
{
int n;
cout <<"Enter number : ";
cin>>n;
cout<<"Nature of number ";
cout<<"\n...............................\n";
check_number (n);
return 0;;
}
