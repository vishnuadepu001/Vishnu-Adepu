#include<iostream>
using namespace std;
class student
{
	int rollno;
	char name[30];
	static int count;
	public:
	void get()
	{
	count++;	
	cout<<"enter rollno and name=";
	cin>>rollno>>name;	
	}
	static void show()
	{
	cout<<"\n calling is="<<count;
	}	
};
int student::count=0;
main()
{
class student obj1;
obj1.get();
obj1.get();
obj1.get();
obj1.student::show();
}
