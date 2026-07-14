//Find the second largest element.
#include<iostream>
using namespace std;

int main()
{
	int arr[100],i,n;
	int larele=0;
	int seclar=0;

	cout<<"Enter the array limit::";
	cin>>n;

	cout<<"Enter the array elements::";
	for(i=0;i<n;i++)
	{
	    cin>>arr[i];
	}

	for(i=0;i<n;i++)
	{
	   if(arr[i]>larele)
	  {
	      seclar=larele;
	      larele=arr[i];
	  }
	  else if(arr[i]>seclar && arr[i]!=larele)
	  {
	      seclar=arr[i];
	  }
	}

	cout<<"Second largest element is: "<<seclar<<endl;
}
