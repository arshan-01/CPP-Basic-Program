#include <iostream>
using namespace std;
struct player
{
int distance,min,sec;
};
int main()
{
	player Aarsh,Ali;
	float time1,time2;
	int min;
	cout<<"Data of Aarsh\n";
	cout<<"Enter Distance .\n";
	cin>>Aarsh.distance;
	cout<<"Enter mint and second \n";
	cin>>Aarsh.min>>Aarsh.sec;
	cout<<"Data of Ali\n";
    cout<<"Enter Distance .\n";
	cin>>Ali.distance;
	cout<<"Enter mint and second \n";
	cin>>Ali.min>>Ali.sec;
	time1=(Aarsh.min*60*Aarsh.sec)/Aarsh.distance;
	time2=(Ali.min*60*Ali.sec)/Ali.distance;
	if(time1>time2)
	{
	cout<<"Winner is Aarsh\n";
	cout<<"Distance "<<Aarsh.distance<<" Miles in "<<Aarsh.min<<" Minutes "<<Aarsh.sec<<" Seconds"<<endl;
    }    
	else
	{
	cout<<"Winner is Ali\n";
	cout<<"Distance "<<Ali.distance<<" Miles in "<<Ali.min<<" Minutes "<<Ali.sec<<" Seconds "<<endl;
    }   
	return 0;
}
