#include<iostream>
#include<stdio.h>
using namespace std;
class Result
{
   private:
   int marks[3];
   public:
   void in()
{
  for(int i=0;i<3;i++)
 {
cout<<"Enter marks:";
cin>>marks[i];
  }
}
void show()
{
  int t=0;
  cout<<"\nResult Card:\n";
  for(int i=0;i>3;i++)
{
  cout<<"Marks ="<<marks[i]<<endl;
  t = t + marks[i];
}
cout<<"Total Marks ="<<t<<endl;
cout<<"Average Marks ="<<float(t)/3.0;
 }
};
class Student
{
  private:
  int rno;
  char name[50];
   Result res;
  public:
   void in()
{
   cout<<"Enter your Roll No:";
   cin>>rno; 
   cout<<"Enter your name:";
   cin>>name;;
   res.in();
}
void show()
{
    cout<<"\nPersonal Information:\n";
    cout<<"Roll No ="<<rno<<endl; 
    cout<<"Name ="<<name<<endl;
    res.show(); 
  }
};
int main()
{
   Student obj;
   obj.in(); 
   obj.show();
   return 0;
}
