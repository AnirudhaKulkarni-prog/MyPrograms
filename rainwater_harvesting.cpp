#include<iostream>
#include<stdlib.h>
using namespace std;
int r_max(int arr[],int i,int n);
int min1(int i,int j);
int l_max(int arr[],int i,int n);
int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n,total_water=0,i,k=0;
	    cin>>n;
	    int arr[100];
	    int arr1[100];
	    int arr2[100];
	    for(i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    for(i=0;i<n;i++)
	    {
	        arr1[k]=l_max(arr,i,n);
	        arr2[k]=r_max(arr,i,n);
	        total_water=total_water+abs(min1(arr1[k],arr2[k])-arr[i]);
	        k++;
	    }
	    cout<<total_water;
	}
	
	return 0;
}
int l_max(int arr[],int i,int n)
{
    int max=arr[0],j;
    for(j=1;j<=i;j++)
    {
        if(arr[j]>max)
        {
            max=arr[j];
        }
    }
    return max;
}
int r_max(int arr[],int i,int n)
{
    int max=arr[i];
    int j;
    for(j=i+1;j<n;j++)
    {
        if(arr[j]>max)
        {
            max=arr[j];
        }
    }
    return max;
}
int min1(int i,int j)
{
    if(i>j)
    {
        return j;
    }
    else
        return i;
}

