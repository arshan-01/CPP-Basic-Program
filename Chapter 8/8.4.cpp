#include <iostream>
using namespace std;
struct emp
{
	int eid;
	int sal;
};
int main ()
{
	emp e = {20,18500};
	cout<<"Employee Id: "<<e.eid<<endl;
	cout<<"salary: "<<e.sal<<endl;
	return 0;
	
}
