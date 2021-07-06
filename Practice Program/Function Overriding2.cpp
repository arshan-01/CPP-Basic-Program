#include <iostream>
using namespace std;
class simple {
protected :
int a,b;
public :
	simple (){
		a=b=0;
	}
	void in ()
	{
		cout<<"Enter value of a : "<<endl;
		cin>>a;
		cout<<"Enter value of b : "<<endl;
	    cin>>b;
	}
void add(){
	cout<<"Addition = "<<a+b;
	}
	
	void sub (){
	cout<<"Substraction = "<<a-b;	
	}	
	
	void mul(){
	cout<<"Multiplication = "<<a*b;	
	}
	
	void div(){
	cout<<"Division = "<<a/b;	
	}
};

class complex :public simple
{
public :
void add(){
	if (a<=0||b<=0)
		cout<<"Invalid Choice"<<endl;
	else
	simple::add();
	cout<<endl;
	}
	
	void sub (){
		if (a<=0||b<=0)
		cout<<"Invalid Choice"<<endl;
		else
		simple::sub();
		cout<<endl;
	}
		
	void mul(){
		if (a<=0||b<=0)
		cout<<"Invalid Choice"<<endl;
		else 
	simple::mul();	
	cout<<endl;
	}
	
	void div(){
	if (a<=0||b<=0)
		cout<<"Invalid Choice"<<endl;
		else
	simple::div();	
	cout<<endl;
	}	
};


int main ()
{
	complex obj;
	obj.in();
	cout<<endl;
	obj.add();
	obj.sub();
	obj.mul();
	obj.div();
}
