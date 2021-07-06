#include <iostream>
using namespace std;
struct Pop
{
	char name[50];
	float Pop;
};
void fun(Pop x,Pop y);
int main()
{
	Pop a,b;
cout<<"Enter name and population (in million):";
cin>>a.name>>a.Pop;
cout<<"Enter name and population(in million):";
cin>>b.name>>b.Pop;
fun(a,b);
return 0;
}
void fun(Pop x,Pop y)
{
	cout<<"The country with more population:"<<endl;
	if(x.Pop>y.Pop)
{
	cout<<"Name:"<<x.name<<endl;
	cout<<"Population:"<<x.Pop<<" millions."<<endl;
}
else
{
	cout<<"Name:"<<y.name<<endl;
    cout<<"Population:"<<y.Pop<<" million."<<endl;
  }
}
