#include<iostream>
using namespace std;

int main()
{
	int a,b;

	cout<<"Enter the first number::";
	cin>>a;

	cout<<"Enter the Second number::";
	cin>>b;

	if(a==b)
	{
		cout<<"Numbers are equals"<<endl;
	}
	else if(a>b)
	{
		cout<<a<<" is largest number"<<endl;
	}
	else
	{
		cout<<b<<" is largest number"<<endl;
	}
}
