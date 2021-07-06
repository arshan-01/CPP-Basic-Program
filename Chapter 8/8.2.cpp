#include <iostream>
using namespace std;
struct birth
{
	int day;
	int month;
	float year;
};
int main ()
{
birth b;
cout<<"Day:";
cin>>b.day;
cout<<"Month:";
cin>>b.month;
cout<<"Year:";
cin>>b.year;
cout<<"You Enter Following Record"<<endl;
cout<<"Your Date Of Birth Is "<<b.day<<"/"<<b.month<<"/"<<b.year;
return 0;
}
