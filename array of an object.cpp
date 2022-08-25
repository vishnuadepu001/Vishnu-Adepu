//Array of an object
#include<iostream>
#include<string.h>
using namespace std;
class student
{
int rollno;
char name[30];
public:
void getdata(int x, char y[]) //x=22, y="Vishnu"
{
rollno=x;
strcpy(name,y);
}
void putdata()
{
cout<<"rollno is="<<rollno <<endl;
cout<<"name is="<<name<<endl;
}
};
main()
{	
class student obj[10];
int rn;
char n[30];
int i;
for (i=1;i<=5;i++)
{
cout<<"enter rollno and name=";
cin>>rn>>n;
obj[i].getdata(rn,n);
}
cout<<"\n \n";
for (i=1;i<=5;i++)
{
obj[i].putdata();
}
}
