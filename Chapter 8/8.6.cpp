#include <iostream>
using namespace std;
struct payroll
{
	int empnumber;
	char fname[50],sname[50];
	double hours,payrate,grosspay;
};
int main ()
{
	payroll employee;
	cout<<"Enter employee number:";
	cin>>employee.empnumber;
	cout<<"Enter employee first name:";
	cin>>employee.fname;
	cout<<"Enter employee 2nd name:";
	cin>>employee.sname;
	cout<<"Enter employee hours:";
	cin>>employee.hours;
	cout<<"Enter employee payrate:";
	cin>>employee.payrate;
	employee.grosspay=employee.hours*employee.payrate;
	cout<<"Employee payroll Data"<<endl;
	cout<<"Name:"<<employee.fname<<" "<<employee.sname<<endl;
	cout<<"Number:"<<employee.empnumber<<endl;
	cout<<"Hours:"<<employee.hours<<endl;
	cout<<"Payrate:"<<employee.payrate<<endl;
	cout<<"Gross pay:"<<employee.grosspay;
    return 0;
}
