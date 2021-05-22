#include<iostream>
using namespace std;
int fib(int n,int dp[])
{
	if(n==0||n==1)
	{
		return n;
	}
	if(dp[n]!=-1)
	{
		return dp[n];
	}
	return dp[n]=fib(n-1,dp)+fib(n-2,dp);
}
int main()
{
	int dp[10];
	int n=4;
	for(int i=0;i<=4;i++)
	{
		dp[i]=-1;
	}
	cout<<fib(n,dp)<<"\n
	S";
	for(int i=0;i<n;i++)
	{
		cout<<dp[i];
	}
}
