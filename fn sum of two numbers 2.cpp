//sum of two numbers
#include<iostream>
using namespace std;
void add(); //fn prototype
main()
{
add();	//fn calling
}
void add() //fn defination
{
int a,b,c;
cout<<"enter two numbers=";
cin>>a>>b;
c=a+b;
cout<<c;
}
