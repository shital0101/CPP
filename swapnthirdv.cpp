#include<iostream>
using namespace std;

int main()
{
	int a=10;
	int b=20;

	a=a+b;
	b=a-b;
	a=a-b;

	cout<<"Value of a::"<<a<<endl;
	cout<<"Value of b::"<<b<<endl;
}
