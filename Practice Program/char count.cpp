#include<iostream>
#include <stdio.h>
#include<fstream>
using namespace std;
int main()
{
  
  char ch;
  int c=0;
  
  ifstream in("words.txt");
  
while (in>>ch)
{ cout<<ch<<endl;
	c++;
	
}
cout<<c;
   in.close(); 
   return 0;
}
