#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int arr[]={2,36,7,25,324,8,9};
	int count=0;
	for(int i=0;i<7;i++)
	{
		if((sqrt(arr[i]))-int(sqrt(arr[i]))==0)
		{
			count++;
		}
		
	}
	cout<<count;
}
