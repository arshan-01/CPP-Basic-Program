#include<iostream>
using namespace std;
class Computer
{
public:
    Computer(){}
	Computer(int,int,double,int);
    void Show();
protected:
    int  wordSize; //bits
    int  memorySize; //megabytes
    double storageSize; //megabytes
    int speed;   //megahertz
};
class Laptop: public Computer
{
public:
   Laptop(){}
   Laptop(int,int,double,int,double,double,double,double);
   void Show(); 
private:
   double length,width,height; 
   double weight;
};
Computer::Computer(int wdSiz,int memSiz,double storSiz,int spd)
{
   wordSize =wdSiz;
   memorySize =memSiz;
   storageSize =storSiz;
   speed =spd;
}
void Computer::Show()
{
   cout<<"Word size:"<<wordSize<<endl;
   cout<<"Memory size:"<<memorySize<<endl;
   cout<<"Speed:"<<speed<<"Mhz"<<endl;
}
Laptop::Laptop(int wdSiz,int memSiz,double storSiz,int spd,
        double len,double wid,double ht,double wt)
  :Computer(wdSiz,memSiz,storSiz,spd)
{
   length =len;
   width =wid; 
   height =ht;
   weight =wt;
}
void Laptop::Show()
{
   Computer::Show();
   cout<<"Length:"<<length<<endl;
   cout<<"Width:"<<width<<endl;
   cout<<"Height:"<<height<<endl;
   cout<<"Weight:"<<weight<<endl; 
}
int main()
{
   Computer comp(4,512,20,2);
   Laptop lap(8,1024,50,2,15,19,14,2);
   cout<<"Computer specification:"<<endl;
   comp.Show();
   cout<<"Laptop specification:"<<endl;
   lap.Show();
   return 0; 
}
