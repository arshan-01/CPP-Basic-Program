#include<iostream>
using namespace std;
class Person
{
  protected:
  int id;
  char name[50],address[100]; 
  public:
  Person()
{
  id =0;
  name[0] ='\0';
  address[0] ='\0';
}
void input()
{
  cout<<"Enter your id:";
  cin>>id;
  cout<<"Enter your name:";
  cin>>name;
  cout<<"Enter your address:";
  cin>>address; 
}
void output()
{
  cout<<"\nPersonal Information:\n";
  cout<<"id = "<<id<<endl;
  cout<<"Name ="<<name<<endl;
  cout<<"Address ="<<address<<endl;
 }
};
class Student :public Person
{
  private:
  int rno,marks;
  public: 
  Student()
{
 rno =marks =0;
}
void input()
{
  Person::input();
  cout<<"Enter your  roll no:";
  cin>>rno;
  cout<<"Enter your marks:";
  cin>>marks;
}
void output()
{
  Person::output();
  cout<<"\nEducational Information:\n";
  cout<<"Roll No ="<<rno<<endl;
  cout<<"Marks ="<<marks<<endl;
  }
};
class Scholarship :public Student
{
  private:
  char sname[50];
  long amount;
  public:
  void input()
{
  Student::input();
  cout<<"Enter scholarship name:";
  cin>>sname;
  cout<<"Enter scholarship amount:";
  cin>>amount;
}
void output()
{
   Student::output();
   cout<<"\nScholarship Information:\n";
   cout<<"Scholarship Name:"<<sname<<endl; 
   cout<<"Scholarship amount:Rs."<<amount<<endl;
  }
};
int main()
{
   Scholarship obj;
   obj.input();
   obj.output();
   return 0;
}
