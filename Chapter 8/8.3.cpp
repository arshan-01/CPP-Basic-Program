#include <iostream>
using namespace std;
struct book
{
	int id;
	int pages;
	float price;
};
int main ()
{
book b1,b2;
cout<<"Enter id,pages and price of books: ";
cin>>b1.id>>b1.pages>>b1.price;
cout<<"Enter id,pages and price of books: ";
cin>>b2.id>>b2.pages>>b2.price;
cout<<"\n The most costly book is as follow:\n ";
if(b1.price>b2.price)
{
	cout<<"BookID:"<<b1.id<<endl;
	cout<<"pages:"<<b1.pages<<endl;
	cout<<"Price:"<<b1.price<<endl;
}
else
{
	cout<<"BookID:"<<b2.id<<endl;
	cout<<"pages:"<<b2.pages<<endl;
	cout<<"Price:"<<b2.price<<endl;
}
return 0;
}
