#include<iostream>
using namespace std;
class node
{
 public: 
   int data;
   node *next;
   node *previous; 
   node():data(0),next(NULL),previous(NULL){}
};
class doubly 
{
 private: 
  node *first;
  node *last;
 public:
  doubly():first(NULL),last(NULL){}
  void insert_s(int);
  void insert_end(int);
  void insert_loc(int,int);
  void remove_s();
  void remove_end();
  void remove_loc(int);
  void show_forword();
void show_reverse();  
~doubly();
};
void doubly::insert_s(int value)
{
if(first==NULL)
{
  first=new node;
  first->next=NULL;
  first->previous=NULL;
  first->data=value; 
  last=first;
  return;
}
 node *ptr=new node; 
  ptr->next=first;
  first->previous=ptr;
  first=ptr;
  first->data=value;
  first->previous=NULL;
  }
void doubly::insert_end(int value)  
  {
  if(first==NULL) 
   {
  first=new node;
  first->next=NULL;
  first->previous=NULL;
  first->data=value;
  last=first;
  return;
  }
 node *ptr=new node; 
  last->next=ptr;
  ptr->previous=last;
  last=ptr;
  last->data=value;
  last->next=NULL;
}
void doubly::insert_loc(int value,int loc)
{
  node *ptr=first; 
 int i=1; 
  while(i<loc)
  {
  ptr=ptr->next;
  i++;
}
node *ptr2=new node;
ptr2->previous=ptr->next->previous;
ptr->next->previous=ptr2;
ptr2->next=ptr->next;
ptr->next=ptr2;
ptr2->data=value;
}
void doubly::remove_s()
{
if(first->next==NULL)
{
  delete first;
  last=NULL;
  return;
}
node *ptr=first; 
first=first->next;
first->previous=NULL;
delete ptr;
}
void doubly::remove_end()
{
  if(first->next==NULL)
{
   delete first;
   last=NULL;
   return;
  }
node *ptr=last;    
last=last->previous;   
last->next=NULL;   
delete ptr;
  }
  void doubly::remove_loc(int loc)
  {
  	node *ptr=first; 
 int i=1; 
  while(i<loc)
  {
  ptr=ptr->next;
  i++;
  }
 node *ptr2=ptr->next;
 ptr->next=ptr2->next;
 ptr2->next->previous=ptr;
 delete ptr2; 
}
void doubly::show_forword()
{
  cout<<"\nValue displayed in forwarding order\n";
 node *ptr=first; 
 while(ptr->next!=NULL) 
{
  cout<<ptr->data<<""; 
  ptr=ptr->next; 
}
cout<<ptr->data;
}
void doubly::show_reverse()
{
cout<<"\nvalue displayed in backword order\n";
node *ptr=last;
    while(ptr->previous!=NULL);
{
  cout<<ptr->data<<"";
  ptr=ptr->previous;
}
cout<<ptr->data;
}
doubly::~doubly()
{
 node *ptr=first;  
 while(first->next!=NULL)  
 {
   first=first->next;  
   delete ptr;
   ptr=first;
 }
 delete ptr;  
}
int main()   
  {
	doubly d;      
    d.insert_s(5);   
    d.insert_s(4);  
    d.insert_s(3);  
    d.insert_s(2); 
    d.insert_s(1);  
    d.show_forword();  
    cout<<endl;  
    d.show_reverse();  
    d.insert_end(50);
	d.insert_end(51);
	d.insert_loc(3,33);
	cout<<endl;
	d.show_forword();
	cout<<endl;
	d.show_reverse();
	cout<<endl;
	d.remove_s();
	d.remove_end();
	d.remove_loc(4);
	d.show_forword();
	cout<<endl;
	d.show_reverse();
	return 0;
}	  
