//to check that number is palindrome 
//n=121 ans:121
#include<iostream>
using namespace std;
int main()
{
	int n, y=0,rem; //y= reverse
	cout<<"Enter a number:";
	cin>>n;
	int temp=n;
	while(n!=0)
	{
		rem=n%10;
		y=y*10+rem;
		n=n/10;
	}
	cout<<"Reversed Number:"<<y<<endl;
	if(temp==y)
	cout<<"Number is Palindrome";
	else
	cout<<"not palindrome";
}
