#include<iostream>
using namespace std;
int even(int arr[]);
int main()
{
int num[5],i,n;
cout<<"Enter 5 integers:"<<endl;
for(int i=0;i<5;i++)
cin>>num[i];
n=even(num);
cout<<"The array contains " <<n<<" even number ";
return 0;
}
int even(int arr[])
{
int j,e;
e=0;
for(int j =0;j<5;j++)
if(arr[j]%2==0);
e++;
return e;
}
