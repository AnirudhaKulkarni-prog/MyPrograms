#include<iostream>
using namespace std;

struct minmax
{
	int max;
	int min;
};
struct minmax find_minmax(int arr[],int l,int h);
int main()
{
	int arr[30];
	minmax ans;
	int n;
	cout<<"Enter the array size"<<endl;
	cin>>n;
	cout<<"Enter the elemants to find the maximum and minimum element"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	ans=find_minmax(arr,0,n-1);
	cout<<"Maximum is:-"<<ans.max<<" "<<"Minimum is:-"<<ans.min;
	
	
	
}
struct minmax find_minmax(int arr[],int l,int h)
{
	minmax mm,mml,mmr;
	if(l==h)
	{
		mm.min=arr[0];
		mm.max=arr[0];
		return mm;
	}
	
	if(h==l+1)
	{
		if(arr[l]>arr[h])
		{
			mm.min=arr[h];
			mm.max=arr[l];
		}
		else
		{
			mm.min=arr[l];
			mm.max=arr[h];
		}
		return mm;
	}
	int mid=(l+h)/2;
	mml=find_minmax(arr,0,mid);
	mmr=find_minmax(arr,mid+1,h);
	if(mml.min<mmr.min)
	{
		mm.min=mml.min;
		
	}
	else
	{
		mm.min=mmr.min;
		
	}
	
	if (mml.max > mmr.max)
	{
		mm.max = mml.max;
	}
    else
    {
    	mm.max = mmr.max; 
	}
    return mm;
		
		
	
}


