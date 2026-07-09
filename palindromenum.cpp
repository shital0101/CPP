#include<iostream>
using namespace std;

int main()
{
	int num;

	cout<<"Enter the Number:";
	cin>>num;

	int temp=num;
	int i,revnum=0,rem;

	while(num>0)
	{
	     rem=num%10;
	     revnum=(revnum*10)+rem;
	     num=num/10;
	}

	if(temp==revnum)
	{
	      cout<<"Number is Palindrome Number..."<<endl;
	}
	else
	{
	      cout<<"Number is not Palindrome Number..."<<endl;
	}
}
