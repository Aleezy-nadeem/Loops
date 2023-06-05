#include<iostream>
using namespace std;
int main()
{
	int a, b, next, n1;
	a=0;
	b=1;
	next=0;
	cout<<"Enter a Number= ";
	cin>>n1;
	while(next<n1)
	{
		next=a+b;
		a=b;
		b=next;
	}
	if(next==n1)
	cout<<"It is a Febunochi Number";
	else 
	cout<<"It  is not a Febunochi Number";
	 return 0;
}