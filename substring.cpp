#include<iostream>
using namespace std;
int main()
{
	string s1,s2;
	cout<<"Enter the string from which we need to find the substring exists or not"<<endl;
	cin>>s1;
	cout<<"Enter the substring"<<endl;
	cin>>s2;
	
	int flag=0,k;
	int n1=s1.length();
	int n2=s2.length();
	
	for(int i=0;i<=n1-n2;i++)
	{
		int j;
		k=i;
		for(j=0;j<n2;j++,k++)
		{
			if(s1[k]!=s2[j])
				break;
			
		}
		if(j==n2)
		{
			cout<<"YES"<<endl;
			flag=1;
			break;
		}
	}
	if(flag==0)
		cout<<"NO"<<endl;
	
	
}
