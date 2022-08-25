#include<iostream>
using namespace std;
class A
{
	int a=1;
	public:
	void sum()
{
a++;
cout<<a<<endl;
}	
};
main()
{
	class A obj1,obj2;
	obj1.sum(); //2
	obj2.sum(); //2
}
