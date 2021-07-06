#include<iostream>
using namespace std;
template<class Type>
Type show(Type a)
{
   cout<<a<<endl;
}
int main()
{
  show("Hello");
  show(100);
  show(50.75);
  show('*');
  return 0;
}









