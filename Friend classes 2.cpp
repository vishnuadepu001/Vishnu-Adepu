//friend classes
#include<iostream>
using namespace std;
class A
{
	int a,b;
	public:
	void get()
	{
		cout<<"ENTER TWO NUMBERS=";
		cin>>a>>b;
		}
		void sum()
		{
			cout<<"sum is="<<a+b<<endl;
		}
		friend class B;	
};
class B
{
public:
void mul(A ob)
{
cout<<"mutiplication is="<<ob.a*ob.b;	
	}	
};
main()
{
	class A obj1;
	class B obj2;
	obj1.get();
	obj1.sum();
	obj2.mul(obj1);
}
