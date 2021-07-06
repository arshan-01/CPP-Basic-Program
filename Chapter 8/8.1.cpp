#include <iostream>
using namespace std;
struct student
{
	int rno;
	int marks;
	float avg;
	char grade;
};
int main ()
{
student s;
cout<<"Roll no:";
cin>>s.rno;
cout<<"Marks:";
cin>>s.marks;
cout<<"Avg:";
cin>>s.avg;
cout<<"Grade:";
cin>>s.grade;
cout<<"YOU ENTERED FOLLOWING DATA"<<endl;
cout<<"Roll no:"<<s.rno<<endl;
cout<<"Marks:"<<s.marks<<endl;
cout<<"Avg:"<<s.avg<<endl;
cout<<"Grade:"<<s.grade<<endl;
return 0;
}
