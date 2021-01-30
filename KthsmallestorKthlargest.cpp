#include<iostream>
void heapify(int arr[20],int n,int i);
void heapsort(int arr[20],int n);
using namespace std;
int main()
{
	int n,arr[20],i,h,l;
	cout<<"enter array length"<<endl;
	cin>>n;
	cout<<"Enter an array for sorting"<<endl;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"Enter the Kth smallest element\n"<<endl;
	cin>>l;
	cout<<"Enter the Kth largest element\n"<<endl;
	cin>>h;
	heapsort(arr,n);
	cout<<"Kth largest element:-"<<arr[n-h];
	cout<<"Kth smallest element:-"<<arr[l-1];
}
void heapify(int arr[20],int n,int i)
{	int temp;
	int largest=i;
	int l=2*i+1;
	int r=2*i+2;
	if(l<n&&arr[l]>arr[largest])
	{
		largest=l;
	}
	if(r<n&&arr[r]>arr[largest])
	{
		largest=r;
	}
	if(largest!=i)
	{
		temp=arr[i];
		arr[i]=arr[largest];
		arr[largest]=temp;
		
		heapify(arr,n,largest);
		
		
		
	}
}
void heapsort(int arr[20],int n)
{
	int temp;
	for(int i=n/2-1;i>=0;i--)
	{
		heapify(arr,n,i);
		
	}
	for(int i=n-1;i>=0;i--)
	{
		temp=arr[0];
		arr[0]=arr[i];
		arr[i]=temp;
		
		heapify(arr,i,0);
		
	}
	
}
	
	
	
