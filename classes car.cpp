#include<iostream>
using namespace std;
class car
{
	int carnumber,price;
	char carname[30];
	
	
	public:
		void balayya()
		{
			cout<<"enter the car name and price and carnumber";
			cin>>carname>>price>>carnumber;
		}
	
		void babu()
		{
			cout<<"\n car name is"<<carname;
			cout<<"\n car price is "<<price;
			cout<<"\n car number is"<<carnumber;
			
		}
};
main()
{
	class car obj;
	obj.balayya();

	obj.babu();
}
