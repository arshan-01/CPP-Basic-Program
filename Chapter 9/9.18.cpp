#include<iostream>
using namespace std;
void show(int arr[ ]);
int main ()
{
int num[5],i;
cout<<"Enter five integers: ";
for(i=0;i<=5;i++)
cin>>num[i];
show (num);
return 0;
}
void show(int arr[ ])
{
int j;
cout<<"The value in array ";
for(j=0;j<5;j++)
cout<<arr[j]<<"\t";
}
