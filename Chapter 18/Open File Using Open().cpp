#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	fstream file;
	file.open("Arshan.text",ios::in|ios::out|ios::trunc);
	if(!file)
	{
	cout<<"File Not Opened";
	}
	else
	cout<<"File successfully opened";
	file.close();
	return 0;	
}
