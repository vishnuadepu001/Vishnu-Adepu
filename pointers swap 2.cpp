//call by value
//swap two numbers
#include<iostream>
using namespace std;
void swap(int *p1, int *p2) //a=5 b=6
{
int temp;
temp=*p1;   //temp=5
*p1=*p2;      //a=6
*p2=temp;
cout<<"a after swapping="<<*p1<<endl; //6
cout<<"b after swapping="<<*p2<<endl;	//5
}
main()
{
int a,b;
cout<<"enter two numbers=";
cin>>a>>b; //5 6
cout<<"a before swapping="<<a<<endl; //5
cout<<"b before swapping="<<b<<endl; //6
swap(&a,&b);	//swap(5,6)
cout<<"a after swapping in the main="<<a<<endl; //5
cout<<"b after swapping in the main="<<b<<endl; //6
	
}
