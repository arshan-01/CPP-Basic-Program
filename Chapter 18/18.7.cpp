#include<iostream>
#include<fstream>
#include <stdio.h>
using namespace std;
int main()
{
   char ch;
   ifstream in("chars.txt");
   if (!in.is_open())
   cout<<"File opening error";
   else
   while(in >> ch)
{
    cout<<ch<<endl;
}

    in.close();
    return 0; 
}


