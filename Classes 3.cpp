#include<iostream>
using namespace std;
class student
{
	int rollno;
	char name[30];
	int s,m,e; // science, maths, english
	public:
	void getdata()
	{
		cout<<"enter the value of rollno and name=";
		cin>>rollno>>name;
		cout<<"enter the values of math, science and english marks=";
		cin>>s>>m>>e;
	}
	void showdata()
	{
		cout<<"\n roll no is"<<rollno;
		cout<<"\n name is"<<name;
		int sum= s+m+e;
		cout<<"\n sum is ="<<sum;
		int avg= sum/3;
		cout<<"\n average is ="<<avg;
	}
 };
 main()
 {
 	class student obj;
 	obj.getdata();
 	obj.showdata();
 }
