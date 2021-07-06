#include<iostream>
#include<math.h>
using namespace std;
int power(int,int) ;
int main()
{
  int a,b,result=0;
  cout<<"Enter base and exponent:";
   cin>>a>>b;
  result =power(a,b);
   cout<<a<<"raised to power"<<b<<"is"<<endl;
  return 0;
}
 int power(int base,int exponent)  
  {
  int result=1,count;
  for(count=1; count<=exponent;count++)
   result*=base;
  return result;
}
