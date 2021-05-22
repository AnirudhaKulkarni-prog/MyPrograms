#include<iostream>
#include<algorithm>
using namespace std;


int lcs_rec(string s1,int n1,string s2,int n2)
{
	if(n1==0 || n2==0)
	{
		return 0;
	}
	
	if(s1[n1-1]==s2[n2-1])
	{
		return (1+lcs_rec(s1,n1-1,s2,n2-1));
	}
	else
	{
		return max(lcs_rec(s1,n1-1,s2,n2),lcs_rec(s1,n1,s2,n2-1));
		
	}
	
	
	
}
int lcs_dp(string s1,int n1,string s2,int n2)
{
	int lcs[n1+1][n2+1];
	int i,j;
	
	for(int i=0;i<=n1;i++)
	{
		for(int j=0;j<=n2;j++)
		{
			if(i==0 || j==0)
			{
				lcs[i][j]=0;
			}
			else if(s1[i-1]==s2[j-1])
			{
				lcs[i][j]=lcs[i-1][j-1]+1;
			}
			else
			{
				lcs[i][j]=max(lcs[i][j-1],lcs[i-1][j]);
			}
		}
	}
	return lcs[n1][n2];
}
int main()
{
	string s1;
	string s2;
	cout<<"Enter a string1"<<endl;
	cin>>s1;
	int n1=s1.length();
	cout<<"Enter a string2"<<endl;
	cin>>s2;
	int n2=s2.length();
	int x=lcs_dp(s1,n1,s2,n2);
	
	cout<<x;
}

/*
OutPut:-
Enter a string1
aedfhr
Enter a string2
abcdgh
3
------*/
