#include<iostream>
#include<fstream>
#include<conio.h>
#include<string.h>
#include<iomanip>
using namespace std;
class Phonebook
{
char name[50],pno[6];	
public:
void getdata()
{
cout<<"Enter name: ";cin>>name;
cout<<"Enter Phone No: ";cin>>pno;
}
void showdata()
{
cout<<"\n"<<setw(15)<<name;cout<<setw(8)<<pno<<endl;
}
char *getname()
{return name;}
char *getpno()
{return pno;}
void update(char *nm,char *tphn)
{
strcpy(name,nm);
strcpy(pno,tphn);
}
};
int main()
{
Phonebook rec,*p;p=&rec;
fstream file("G:\Phone.txt",ios::trunc|ios::ate|ios::in|ios::out|ios::binary);
ofstream print("LPT1");
char ch,nm[50],tphn[6];
int choice,found=0,cnt=0;
cout<<"\n"<<setw(20)<<"Phone Book Record\n";
cout<<setw(20)<<"....................\n";
cout<<"1) Add New Record "<<endl;
cout<<"2) Display All Records "<<endl;
cout<<"3) Search Person Name "<<endl;
cout<<"4) Search Telephone Number "<<endl;
cout<<"5) Update Telephone Number "<<endl;
cout<<"6) Print All Records "<<endl;
cout<<"7) Exit "<<endl;
while(1)
{x:
cout<<"\nChoose yor choice: ";
cin>>choice;
switch(choice)
{
case 1: 
rec.getdata();
file.write((char*)&rec,sizeof(rec));
break;
case 2: ;
file.seekg(0,ios::beg);
cout<<"Recored in phonebook."<<endl;
while(file)
{
file.read((char*)&rec,sizeof(rec));
if(!file.eof())
rec.showdata();
}
file.clear();
break;
case 3: 
cout<<"Enter name: ";
cin>>nm;
file.seekg(0,ios::beg);
found=0;
while(file.read((char*)&rec,sizeof(rec)))
{
if(stricmp(nm,rec.getname())==0)
{found=1;
rec.showdata();}
}
file.clear();
if(found==0)
{cout<<"\nRecored not found."<<endl;}
break;
case 4: 
cout<<"Enter Telephone number: ";
cin>>tphn;
file.seekg(0,ios::beg);
found=0;
while(file.read((char*)&rec,sizeof(rec)))
{
if(stricmp(tphn,rec.getpno())==0)
{found=1;rec.showdata();}}
file.clear();
if(found==0)
{cout<<"\nRecored not found."<<endl;}
break;
case 5: 
cout<<"Enter name: ";
cin>>nm;
file.seekg(0,ios::beg);
found=0;
while(file.read((char*)&rec,sizeof(rec)))
{
cnt++;if(stricmp(nm,rec.getname())==0)
{found=1;break;}
}
file.clear();
if(found==0)
{cout<<"\nRecored not found."<<endl;}
else
{
int location=(cnt-1) * sizeof(rec);
cin.get(ch);
if(file.eof())
{file.clear();}
cout<<"Enter new Telephone No: ";
cin>>tphn;
file.seekp(location);
rec.update(nm,tphn);
file.write((char*)&rec,sizeof(rec));
file.flush();
}
break;
case 6:
system("notepad /p Phone.txt");
cout<<"Data printing.."<<endl;
goto x;
break;
case 7:{goto out;}}}
out:
file.close();
return 0;
}
