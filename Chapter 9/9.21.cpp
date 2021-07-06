#include <iostream>
using namespace std;
int max(int arr[3][2]);
int main()
{
int num[3][2],i,j,mx; 
for(i=0;i<3;i++)
for (i=0;j<2;j++)	
{
cout<<"Enter value for num["<<i<<"]["<<j<<"]:";
cin>>num[i][j];	
}
mx=max(num);
cout<<"The maximum value is"<<mx<<endl;
return 0;
}
int max (int arr[3][2])
{
int r,c,m;
m=arr[0][0];
for(r=0;r<3;r++)
for(c=0;c<2;c++)
if(arr[r][c]>m)
m=arr[r][c];
return m;
}
