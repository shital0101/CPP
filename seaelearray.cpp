//Search for an element using linear search.
#include<iostream>
using namespace std;

int main()
{
	int arr[100],i,n,num;

	cout<<"Enter the array limit:";
	cin>>n;

	cout<<"Enter the array elements::";
	for(i=0;i<n;i++)
	{
	    cin>>arr[i];
	}

	cout<<"Array elements are::";
	for(i=0;i<n;i++)
	{
	   cout<<arr[i]<<" ";
	}

	cout<<endl;

	cout<<"Enter a number to search::";
	cin>>num;

	for(i=0;i<n;i++)
	{
	     if(arr[i]==num)
	     {
		cout<<"Number is found..."<<endl;
	        break;
	     }
	}

	if(i==n)
	{
	    cout<<"Number not found..."<<endl;
	}
}
