#include<iostream>
#include<fstream>
using namespace std;
int main()
{
  string data;
  int c=0;
  
  ifstream in("strings.txt");
   while(getline(in,data))
   {
   	cout<<data<<endl;
   	c++;

   }
   cout<<"Total LInes = "<<c;
   in.close();
   return 0;
}
