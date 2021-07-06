#include <iostream>
using namespace std;
struct Book
{
  char author[50];
  float price;
};
  void dbl(Book &x);
  int main()
{
  Book b;
  cout<<"Enter author name and price:"; 
  cin.get(b.author,50);
  cin>>b.price;
  dbl(b); 
  cout<<"Author Name:"<<b.author<<endl;
  cout<<"Price:"<<b.price<<endl; 
  return 0;  
}
void dbl(Book &x)
{
	x.price =x.price*2;
}

