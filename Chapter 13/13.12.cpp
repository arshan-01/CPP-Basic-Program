#include <iostream>
using namespace std;
class Book
{
	private:
	int Price,pages;
	char title[50];
	public:
	void get()
{
	cout<<"Enter Title:";
	gets(title);
	cout<<"Enter pages:";
	cin>>pages;
	cout<<"Enter price:";
	cin>>Price;
}
void show()
	{cout<<"Title="<<title<<endl;
	cout<<"Pages="<<pages<<endl;
	cout<<"Price="<<Price<<endl;
}
};
int main()
{
	Book b1;
	b1.get();
	Book b2(b1);
	Book b3=b1;
	cout<<"\n The detail of b1 :"<<endl;
	b1.show();
	cout<<"\n The detail of b2 :"<<endl;
	b2.show();
	cout<<"\n The detail of b3 :"<<endl;
	b3.show();
	return 0;
}
