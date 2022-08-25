#include<iostream>
using namespace std;
class car
{
	int carnumber,price;
	char carname[30];
	
	
	public:
	void getdata()
	{
		cout<<"enter the carnumber and price and carname";
		cin>>carnumber>>price>>carname;
	}
	void showdata()
	{
		cout<<"\n carnumber is"<<carnumber;
		cout<<"\n carprice is"<<price;
		cout<<"\n carname is"<<carname;
	}
 };
 main()
 {
 	class car obj;
 	obj.getdata();
 	obj.showdata();
 }
