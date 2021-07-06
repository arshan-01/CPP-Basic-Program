#include <iostream>
using namespace std;
int main()
{
char str[50];
int i=0;
cout<<"Enter a string:";
cin.getline(str,50);
while(str[i]!='\0')
i++;
cout<<"The lenght of string is "<<i<<endl;
return 0;
}
