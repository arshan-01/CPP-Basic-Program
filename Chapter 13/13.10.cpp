#include <iostream>
#include <string.h>
using namespace std;
class TV
{
	public:
	TV(char Brand[] ,char Mod[],float Price);
	void change(char Brand[],char Mod[],float Price);
	void Display();
	private:
	char Brandname[20];
	char Model[10];
	float RetailPrice;
};
TV::TV (char Brand[],char Mod[],float Price)
{
	strcpy(Brandname,Brand);
	strcpy(Model,Mod);
	RetailPrice=Price;	
}
void TV::change (char Brand[],char Mod[],float Price)
{
	strcpy(Brandname,Brand);
	strcpy(Model,Mod);
	RetailPrice=Price;	
}
void TV::Display()
{
	cout<<"Brandname:"<<Brandname<<endl;
	cout<<"Model:"<<Model<<endl;
	cout<<"Price:"<<RetailPrice<<endl;
}
int main()
{
	TV Test ("Sony","HdTV",25000);
	cout<<"Dislaying the Object..."<<endl;
	Test.Display();
	Test.change("Toshiba","SDTV",20000);
	cout<<"Dislaying the Object after chnage..."<<endl;
	Test.Display();
	return 0;
}
