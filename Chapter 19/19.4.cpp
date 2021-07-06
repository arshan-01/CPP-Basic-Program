#include<iostream>
using namespace std;
class Stack
{
  private:
  int arr[5]; 
  int top;
  public: 
  Stack() 
  {
    top= -1;
  }
void push(int v)
{
    if(top==4)
      cout<<"Stact is full."<<endl;
    else
  {
    arr[++top] =v;
    cout<<"Data pushed successfully."<<endl;
   }
 };
int pop()
 {
  if(top==-1)
  {
    cout<<"Stack empty.";
    return NULL;
  }
   else
      return arr[top--];
   }
};
int main()
{
   Stack s;
   s.push(10);
   s.push(20);
   s.push(30);
   s.push(40);
   s.push(50);
   s.push(60);
   cout<<s.pop()<<endl;
   cout<<s.pop()<<endl;
   cout<<s.pop()<<endl;
   cout<<s.pop()<<endl;
   cout<<s.pop()<<endl;
   cout<<s.pop()<<endl;
   cout<<s.pop()<<endl;
   return 0;
}    
