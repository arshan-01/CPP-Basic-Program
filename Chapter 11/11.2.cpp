#include <iostream>
using namespace std;
int main ()
{
int marks[5],i;
int *ptr;
cout<<"Enter five marks:";
for(i=0;i<5;i++)
cin>>marks[i];
ptr=&marks[0];
cout<<"You entered the following values:\n";
for(i=0;i<5;i++)
cout<<*ptr++<<"\t";
	return 0;
}
