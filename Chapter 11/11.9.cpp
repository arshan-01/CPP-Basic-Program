#include <iostream>
using namespace std;
struct student
{
int rno,marks;
float gpa;	
};
void input(student*);
void output(student*);
int main ()
{
	student s;
	input(&s);
	output(&s);
	
	
	return 0;
}
 void input(student*p)
 {
 	cout<<"Enter roll no :";
 	cin>>p->rno;
 	cout<<"Enter marks:";
 	cin>>p->marks;
 	cout<<"Enter gpa:";
 	cin>>p->gpa;
}
 	void output(student*m)
{
	cout<<"Rollno:"<<m->rno<<endl;
	cout<<"Marks :"<<m->marks<<endl;
	cout<<"GPA:"<<m->gpa<<endl;
 }
