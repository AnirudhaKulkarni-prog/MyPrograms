#include<iostream>
#include<algorithm>
using namespace std;

void minimizeMRT(int arr[],int n)
{
	
	sort(arr,arr+n);
	double MRT=0;
	int sum=0;
	
	
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	
	for(int i=0;i<n;i++)
	{
		sum=0;
		for(int j=0;j<=i;j++)
		{
			sum+=arr[j];
			
		}
		MRT+=sum;
	}
	
	MRT=MRT/n;
	cout<<MRT<<endl;
	
	
	
}
int main()
{
	int arr[100];
	int n;
	cout<<"Enter number of programs"<<endl;
	cin>>n;
	
	cout<<"Enter the lengths of programs"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	minimizeMRT(arr,n);
	
	
}
