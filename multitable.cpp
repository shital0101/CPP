//Find the multiplication table of a given number.
#include<iostream>
using namespace std;

int main()
{
	int num;
	int i;

	cout<<"Enter the number for table::";
	cin>>num;

	cout<<"Table of "<<num<<endl;
	for(i=1;i<=10;i++)
	{
	    int prod=num*i;
	    cout<<prod<<endl;
	}
}
