#include <iostream>
using namespace std;
class Person
{
protected:
int id;
char name [50], address [100];
public:
Person ()
{
id =0;
name [0] ='\0';
address [0]='\0';
}
void GetInfo ()
 {
cout <<"Enter your id:";
cin>>id;
cout<<"Enter your name:";
cin>>name;
cout<<"Enter your address :";
cin>>address;
 }
void ShowInfo ()
{
cout<<"\n Your personal information is as follow:\n";
cout<<"id= "<<id<<endl;
cout<<"Name ="<<name<<endl;
cout<<"Address"<<address<<endl;
}
};
class Student: public Person
{
private:
int rno, marks; 
public:
student()
{
	Person:Person(); 
rno=marks =0;
}
void GetEdu ()
{
cout<<"Enter your roll no :";
cin>>rno;
cout<<"Enter your marks:";
cin>>marks;
}
void ShowEdu()
{
cout<<"\n Your educational information is as follow:\n";
cout<<"Roll No ="<<rno<<endl;
cout<<"Marks ="<<marks<<endl;
}
};
int main()
{
Student s;
s.GetInfo();
s.GetEdu();
s.ShowInfo();
s.ShowEdu();
return 0;
}


