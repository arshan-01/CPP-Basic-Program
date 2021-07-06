#include <iostream>
using namespace std;
int main ()
{
	int num,i,j,k,l,m;
	int min=0;
	int max=0;
	cout<<"Enter 5 nume : ";
   cin>>i>>j>>k>>l>>m;
	cout<<"Enter your choice : (1 / 2) : ";
	cin>>num;
  switch (num)
{   
   
   case 1 :
   min = i;
    if (j < min)
        min = j;
    if (k < min)
        min = k;
    if (l < min)
        min = l;
    if (m < min)
        min = m;
        cout<<"Min value is = "<<min<<endl;
        break ;
    case 2:  
	max = i;
    if (j > max)
        max = j;
    if (k > max)
        max = k;
    if (l > max)
        max = l;
    if (m > max)
        max = m;
        cout<<"Max value is = "<<max;
        break;
        default :
        	cout<<"invalid";
}}
