#include<iostream>
using namespace std;
int main()
{
	int alpha1=2;
	int alpha2=6;
	int n=9;
	int arr[]={1,2,3,4,5,6,7,8,9};
	for(int i=0;i<n;i++)
	{
		if(arr[i]>=alpha1 && arr[i]<alpha2)
		{
			cout<<i<<"\t";
		}
	}
}
