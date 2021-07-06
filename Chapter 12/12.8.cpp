#include <iostream>
using namespace std;
int main()
{
char line[80];
int uc,lc,uv,lv;
uc=lc=uv=lv=0;
cout<<"Enter a sentence:\n";
cin.getline(line,80);
for(int X=0;line[X]!='\0';X++)
{
	if(line[X]=='A'||line[X]=='E'||line[X]=='I'||line[X]=='O'||line[X]=='U')
	uv++;
	else if (line[X]=='a'||line[X]=='e'||line[X]=='i'||line[X]=='o'||line[X]=='u')
	lv++;
	else if(line[X]>+65&&line[X]<=90)
	uc++;
	else if(line[X]>=97&&line[X]<=122)
	lc++;
}
cout<<"uppercase consonants="<<uc<<endl;
cout<<"lowercase consonants="<<lc<<endl;
cout<<"uppercase vowels="<<uv<<endl;
cout<<"lowercase vowels="<<lv<<"."<<endl;
return 0;
}
