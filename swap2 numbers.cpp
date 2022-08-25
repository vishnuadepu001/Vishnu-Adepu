//call by value
//swap two numbers
#include<iostream>
using namespace std;
void swap(int a, int b) //a=5 b=6
{
int temp;
temp=a;   //temp=5
a=b;      //a=6
b=temp;
cout<<"a after swapping="<<a<<endl; //6
cout<<"b after swapping="<<b<<endl;	//5
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
