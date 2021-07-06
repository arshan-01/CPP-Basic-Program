#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;
int main()
{
   string data;
   ifstream file("city.txt");
   if(!file) 
{
   cout<<"Error in opening file."; 
}
   cout<<"The list of cities is as follows."<<endl;
   while(!file.eof())   /* We can write 
                            while ( file>>data)
                                cout<<data<<endl;
								*/
{                                
   getline(file,data);
   cout<<data<<endl;
}
  file.close();
  return 0;
}




