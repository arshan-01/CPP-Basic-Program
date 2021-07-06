# include<iostream>
using namespace std;
void square (int n);
int main()
{
	int num[5],i;
cout<<"Enter integers:";
for(int i =0;i<5;i++)
cin>>num[i];
cout<<"calling function"<<endl;
for(int i=0;i<5;i++)
square(num[i]);
return 0;
}
void square(int n)
{
cout<<n<<"\t"<<n*n<<endl;
}
