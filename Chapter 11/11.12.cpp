#include <iostream>
using namespace std;
void get(int*,int);
int main ()
{
	int n,j,*ptr;
	cout<<"Enter the length of array:";
	cin>>n;
	ptr=new int[n];
	get(ptr,n);
	cout<<"You entered the following values:\n";
	for(j=0; j<n;j++)
	cout<<*ptr++<<endl;
	delete ptr; 
	return 0;
}
 void get(int*p,int l)
 {
    int i;
    for(i=0;i<l;i++)
 {
    cout<<"Enter an integer:";
    cin>>*p++;
 }
}
