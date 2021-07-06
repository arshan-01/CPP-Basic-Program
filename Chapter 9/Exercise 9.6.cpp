#include<iostream>
using namespace std;
int multiple(int,int);
int main()
{
  int num1,num2,result;	
  char more='y';
  while(more=='y')
  {
   cout<<"Enter a pair of integers:";
   cin>>num1>>num2;
   result = multiple(num1 ,num2);
  if(result==1)
   cout<<num1<<"is mutiple of"<<num2<<endl;
  else
   cout<<num1<<"is not multiple of"<<num2<<endl;
   cout<<"Do you want enter another?";
   cin>>more;
 }
}
int multiple(int a,int b)  
{
  if(a% b==0)
  return 1;
 else 
  return 0; 
}
