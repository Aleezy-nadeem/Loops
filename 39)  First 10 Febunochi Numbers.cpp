#include<iostream>
using namespace std;
int main()
{
	int a, b, n, next;
	a=0;
	b=1;
	n=1;
	cout<<a<<"\t"<<b;
	while(n<=8)
	{
	next= a+b;
	a=b;
	b=next;
	n++;
	cout<<"\t"<<next;
	}
	return 0;
}