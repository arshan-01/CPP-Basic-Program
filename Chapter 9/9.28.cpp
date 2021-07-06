#include <iostream>
using namespace std;
struct book
{
	int pages;
	int price;
};
book check(book x,book y);
   int main()
{
   book a,b,r;
   cout<<"1st book Pages and price : ";
   cin>>a.pages>>a.price;
   cout<<"2nd book Pages and price : ";
    cin>>b.pages>>b.price;
    r=check(a,b);
    cout<<"Most costly book is : "<<endl;
    cout<<"Pages:"<<r.pages<<endl;
	cout<<"Price:"<<r.price<<endl;
	return 0;
  }
    book check(book x,book y)
 {
if(x.price>y.price)		
return x;
else 
return y;
}
