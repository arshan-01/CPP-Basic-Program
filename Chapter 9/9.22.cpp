#include <iostream>
using namespace std;
struct Test
{
int marks;
char grade;	
};
void show(Test p);
int main()
{
Test t;
cout<<"Enter marks:";
cin>>t.marks;
cout<<"Enter grade:";
cin>>t.grade;
show(t);
return 0;
}
void show(Test p)
{
cout<<"Marks:"<<p.marks<<endl;
cout<<"Grade:"<<p.grade<<endl;	
}
