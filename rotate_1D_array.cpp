
/*Rotate array using a temp[] array.
Time Complexity:-O(n)
Space Complexity:-O(n)*/
#include<iostream>
using namespace std;
int rotate_array(int arr[20],int n,int d);
int main()
{
	int arr[20]={11,10,3,4,5,6,7};
	int n=7;
	int d=2;
	int i;
	/*int temp[10];
	int i,j,k;
	for(i=0;i<d;i++)
	{
		temp[i]=arr[i];
	}
	j=0;
	i=d;
	while(i<n)
	{
		arr[j]=arr[i];
		j++;
		i++;
	}
	i=n-d;
	j=0;
	while(i<n&&j<d)
	{
		arr[i]=temp[j];
		j++;
		i++;
	}
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<"\t";
	}*/
	for(i=0;i<d;i++)
	{
		rotate_array(arr,n,d);
	}
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<"\t";
	}
}
int rotate_array(int arr[20],int n,int d)
{
	int temp=arr[0];
	int i;
	for(i=0;i<n-1;i++)
	{
		arr[i]=arr[i+1];
	}
	
	arr[i]=temp;
}



