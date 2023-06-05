#include<iostream>
using namespace std;
int main()
{
	int e, o;
	e=0;
	o=1;
	cout<<e<<"\t"<<o<<"\t";
	while(e<10)
	{
	e+=2;
	o+=2;
	cout<<"-"<<e<<"\t";
	if(o<10)
	cout<<o<<"\t";
	}
	return 0;
}