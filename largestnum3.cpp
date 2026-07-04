#include<iostream>
using namespace std;

int main()
{
	int a,b,c;

	cout<<"Enter the first number::";
	cin>>a;

	cout<<"Enter the Second number::";
	cin>>b;

	cout<<"Enter the third number::";
	cin>>c;

	if(a>b && a>c)
	{
		cout<<a<<" is largest number."<<endl;
	}
	else if(b>a && b>c)
	{
		cout<<b<<" is laregest number."<<endl;
	}
	else if(c>a && c>b)
	{
		cout<<c<<" is largest number."<<endl;
	}
	else
	{
		cout<<"Number are same."<<endl;
	}
}
