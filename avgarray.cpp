#include<iostream>
using namespace std;

int main()
{
	int arr[100],i,n,sum=0;

	cout<<"Enter the limiit of array::";
	cin>>n;

	cout<<"Enter the array elements:";
	for(i=0;i<n;i++)
	{
	   cin>>arr[i];
	}

	for(i=0;i<n;i++)
	{
	   sum=sum+arr[i];
	}

	int avg=sum/n;

	cout<<"Average of array elements are: "<<avg<<endl;
}
