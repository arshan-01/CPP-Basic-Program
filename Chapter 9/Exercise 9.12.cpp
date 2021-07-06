#include<iostream>
using namespace std;
void Draw_Horizontal()
{
 int i;
 for(i=1;i<=25;i++)
   cout<<"*";
  cout<<"\n";
}
void Draw_Vertical()
{
int j;
for(j=1;j<=5;j++)
   cout<<"*	                *\n";
}
int main()
{
  Draw_Horizontal();
  Draw_Vertical();
  Draw_Horizontal();
return 0;
}


