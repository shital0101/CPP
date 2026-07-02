#include<iostream>
using namespace std;

int main()
{
	int a=10;
	int b=20;
	int temp;

	temp=a;
	a=b;
	b=temp;

	cout<<"Value of a"<<a<<endl;
	cout<<"Value of b"<<b<<endl;
}
