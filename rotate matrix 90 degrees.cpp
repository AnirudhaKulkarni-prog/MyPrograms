#include<iostream>
using namespace std;
int main()
{
	int i,j;
	int m,n;
	int arr[30][30];
	cout<<"Enter the rows and columns"<<endl;
	cin>>m>>n;
	cout<<"Enter the the elements"<<endl;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>arr[i][j];
		}
	}
	
}
