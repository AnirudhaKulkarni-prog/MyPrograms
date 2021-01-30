#include<iostream>
using namespace std;
int main()
{
	int arr[20]={2,4,1,6,8,5,3,7};
	int n=sizeof(arr)/sizeof(arr[0]);
	mergesort(arr,n);
}
void mergesort(int arr[20],int n)
{
	if(n<2)
		return;
	mid=n/2;
	
	int l_arr[20];
	int r_arr[20];
	int i,j;
	for(i=0;i<mid;i++)
	{
		l_arr[i]=arr[i];
		
	}
	for(j=mid;j<n;j++)
	{
		r_arr[i]=arr[i];
		
	}
	mergesort(l_arr,mid);
	mergesort(r_arr,n-mid);
	merge(arr,l_arr,r_arr,n,mid,n-mid);
	
	
}
void merge(int arr[20],int l_arr[20],int r_arr[20],int n,int nl,int nr)
{
	int i,j,k=0;
	while(i<nl && j<nr)
	{
		if(l_arr[i]<r_arr[j])
		{
			arr[k]=l_arr[i];
			i++;
		}
		else
		{
			arr[k]=r_arr[j];
			j++;
		}
		k++;
	}
	while(i<nl)
	{
		arr[k]=l_arr[i];
		i++;
		k++;
	}
	while(j<nl)
	{
		arr[k]=r_arr[j];
		j++;
		k++;
	}
	
	
}
