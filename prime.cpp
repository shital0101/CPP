//Check the given  nimber is prime or not.
#include<iostream>
using namespace std;

int main()
{
	int i,num,flag=0;

	cout<<"Enter the number:";
	cin>>num;

	if(num==1 || num==0)
	{
	    flag=1;
	}

	for(i=2;i<num;i++)
	{
	   if(num%i==0)
	   {
		flag=1;
	        break;
	   }
	}

	if(flag==0)
	{
	   cout<<"Number is Prime Number"<<endl;
	}
	else
	{
	    cout<<"Number is not prime number"<<endl;
	}
}
