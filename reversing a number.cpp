//find out reverse of a number
//n=123 ans:321
#include<iostream>
using namespace std;
int main()
{
	int n, y=0,rem; //y= reverse
	cout<<"Enter a number:";
	cin>>n;
	while(n!=0)
	{
		rem=n%10;
		y=y*10+rem;
		n=n/10;
	}
	cout<<"Reversed Number:"<<y<<endl; 
	return 0;
}
