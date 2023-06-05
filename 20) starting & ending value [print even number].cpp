/* Write a program that takes starting and ending value from user and show even numbers between them*/
#include<iostream>
using namespace std;
int main()
{
	int a, b, n;
	char choice;
	n=1;
	loop:
	cout<<"Enter starting and ending values= ";
	cin>>a>>b;
	if(a<b)
	{	do{
			if(a%2==0)
			  cout<<a<<"\t";
		a++;
		n++;	}while
		(a<=b);
	}
	else
	{	cout<<"Starting value must be smaller than ending value.\n";
		}
	cout<<"\nNumber of Even numbers= "<<n;
		cout<<"\nDo you want to try again = Y/N  ";
		cin>>choice;
		if(choice=='y' || choice=='Y')
		  goto loop;
	
	return 0;
}