//create a class with name : employee, take input of employee, name and employee
//from the user and print those
#include<iostream>
using namespace std;
class employee
{
	int emp_no;
	char name[30];
	int salary;
	public:
		void getdata();
		void putdata();
};
void employee::getdata()
{
	cout<<"enter employee name, no, and salary=";
	cin>>name>>emp_no>>salary;
}
void employee::putdata()
{
	cout<<"\n employee name is="<<name;
	cout<<"\n employee number is="<<emp_no;
	cout<<"\n salary is="<<salary;
}
main()
{
	class employee obj;
	obj.getdata();
	obj.putdata();
}
