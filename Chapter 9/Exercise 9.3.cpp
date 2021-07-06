#include<iostream>
#include <iomanip>
using namespace std;
  
  void initialize(int& zCount,int& oCount,int& eCount);
  void getNumber(int& num);
  void classifyNumber(int num,int& zCount,int& oCount,int& eCount);
  void printResults(int zCount,int oCount,int eCount);
  int main()
  {    int N;
    int counter,number,zeros,odds,evens;
    initialize(zeros,odds,evens);
    cout<<"Enter the total number to be counted : ";
    cin>>N;
    cout<<"Please Enter "<<N<<" integers."<<endl;
    
    for(counter=1;counter<=N;counter++)
    
    
  {
     getNumber(number);
     classifyNumber(number,zeros,odds,evens);
}
    cout<<endl; 
    printResults(zeros,odds,evens);
    return 0;
}
 void initialize(int& zCount,int& oCount,int& eCount) 
  {
    zCount=0;
    oCount=0;
    eCount=0;
}
 void getNumber(int& num) 
  {
    cin>>num;
}
 void classifyNumber(int num,int& zCount,int& oCount,int& eCount) 
  {
    switch(num %2)
  {
    case 0:eCount++;
    if(num==0)
     zCount++;
    break;
  	case 1:
  	case -1:
  	oCount++;
  	break;
 } 
}
 void printResults(int zCount,int oCount,int eCount) 	
{
	cout<<eCount<<" evens including "<<zCount<<" zeros"<<endl;  	
  	cout<<"Total number of odds are:"<<oCount<<endl;
 }   
 
 
 
 /* 2nd method
 #include <iostream>
#include <string.h>
using namespace std;
void get(int &numers);
void clasify(int number,int& ecount,int& ocount,int&zcount);
void result (int ecount,int ocount,int zcount);

int main ()
{
	int counter,n,num;
	int even=0;
	int odd=0;
	int zero=0;
	cout<<"Enter number : ";
	cin>>n;
	cout<<"Enter "<<n<<" number ";

	for(counter=1;counter<=n;counter++)
	{
	get(num); // we can write cin>>num;
	clasify(num,even,odd,zero);
    }
    result (even,odd,zero);
    return 0;
    
}
void get(int &numers)
{
		cin>>numers;
}
void clasify(int number,int& ecount,int& ocount,int&zcount)
{    
	
	switch (number%2)
	{
		case 0: ecount++;
		if(number==0)
		zcount++;
		break;
		case 1:case -1: ocount++;
		break;
	}
}
void result (int ecount,int ocount,int zcount)
	{
		cout<<"Total Even = "<<ecount<<" including "<<zcount<<" zero "<<endl;
	cout<<"Total Odd = "<<ocount<<endl;
	} /*
