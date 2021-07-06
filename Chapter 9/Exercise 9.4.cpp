#include<iostream>
using namespace std;
void printStars(int,int)	 ;
int main()
{
  int lines,counter,blanks;
  cout<<"Enter number of star lines to print(1 to 20):"; 
  cin>>lines;
  while(lines <=0||lines>20) 
 {
   cout<<"Number of star lines should be between 1 and 20"<<endl;
   cout<<"Enter number of star lines to print (1 and 20):";
    cin>>lines;
}
    cout<<endl<<endl;
    blanks=30;
    for(counter=1;counter<=lines;counter++)
 	{
	 printStars(blanks,counter);
	 blanks--;
  }
return 0;	 
}
void printStars(int blnk,int stars)	 
	{
	int count; 
	for(count=1;count<=blnk;count++)  
	   cout<<" ";
	for(count=1;count<=stars;count++) 
	   cout<<"* ";
	 cout<<endl;
}
