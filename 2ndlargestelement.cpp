#include<iostream>
using namespace std;
int main()
{
	int arr[]={3,4,2,8,5,9,6,7,10};
	
	int n=sizeof(arr)/sizeof(int);
	
	int max=INT_MIN;
	
	for(int i=0;i<n;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
		}
	}
	
	int max1=INT_MIN;
	for(int i=0;i<n;i++)
	{
		if(arr[i]==max)
		{
			continue;
		}
		if(arr[i]>max1)
		{
			max1=arr[i];
		}
	}
	cout<<max1;
	
	
}
