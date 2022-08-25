//recurssion
//when fn calls itself again n again is known as recurssion
//factorial of number
#include<iostream>
using namespace std;
int fun(int n)
{
if(n==1)
return 1;
else
return n*fun(n-1);	
}
main()
{
int n,f;
cout<<"enter number=";
cin>>n;
f=fun(n);
cout<<"factorial is="<<f;	
}
