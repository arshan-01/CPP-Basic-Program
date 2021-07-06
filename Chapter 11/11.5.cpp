#include<iostream>
using namespace std;
int main()
{
  char str[] ="hello programming";
  char ch, *ptr,s;
  s= 'n';
  ptr =str;
  cout<<"Enter any character to find:";
  cin>>ch;
  while(*ptr++!= '\0')
  if(*ptr==ch)
    s='y';
   if(s=='y')
   cout<<"The character is found in the array."<<endl;
   else
   cout<<"The character is not in the array."<<endl; 
   return 0;
}
