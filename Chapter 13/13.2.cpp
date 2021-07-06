#include <iostream>
using namespace std;
class Marks
{
	private :
	int a,b,c;
	public:
	void in()	
{
	cout<<"Enter three marks:";
	cin>>a>>b>>c; 
}
    int sum()
{

	return a+b+c;
}
    float avg()
{
	return (a+b+c)/3.0;
}
};
    int main()
{
    Marks m;	
	m.in();
	m.sum();
	m.avg();
	cout<<"Sum="<<m.sum()<<endl;
	cout<<"Average="<<m.avg();
	return 0;
}
