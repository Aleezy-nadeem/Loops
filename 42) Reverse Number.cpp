#include<iostream>
using namespace std;
int main()
{
	int n, r, rev;
	rev=0;
	cout<<"Enter a Number = ";
	cin>>n;
	while(n>0)
	{
		r=n%10;
		rev= rev*10+r;
		n=n/10;
	}
	cout<<"Reverse of Number = "<<rev;
	return 0;
}