#include<iostream>
#include<fstream>
#include <ctype.h>
using namespace std;
int main()
{
  char ch;
  int t,v; 
  t=v=0;
  ifstream in("chars.txt"); 
  while(in >> ch) 
{
    ch=tolower(ch); 
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u') 
 v++;
 t++;
    cout<<ch<<endl;
}
    cout<<"Total character:"<<t<<endl;    
    cout<<"Total vowels:"<<v<<endl; 
    in.close();
    return 0;
}   
