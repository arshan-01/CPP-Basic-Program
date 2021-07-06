#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	int n=10;
	char ch='*';
	double d= 38.125;
	ofstream file("18.1.text");
	if(!file)
	{
	cout<<"File Not Opened";
	exit(1);
	}
	else
	cout<<n<<" "<<ch<<" "<<d;
	file.close();
	return 0;	
}
