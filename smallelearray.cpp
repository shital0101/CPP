#include<iostream>
using namespace std;

int main()
{
	int arr[100],i,n,sele=999;

	cout<<"Enter the limit for array:";
	cin>>n;

	cout<<"Enter the Array elements::";
	for(i=0;i<n;i++)
	{
	    cin>>arr[i];
	}

	for(i=0;i<n;i++)
	{
	    if(arr[i]<sele)
	    {
	        sele=arr[i];
	    }
	}

	cout<<"Smallest element in array:: "<<sele<<endl;
}
