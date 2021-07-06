#include<iostream>
using namespace std;
int lcm(int x,int y)
{
  int r,s,i;
  if(x<y)
    s=x;
  else
    s = y;
  for(i=1;i<=s;i++)
    if(x% i==0&&y%i==0)
     r =i;
    return r;
}
int main()
{
  int a,b,res;
  cout<<"Enter two integers:";
  cin>>a>>b;
  res= lcm(a,b);
  cout<<"Least common multipller is"<<res;
  return 0;
}
