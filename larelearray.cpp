#include<iostream>
using namespace std;

int main()
{
	int arr[100],n;
	int i,larele;
	cout<<"Enter the limit of array:";
	cin>>n;

	cout<<"Enter the elements in array:";
	for(i=0;i<n;i++)
	{
	     cin>>arr[i];
	}

	larele=0;
	for(i=0;i<n;i++)
	{
	    if(arr[i]>larele)
	    {
	         larele=arr[i];
	    }
	}

	cout<<"Largest element in array is:: "<<larele<<endl;
}
