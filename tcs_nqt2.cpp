#include<iostream>
using namespace std;
int main()
{
	int arr[100];
	int n,temp,prod=1;
	cout<<"Enter the count of values you want to enter"<<endl;
	cin>>n;
	cout<<"Enter"<<n<<"values"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	for(int i=n-1;i>=n-4;i--)
	{
		prod=prod*arr[i];
	}
	cout<<prod;
}
