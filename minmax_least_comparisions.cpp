#include<iostream>
using namespace std;
struct minmax
{
	int max;
	int min;
};

struct minmax find_minmax(int arr[],int l,int h)
{
	struct minmax mm,ml,mr;
	
	if(l==h)
	{
		mm.max=arr[l];
		mm.min=arr[h];
		return mm;
	}
	
	if(h==(l+1))
	{
		if(arr[l]>arr[h])
		{
			mm.max=arr[l];
			mm.min=arr[h];
			
		}
		else
		{
			mm.max=arr[h];
			mm.min=arr[l];
		}
		
		return mm;
	}
	
	int mid=(l+h)/2;
	
	ml=find_minmax(arr,l,mid);
	mr=find_minmax(arr,mid+1,h);
	
	if(ml.max>ml.max)
	{
		mm.max=ml.max;
		
	}
	else
	{
		mm.max=mr.max;
	}
	
	if(ml.min<mr.min)
	{
		mm.min=ml.min;
	}
	else
	{
		mm.min=mr.min;
	}
	
	return mm;
	
}

int main()
{
	struct minmax ans;
	int arr[100];
	int n;
	cout<<"Enter the number of elements in the array"<<endl;
	cin>>n;
	cout<<"Enter the array elements"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	ans=find_minmax(arr,0,n-1);
	cout<<ans.max<<endl;
	cout<<ans.min<<endl;
	
}
