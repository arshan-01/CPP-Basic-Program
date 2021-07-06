#include<iostream>
#include<fstream>
using namespace std;
struct Student
{
   int rno; 
   char name[50];
   int marks;
};
int main()
{
   Student s;
   ofstream out("students.txt",ios::binary|ios::out); 
   for(int i=1;i<=3;i++)
{
	cout<<"Enter your Roll No:"<<endl;
	cin>>s.rno;
	cout<<"Enter your name:"<<endl;
	cin>>s.name;
	cout<<"Enter your marks:"<<endl;
	cin>>s.marks;
	out.write((char*)&s,sizeof(s));
}
    out.close();
	return 0;
};
