#include<iostream>
using namespace std;
int main()
{
	string s="12&abc-- ";
	int ans=0;
	for(int i=0;i<s.length();i++)
	{
		if((s[i]>='a'&&s[i]<='z') || (s[i]>='A'&&s[i]<='Z'))
		{
			continue;
			
		}
		else if(isspace(s[i]))
		{
			continue;
		}
		else if(isdigit(s[i]))
		{
			continue;
		}
		else
		{
			ans++;
		}
	}
	cout<<ans;
}
