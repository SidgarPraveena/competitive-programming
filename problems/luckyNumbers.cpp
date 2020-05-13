#include<iostream>
using namespace std;
int divisor=2;
int isLuckyNumber(int n)
{
	if(divisor >  n)
		return 1;
	if(n%divisor == 0)
		return 0;
	n=n-n/divisor;
	divisor++;
	isLuckyNumber(n);
}
int main()
{
	int n;
	cout<<"Enter number: ";
	cin>>n;
	cout<<isLuckyNumber(n);
	return 0;
}
