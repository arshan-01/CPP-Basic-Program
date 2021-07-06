#include <iostream>
using namespace std;
struct Employee
{
int code;
double Salary;
char Grade;	
};
int main()
{
	Employee Aarsh,Ali;
	cout<<"Enter data of Aarsh (Code,Salary and Grade).\n";
	cin>>Aarsh.code>>Aarsh.Salary>>Aarsh.Grade;
	cout<<"Enter data of Ali (Code,Salary and Grade).\n";
	cin>>Ali.code>>Ali.Salary>>Ali.Grade;
	if(Aarsh.Salary>Ali.Salary)
{
	cout<<"Data Of Aarsh\n";
	cout<<"Code = "<<Aarsh.code<<"\nSalary = "<<Aarsh.Salary<<"\nGrade = "<<Aarsh.Grade;
	}
	else 
	{
	cout<<"Data Of Ali\n";
	cout<<"Code = "<<Ali.code<<"\nSalary = "<<Ali.Salary<<"\nGrade = "<<Ali.Grade;
   }
	return 0;
}
