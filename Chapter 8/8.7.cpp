#include <iostream>
using namespace std;
struct marks
{
	int m;
	char g;
};
int main ()
{
marks a,b;        //We can initialize structure variable as marks a ={ 350,'A'},b;
cout<<"Marks:";
cin>>a.m;
cout<<"Grade:";
cin>>a.g;
b=a;
cout<<"1st Record"<<endl;
cout<<"Marks:"<<a.m<<endl;
cout<<"Grade:"<<a.g<<endl;
cout<<"2nd Record"<<endl;
cout<<"Marks:"<<b.m<<endl;
cout<<"Grade:"<<b.g<<endl;
return 0;
}
