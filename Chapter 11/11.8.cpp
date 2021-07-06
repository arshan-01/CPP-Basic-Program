#include <iostream>
using namespace std;
struct book
{
	char author[30];
	int pages;
	int price;
};
int main ()
{
	book rec ,* ptr;
	ptr=&rec;
	cout<<"Enter author name:";
	cin.get(ptr->author,30);
	cout<<"Enter pages:";
	cin>>ptr->pages;
	cout<<"Enter price:";
	cin>>ptr->price;
	cout<<"Author:"<<ptr->author<<endl;
	cout<<"pages :"<<ptr->pages<<endl;
	cout<<"Price:"<<ptr->price<<endl;
	return 0;
}
