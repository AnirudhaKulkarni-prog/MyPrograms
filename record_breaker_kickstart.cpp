#include<iostream>
#include <climits>
using namespace std;
int main()
{
	int t;
	int k=1;
	cin>>t;
	while(k<=t)
	{
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		
		int max=INT_MIN;
		int rc=0;
		
		
		int i;
		for(i=0;i<n-1;i++)
		{
			
			
			if(arr[i]>max&&(arr[i]>arr[i+1]))
			{
				
				rc++;
			}
			if(arr[i]>max)
			{
				max=arr[i];
			}
		}
		
		if(arr[i]>max)
		{
			max==arr[i];
			rc++;
		}
		cout<<"Case #"<<k<<" "<<rc<<"\n";
        k++;
	}
}
