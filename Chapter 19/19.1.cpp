#include<iostream>
using namespace std;
struct Link
 {
   int data; 
   Link *next;
};
class List    
 {
   private:
   Link *first;
   public: 
   List();
   void add(int d);
   void del(int v);
   void show();
};
List::List()
{
   first = NULL;
}
void List::add(int d)
{
   Link *ptr,*temp;
   if(first==NULL)
{
   first = new Link;
   first->data =d;
   first->next =NULL;
}
else
{
   ptr =first; 
   while(ptr->next!=NULL)ptr=ptr->next; 
   temp =new Link; 
   temp->data=d;
   temp->next=NULL;
   ptr->next =temp;
  }
}
void List::del(int v)
{
  Link *temp, *pre;
  temp =first; 
  if(temp->data==v) 
{
  first=temp->next; 
  delete temp;
  cout<<endl<<v<<" has been deleted."<<endl;
  return;
}
pre =temp; 
while(temp!=NULL)
{
if(temp->data==v)
{
  pre->next=temp->next;
  delete temp;
  cout<<"\nValue deleted."<<endl;
  return;
} 
 pre =temp; 
 temp =temp->next;  
}
cout<<endl<<v<<" not found"<<endl;

}
void List::show() 
{
  Link*temp;  
  temp=first;
  cout<<"first list is as follows:\n";
  while(temp!=NULL)
  {
     cout<<temp->data<<" ";
     temp=temp->next;
   }
}
int main()  
{
   List l;  
   l.add(10);
   l.add(20);
   l.add(30); 
   l.add(40);
   l.add(50);
   l.show();
   cout<<endl; 
   l.del(35);
   l.del(10);
   l.show();
   return 0;
 }
