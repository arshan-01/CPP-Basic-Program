#include <iostream>
using namespace std;
int main ()
{
float array[5],*ptr;
int i;
cout<<"Enter five floating points values:";
for(i=0;i<5;i++)
cin>>array[i];
ptr=&array[4];
cout<<"THe values in reverse order:\n";
for(i=0;i<5;i++)
cout<<*ptr--<<endl;
	return 0;
}
