#include<iostream>
using namespace std;

int main()
{
	int year;

	cout<<"Enter the Year::";
	cin>>year;

	if(year%400==0 || year%4==0 && year%100!=0)
	{
		cout<<"Year is LeafYear..."<<endl;
	}
	else
	{
		cout<<"Year is not LeafYear..."<<endl;
	}
}
