#include <iostream>
using namespace std;
int main ()
{
int *ptr;
ptr=new int;
cout<<"Enter an integer:";
cin>>*ptr;
cout<<"You entered "<<*ptr<<endl;
cout<<"It is stored at "<<ptr<<endl;
delete ptr;  	
	return 0;
}
