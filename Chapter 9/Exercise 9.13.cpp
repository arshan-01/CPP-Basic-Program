#include<iostream>
using namespace std;
float func(float x,float y,float z)
{
 if((x<y) && (y<z))
	return x;
 else if((y<x)&&(y<z))
   return y;
else
return z;
}
int main()
{
float a,b,c,small;
cout<<"Enter any three floating numbers:";
cin>>a>>b>>c;
small =func(a,b,c);
cout<<"The smallest of the three is:"<<small;
return 0;
}
