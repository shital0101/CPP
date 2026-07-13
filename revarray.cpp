#include<iostream>
using namespace std;

int main()
{
	int arr[100],i,n;

	cout<<"Enter the limit::";
	cin>>n;

	cout<<"Enter the array elements:";
	for(i=0;i<n;i++)
	{
	   cin>>arr[i];
	}

	cout<<"Array elements are:: ";
	for(i=0;i<n;i++)
	{
	   cout<<arr[i]<<" ";
	}

	cout<<endl;

	cout<<"Reversed Array Elements are:: ";
	for(i=n-1;i>=0;i--)
	{
	     cout<<arr[i]<<" ";
	}

	cout<<endl;
}
