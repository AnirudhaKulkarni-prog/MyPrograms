#include<iostream>
using namespace std;
int main()
{
	int arr1[20][20]={{1,2,3},{1,2,3},{1,2,3}};
	int arr2[20][20]={{1,2,3},{1,2,3},{1,2,3}};
	int arr3[20][20];
	
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			arr3[i][j]=0;
			for(int k=0;k<3;k++)
			{
				arr3[i][j]=arr3[i][j]+arr1[i][k]*arr2[k][j];
			}
		}
	}
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			
			cout<<arr3[i][j]<<" ";
			
		}
		cout<<"\n";
	}
}
