//call by reference
//swap two numbers
#include<iostream>
using namespace std;
void swap(int &x, int &y) //a=5 b=6
{
int temp;
temp=x;   //temp=5
x=y;      //a=6
y=temp;
cout<<"a after swapping="<<x<<endl; //6
cout<<"b after swapping="<<y<<endl;	//5
}
main()
{
int a,b;
cout<<"enter two numbers=";
cin>>a>>b; //5 6
cout<<"a before swapping="<<a<<endl; //5
cout<<"b before swapping="<<b<<endl; //6
swap(a,b);	//swap(5,6)
cout<<"a after swapping in the main="<<a<<endl; //5
cout<<"b after swapping in the main="<<b<<endl; //6
	
}
