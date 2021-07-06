#include<iostream>
#include<fstream>
using namespace std;
class Test
{
  private: 
  int n ;   
  public:   
  void in()
  {
   cout<<"Enter number:";
   cin>>n;
}
void out()
{
   cout<<"The value of n="<<n;
  }
};
int main()
{
  Test *ptr;  
  ptr =new Test;
  ptr->in();
  ptr->out();
  return 0; 
}
