#include<iostream>
using namespace std;
class A
{
	static int a;
	public:
	static void sum()
{
a++;
cout<<a<<endl;
}	
};
int A::a=1;
main()
{
	class A obj1,obj2;
	obj1.A::sum(); //2
	obj2.A::sum(); //3
}
