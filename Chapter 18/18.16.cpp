#include<iostream>
#include<fstream>
using namespace std;
int main()
{
  ofstream print;
  print.open("LPT1"); 
  print<<"Hello priter...";
  print.close();
  return 0;
}
