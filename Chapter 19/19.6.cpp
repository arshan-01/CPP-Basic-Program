#include<iostream>
using namespace std;
const int size=10;
class queue
{
  private: 
  int first,last,count;
  int array[size];
  public:
  queue();
  void insert(int);
  int remove(); 
};
queue::queue():first(0),last(-1),count(0)
{
}
void queue::insert(int value)
{
if(count>=size)
{
  cout<<"Queue is full\n";
  return; 
}
if(last>=size-1)
{
last=-1;
}
array[++last]=value;
count++;
}

int queue::remove()
{
  if(count<=0)
{
  cout<<"queue is empty\n";
  return NULL;
}
if(first>=size)
{
first=0;
}
count--;
return array[first++];
}
int main()
{
   queue q;
   q.insert(10);
   q.insert(20);
   q.insert(30);  
   cout<<q.remove();
   cout<<q.remove();
   cout<<q.remove();
   q.insert(40);
   q.insert(50);
   q.insert(60);
   q.insert(70);
   q.insert(80);
   q.insert(90);
   q.insert(100);
   q.insert(110);
   q.insert(120);
   q.insert(130);
   cout<<q.remove();
   cout<<q.remove();
   cout<<q.remove();
   cout<<q.remove();
   cout<<q.remove();
   cout<<q.remove();
   cout<<q.remove();
   cout<<q.remove();
   cout<<q.remove();
   cout<<q.remove();
   cout<<q.remove();
   cout<<q.remove();
   return 0;
}
