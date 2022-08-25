//object to class
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
class student obj;
obj.getdata(22, "Vishnu");
obj.putdata();
}
