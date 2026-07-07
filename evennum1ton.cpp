//Print even numbers from 1 to n.
#include<iostream>
using namespace std;

int main()
{
	int n,i;

	cout<<"Enter the limit to print numbers::";
	cin>>n;

	cout<<"Even numbers from 1 to "<<n<<endl;

	for(i=1;i<=n;i++)
	{
	     if(i%2==0)
             {
		cout<<i<<" ";
	     }
	}

	cout<<endl;
}
