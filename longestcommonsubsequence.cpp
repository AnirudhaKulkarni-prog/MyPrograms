#include<iostream>
using namespace std;
void longest_subsequence(string s1,string s2)
{
	int n1=s1.length();
	int n2=s2.length();
	
	int store[n1+1][n2+1];
	
	for(int i=0;i<=n1;i++)
	{
		for(int j=0;j<=n2;j++)
		{
			if (i == 0||j == 0)
			{
				store[i][j] = 0;
				  
			}
			else if (s1[i - 1]==s2[j - 1])
			{
				store[i][j] = store[i - 1][j - 1] + 1;
			}  
	    	else
	    	{
	    		store[i][j] = max(store[i - 1][j], store[i][j - 1]);
			}
	            
		}
	}
	cout<<"Length of Longest Common subsequence is:- "<<store[n1][n2];
	
}
int main()
{
	string s1,s2;
	
	cout<<"enter the first string\n";
	cin>>s1;
	cout<<"enter the second string\n";
	cin>>s2;
	longest_subsequence(s1,s2);
	
}
