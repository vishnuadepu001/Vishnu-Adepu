//sum of n numbers using for loop c++ programming 
//int n=5
//1+2+3+4+5 => 15
//n=10 
#include<iostream>
using namespace std;
main()
{
	int n,i,sum=0;
	cout<<"enter the value of n=";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		sum=sum+i;
	}
	cout<<"sum is="<<sum;
}
