#include <iostream>
using namespace std;
struct time
{
	int hours;
	int min;
	int sec;
};
void addtime(time,time);
   int main()
{
	time time1[2];
  for(int i=0;i<=1;i++)
  {
    cout<<"Enter Time "<<i+1<<endl;  // WE can write cout<<"Enter Time "<<endl;
    cout<<"Hours:";
    cin>>time1[i].hours;
    cout<<"Mins:";
    cin>>time1[i].min;
    cout<<"Seconds:";
    cin>>time1[i].sec;
}
    addtime(time1[0],time1[1]);
    return 0;
  }
    void addtime(time t1,time t2)
{
	int hrs,mint,seconds,x,y;
	seconds=t1.sec+t2.sec;
	x=seconds/60;
	seconds=seconds%60;
	mint=t1.min+t2.min+x;
	y=mint/60;
	hrs=t1.hours+t2.hours+y;
	mint=mint%60;
	cout<<"Total Hours:"<<hrs<<endl;
	cout<<"Total Minutes:"<<mint<<endl;
	cout<<"Total Seconds:"<<seconds<<endl;	
}
