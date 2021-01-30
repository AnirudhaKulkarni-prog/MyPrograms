#include<iostream>
using namespace std;
int partition(int arr[],int l,int h)
{
	int pivot=arr[h];
	int pIndex,i,temp=0;
	pIndex=l;
	for(i=l;i<h;i++)
	{
		if(arr[i]<=pivot)
		{
			temp=arr[i];
			arr[i]=arr[pIndex];
			arr[pIndex]=temp;
			pIndex++;
			
		}
		
		
	}
	temp=arr[pIndex];
	arr[pIndex]=arr[h];
	arr[h]=temp;
	return pIndex;
}
void quicksort(int arr[],int l,int h)
{

	if(l<h)
	{
		int pIndex=partition(arr,l,h);
		quicksort(arr,0,pIndex-1);
		quicksort(arr,pIndex+1,h);
	
		
	}
}
int main()
{
	int arr[20];
	int i,n;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	quicksort(arr,0,n-1);
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<"\t";
		
	}
	return 0;
}

