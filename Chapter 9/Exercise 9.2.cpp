#include<iostream>
#include <math.h>
using namespace std;
void binToDec(int,int&,int&);
int main()
{
  int decNum,bitWeight,binNum;
  decNum=0;
  bitWeight=0;
  cout<<"Enter number in binary:";
  cin>>binNum;
  cout<<endl;
  binToDec(binNum,decNum,bitWeight);
  cout<<"Binary"<<binNum<<"="<<decNum<<"decimal"<<endl;
  return 0;
}
void binToDec(int binaryNumber,int&decimal,int&weight)
{
  int bit;
  if(binaryNumber>0)
{
  bit=binaryNumber%10;
  decimal =decimal+bit*(pow(2,weight));
  binaryNumber=binaryNumber /10;
	weight++;
  binToDec(binaryNumber,decimal,weight);  
  }
}
