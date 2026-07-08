#include<iostream>
using namespace std;

int main()
{
	int n,i;
	int sum=0;

	cout<<"Enter the limit for addition of numbers::";
	cin>>n;

	for(i=1;i<=n;i++)
	{
	    sum=sum+i;
	}


	cout<<"Addition of 1 to "<<n<<" is::"<<sum<<endl;
}
