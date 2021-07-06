#include <iostream>
using namespace std;
int sum(int a[]);
int sum(int a[],char ch);
int main()
{
	int num[10];
	cout<<"Enter 10 integers:";
	for(int i=0;i<10;i++)
	cin>>num[i];
	int s=sum (num);
	cout<<"\n The sum of the all integers="<<s;
	s= sum(num,'E');
	cout<<"\nThe sum of all even integers ="<<s;
	s=sum(num,'O');
	cout<<"\n The sum of all odd integers="<<s;
	s=sum(num,'X');
	cout<<"\n sum for wrong choice>The result ="<<s;
	return 0;
}
int sum(int arr[])	
{
   int s=0;
   for(int i=0;i<10;i++)
    s=s+arr[i];
   return s;
}
int sum(int arr[],char a[]) 
	{
    int s=0;		
 	for(int i =0;i<!0;i++)
	s=s+arr[i];	
	return s;	
}
	int sum(int arr[],char a)	
	{
	int se=0,so=0,s=0;				
    switch(a)
{
	case'E':	
	case'e':
	for(int i=0;i<10;i++)
{
    if(arr[i]%2==0)
    se=se+arr[i];
 }
    s=se;
    break;
    case'O': 
    case'o': 
for(int i=0;i<10;i++)
{
	if(arr[i]%2!=0)
	so=so+arr[i];
  }
    s=so;	
	break;
    default:
    s=0;
  }
  return s;
}













