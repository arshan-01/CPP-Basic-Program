#include<iostream>
using namespace std;
class node
{
   public:
   int data;
   node *link;
   node():data(0),link(NULL){}
 };
class circularlist 
{
  private:
   int i;
   node *first;
   node *last;
  public: 
     circularlist():i(0),first(NULL),last(NULL){}
	 void insert_start(int);
     void insert_last(int);
     void remove_start();
     void remove_last();
     void show();
     ~circularlist();
};
void circularlist::insert_start(int value)
{
  if(first==NULL)
  {
   first=new node; 
   first->data=value; 
   first->link=NULL;
   last=first;
   return;
  }
node *ptr=new node;
ptr->data=value;  
ptr->link=first;
first=ptr;
last->link=first;
}
void circularlist::insert_last(int value)
{
  if(first==NULL)
  {
    first=new node;
    first->data=value;
    first->link=first;
    last=first; 
    return;
   }
node *ptr=new node;
last->link=ptr;
last=ptr;
last->data=value;
}
void circularlist::remove_start()
{
  if(first==NULL)
{
  cout<<"No value to display";
  return;
}
  if(first->link==first)
{
   delete first;
   last=NULL; 
   return; 
}
node *ptr=first;
first=first->link;
last->link=first;
delete ptr;
}
void circularlist::remove_last()
{
 if(first==NULL)
{
  cout<<"No value to display";
  return;
}
if(first->link==first)
{
  delete first;
  last=NULL;
  return; 
}
node *ptr=first;
while(ptr->link!=last)
 ptr=ptr->link;
 ptr->link=first;
 delete last;
 last=ptr;
}
void circularlist::show()
{
 if(first==NULL)
{
  cout<<"No value to display";
   return;
}
 node *ptr=first; 
 while(ptr->link!=first)
{
 cout<<ptr->data<<"";
 ptr=ptr->link;
 }
cout<<ptr->data<<"";
  }
circularlist::~circularlist()
{
node *ptr=first; 
 while(first->link!=last)
{
  first=first->link;
  cout<<ptr->data<<"deleted";//press alt+f5 to see the deleted values
  delete ptr;
  ptr=first;
}
cout<<ptr->data<<"deleted";  
delete ptr;  
ptr=first->link;  
cout<<ptr->data<<"deleted";  
}
int main()
{
  circularlist c;  
  c.insert_start(5); 
  c.insert_start(6); 
  c.insert_start(7);
  c.insert_start(8);
  c.insert_start(9);
  c.show();
  cout<<"\n";
  c.insert_last(94);
  c.insert_last(95);
  c.insert_last(96);
  c.insert_last(97);
  c.insert_last(98);
  c.insert_last(99);
  c.show();
  cout<<"\n";
  c.remove_start();
  c.show();
  cout<<"\n";
  c.remove_last();
  c.show();
  return 0;
}
