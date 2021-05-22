#include<iostream>
#define n 4
using namespace std;
bool isRight(int arr[n][n],int r,int c)
{
	int i,j;
	for(i=0;i<c;i++)
	{
		if(arr[r][i])
			return false;
	}
	
	for(i=r,j=c;i>=0&&j>=0;i--,j--)
	{
		if(arr[i][j])
			return false;
	}
	
	for(i=r,j=c;j>=0&&i<n;i++,j--)
	{
		if(arr[i][j])
			return false;		
	}
	
	return true;
	
}

bool solve(int arr[n][n],int c)
{
	if(c>=n)
		return true;
		
	for(int i=0;i<n;i++)
	{
		if(isRight(arr,i,c))
		{
			arr[i][c]=1;
			
			if(solve(arr,c+1))
				return true;
			
			
			arr[i][c]=0;
		}
	}
	
	
}
int main()
{
	
	int arr[n][n];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			arr[i][j]=0;
		}
	}
	
	if(solve(arr,0)==false)
		cout<<"No Possible Solutions"<<endl;
		return 0;
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
		
			cout<<arr[i][j]<<"\t";
		}
				cout<<"\n";
	}
		
}
