#include<iostream>
using namespace std;

int main()
{
	int num;
	cout<<"Enter the number:";
	cin>>num;

	int rem,revnum=0;

	while(num>0)
	{
		rem=num%10;
		revnum=(revnum*10)+rem;
		num=num/10;
	}

	cout<<"Reverse Number="<<revnum<<endl;
}
