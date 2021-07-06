#include <iostream>
using namespace std;
struct Time
{
  int Hours;
  int Minutes; 
  int Seconds;
};
void SetTime(int H,int M,int s,Time&time);
void IncrementTime(int S,Time&time);
void DisplayTime(Time time);	

void SetTime(int H,int M,int S,Time&time)
{
	time.Hours=H;
	time.Minutes=M;
	time.Seconds=S;
}
void IncrementTime(int S,Time&time)
{
	time.Seconds+=S;
    if(time.Seconds/60>0)
{
	time.Minutes+=time.Seconds/60;
    time.Seconds%=60;
    if(time.Minutes/60>0) 
{
	time.Hours+=time.Minutes/60;
    time.Minutes %=60;
    time.Hours %=24;
    }
  }
}
void DisplayTime(Time time)
{
	cout<<time.Hours<<":"<<time.Minutes<<":"<<time.Seconds<<endl;
}
int main()
 {
 	Time Now;
 	SetTime(23,58,30,Now);
 	cout<<"Intial time:";
 	DisplayTime (Now);
 	IncrementTime (30,Now);
 	cout<<"Time after increment of 30 seconds:";
 	DisplayTime(Now);
 	IncrementTime(65, Now);
 	cout<<"time after increment of 65 seconds:";
 	DisplayTime(Now);
 	return 0;
}
