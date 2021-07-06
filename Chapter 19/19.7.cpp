#include<iostream>
using namespace std;
class node
{
  public:
  int data; 
  node *link; 
  node(){data=0;link=NULL;}
};
class queue
{
  private:
  node *first,*last;
  public:
  queue():first(NULL),last(NULL){}
  void insert(int);
  int remove();
  ~queue();
};
void queue::insert(int value)
{
   node *ptr=NULL;
    ptr= new node;
   if(ptr==NULL)
  {
  cout<<"Queue is full\n";
  return; 
}
if(first==NULL)
{
  first=ptr;
  first->data=value; 
  first->link=NULL;
  last=first; 
   return;
  }
last->link=ptr;
last=ptr;
last->data=value;
last->link=NULL;
}
int queue::remove()
{
  if(first==NULL)
{
  cout<<"Queuee empty!\n";
  return NULL;
  }
node *ptr=first;
first=first->link;
int value=ptr->data;
delete ptr;
return value;
}
queue::~queue()
{
node *ptr=first;
 while(first!=NULL)
  {
 first=first->link; 
    delete ptr;
    ptr=first;
     }
}
int main()
{
    queue q;
    q.remove();
    for(int i=1;i<100;i++)
    q.insert(i); 
    for(int i=1;i<100;i++)
         cout<<q.remove()<<"";
    return 0;
}
