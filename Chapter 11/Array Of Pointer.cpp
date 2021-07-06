#include <iostream>
using namespace std;
int main ()
{
	int a[3],i;
int *ptr[3];
cout<<"3 Integer:";
for( int i=0;i<3;i++)
cin>>a[i];
for( int i=0;i<3;i++)
{
ptr[i]=&a[i];
}
for( int i=0;i<3;i++)
cout<<*ptr[i]<<"\t";
	return 0;
}
