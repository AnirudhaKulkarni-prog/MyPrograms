//Largest even number that can be formed by any number of swaps
#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
int main()
{
	string s="135";
	int n=s.length();
	
	sort(s.begin(),s.end(),greater<int>());
	
	int flag=0;
	for(int i=n-1;i>=0;i--)
	{
		
		if(s[i]%2==0)
		{
			int temp;
			temp=s[i];
			s[i]=s[n-1];
			s[n-1]=temp;
			flag=1;
			break;
						
		}
	}
	
	if(flag)
		cout<<s;
	else
		cout<<"Not possible";
	
	
}
