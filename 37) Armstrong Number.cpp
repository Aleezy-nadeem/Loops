#include<iostream>
using namespace std;
int main()
{
	int num, n, sqr, sum;
	sum=0;
	sqr=1;
	cout<<"Enter a number= ";
	cin>>num;
	n=num;
	while(n>0)
	{
		sqr= n%10;
		sqr= sqr*sqr*sqr;
		sum+= sqr;
		n=n/10;
	}
	if(num==sum)
		cout<<"Number is an Armstrong Number";
	else
		cout<<"Number is not an Armstrong Number";
	return 0;
}