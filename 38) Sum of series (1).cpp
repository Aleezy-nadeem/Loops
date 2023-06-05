#include<iostream>
using namespace std;
int main()
{
	float a, b, sum;
	a=1;
	b=2;
	sum=0;
	sum+=a;
	while(b<=100)
	{
		sum=sum+(a/b);
		b+=2;
	}
	cout<<"Sum of sereis = "<<sum;
	return 0;
}