#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int n=5;
	int ans;
	
	while(n)
	{
		int currbit=n&1;
		n>>=1;
		//cout<<n;
		cout<<currbit;
	}
	
}
