#include <iostream>  
using namespace std;  
class Animal {  
    public:  
void eat(){    
cout<<"Parent Function...."<<endl;    
    }      
};   
class Dog: public Animal    
{    
 public:  
 void eat()    
    {    
         Animal::eat(); 
       cout<<"Derived Function..."<<endl;    
    }    
};  
int main(void) {  
   Dog d ;    
   d.eat();  
  // d.Animal::eat(); // we can use this method
   return 0;  
}  
