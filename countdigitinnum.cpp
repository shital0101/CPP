#include<iostream>
using namespace std;

int main()
{
	int num;

	cout<<"Enter the number::";
	cin>>num;

	int count=0;

	if(num==0)
	{
	    count++;
	}

	while(num>0)
	{
		num=num/10;
		count++;
	}

	cout<<"Total Digits in a Number are:: "<<count<<endl;
}
