#include<iostream>
using namespace std;
 int statis(int a,int b,int c,int d)
{
  if(a*a*a+b*b*b+c*c*c==d*d*d)
   return 0;
  else
   return-1;
}
int main()
{
  int x,y,z,w,s;
  cout<<"Enter 4 intgers:";
  cin>>x>>y>>z>>w; 
  s=statis(x,y,z,w);
  if(s==0)
    cout<<"\n The equation is statisfied:";
  else
    cout<<"\n The equation is Not statisfied:";
return 0;
}
