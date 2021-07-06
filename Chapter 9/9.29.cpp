#include <iostream>
using namespace std;
int funct(int a[],int n,char s='+')
{
	int sum=0;
    for(int i=0;i<n;i++)
 {
   if(s =='+')
 {
   if(a[i] >0)
     sum+=a[i];
   }
 else
 {
  if(a[i]<0)
  sum+=a[i];
   }
 }
  return sum;
}
   int main()
 {
   int arr[20],dn;
   cout<<"Enter dimension:";
   cin>>dn;
   for(int i=0;i<dn;i++)
{
    cout<<"Enter any integer (positive /negative):";  
    cin>>arr[i];  
}
    int s=funct (arr,dn);    
    int s2=funct (arr ,dn ,'-');  
    cout<<"\n The sum of the positive integers:"<<s;
    cout<<"\n the sum of the negative integer:"<<s;
    return 0;
}
