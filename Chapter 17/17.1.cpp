#include<iostream>
using namespace std;
template<class Type>
Type Max(Type a, Type b)
{
  if(a>b)
   return a; 
  else
    return b;
}
int main()
{
   int n; 
   float m;
   n=Max(10,50);
   cout<<"Maximum of two integers:"<<n<<endl;
   m=Max(3.5,2.2); 
   cout<<"Maximum of two floats:"<<m<<endl;
   return 0;
}
