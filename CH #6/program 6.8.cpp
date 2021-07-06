#include<iostream>
#include<iomanip>
const double PI=3.141593;
using namespace std;
int main()
{
	int degrees=0;
	double radians;
	cout.setf(ios::fixed);
	cout.precision(6);
    cout<<"Degrees to Radians\n";
    while (degrees <=360)
    {
    	radians=degrees*PI/180;
    	cout<<setw(6)<<degrees<<setw(10)<<radians<<endl;
    	degrees +=10;
	}
	return 0;
	
}
