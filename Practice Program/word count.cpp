#include<iostream>
#include <stdio.h>
#include<fstream>
using namespace std;
int main()
{
  char ch[50];
  int count=0;
  
  ifstream in("words.txt");
  
   while(in >> ch)
   {
   	count++;
   	
   }
   cout<<"total words = "<<count;
   in.close();
   return 0;
}
