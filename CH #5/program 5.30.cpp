#include<iostream>
using namespace std;
int main()
{
	int n=1;
	loop:
		cout<<n<<": C++"<<endl;
		n++;
		if(n<=5)goto loop;
		cout<<"End 0f Program";
	return 0;
}
