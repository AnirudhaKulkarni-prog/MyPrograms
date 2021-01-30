#include<iostream>
using namespace std;
struct minandmax
{
	int min;
	int max;
};
struct minandmax min_max(int arr[],int n)
{
	struct minandmax m2;
	int i;
	if(n==1)
	{
		m2.min=arr[0];
		m2.max=arr[0];
		return m2;
	}
	if(arr[0]<arr[1])
	{
		m2.min=arr[0];
		m2.max=arr[1];
		
	}
	else
	{
		m2.min=arr[1];
		m2.max=arr[0];
	}
	for(i=2;i<n;i++)
	{
		if(arr[i]>m2.max)
		{
			m2.max=arr[i];
		}
		if(arr[i]<m2.min)
		{
			m2.min=arr[i];
		}
	}
	return m2;
}
int main()
{
	
	
	int arr[] = { 1000, 11, 445, 
                  1, 330, 3000 };
    int n = 6;
	struct minandmax m1=min_max(arr,n);
	cout<<m1.max;
	cout<<"\n";
	cout<<m1.min;
}
