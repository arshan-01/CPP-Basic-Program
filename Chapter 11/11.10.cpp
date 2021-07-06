#include <iostream>
using namespace std;
struct time
{
int hours;
int minutes;
int seconds;	
}time1;
int main ()
{
	long sec;
	void convert(time*,long);
	cout<<"Enter total number of seconds:";
	cin>>sec;
	convert(&time1 ,sec);
	cout<<"\n The time in hh mm ss format is:";
	cout<<"\nHours:"<<time1.hours;
	cout<<"\nMinutes:"<<time1.minutes;
	cout<<"\nSeconds:"<<time1.seconds;	
	return 0;
}
convert(time*temp,long sec)
 {
 	temp->seconds=sec%60;
 	long x=sec/60;
 	temp->minutes=x/60;
 	temp->hours=x/60;
 }

