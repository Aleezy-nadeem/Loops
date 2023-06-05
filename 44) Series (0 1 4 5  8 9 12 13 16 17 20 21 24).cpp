#include<iostream>
using namespace std;
int main()
{
	int E, O;
	E=0;
	O=1;
	cout<<E<<"\t"<<O<<"\t";
	while(E<24)
	{
		E=O+3;
		O=E+1;
		cout<<E<<"\t";
		if(O<24)
		cout<<O<<"\t";
	}
	return 0;
}