#include<iostream>    //Accessing member function,calling parent constructor,function overriding 
using namespace std;
class Parent
{
private :
int n;
public:
	Parent (int p)
	{
	 n=p;
	}
	void fwd ()
	{
		n++;
	}
	void show ()
	{
			
		cout<<"value of n "<<n<<endl;
	}
	
};
class child : public Parent 
{
	private :
	int numb;
	int numb2;
	public :
		child (int ch,int m):Parent (m)
		{
			numb=ch;
		}
		void show()
		{
			Parent :: show(); // Accessing member function using resulation operator
			cout<<"Value of number ="<<numb<<endl;
		 } 
 }; 
 int main ()
 {
 	child obj (9,23);  
 	obj.fwd();
 	obj.show();
 	
 	
 	
 }
 
