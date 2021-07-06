#include <iostream>
using namespace std;
void line();
void line(int n);
void line (int n,char c);
int main()
{
	line();
	line(3);
	line(5,'@');
	return 0;
}
     void line()	
 {
	int i;
    for(i=1;i<=10;i++) 
      cout<<"*";
    cout<<endl;
 }
   void line(int n)
 {
  int i;
  for(i=1;i<=n;i++)
  cout<<"*";
 cout<<endl;
}
   void line(int n,char c) 
{
	int i;
	for(i=1;i<=n;i++)
	cout<<c;
	cout<<endl;
}








