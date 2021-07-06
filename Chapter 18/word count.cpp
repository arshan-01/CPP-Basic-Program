#include<iostream>
#include <stdio.h>
#include<fstream>
using namespace std;
int main()
{
  char ch[20];
  int count=0;
  
  ifstream in("strings.txt");
  
   while(in >> ch)
   {
   	count++;
   	
   }
   cout<<"total words = "<<count;
   in.close();
   return 0;
}
