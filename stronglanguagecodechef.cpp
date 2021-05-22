#include<iostream>
#include<vector>
using namespace std;
int main()
{
	
	int n,k,t;
	string s;
	cin>>t;
	while(t--)
	{
		
	
		cin>>n;
		cin>>k;
		cin>>s;
		int x=n-1;
		int flag=0,i;
		vector <int> arr;
	
		
		for(int i=0;i<n;i++)
		{
			if(s[i]!='*')
			{
				arr.push_back(i);
			}
		}
		
		if((arr[0]-0)>=k)
		{
			flag=1;
			
		}
		if(flag!=1)
		{
			for(i=1;i<arr.size();i++)
			{
				if((arr[i]-arr[i-1]-1)>=k)
				{
					flag=1;
					break;
				}
			}
		
			
		}
		if(flag!=1)
		{
			if((x-arr[i-1])>=k)
			{
				flag=1;
			}
		}
		
		if(flag==1)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
		
	}
	
}
