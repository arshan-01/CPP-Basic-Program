#include<iostream>
using namespace std;
class Parent
{
   protected:
   int n;
   public:
   Parent(int p)
{
   n = p;
}
void show()
{
  cout<<"n ="<<n<<endl;
  
  }
};
class Child: public Parent
{
  private:
  char ch;
  public:
  Child(char c,int m):Parent(m)
{
   ch =c;
}
void show()
{
   Parent::show();   // we are accessing parent class member function by using scop resulation operator
   cout<<"c ="<<ch<<endl;
  }
};
int main()
{
  Child obj('@',100);
  obj.show();
  return 0;
}
