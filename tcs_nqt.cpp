#include<iostream>
using namespace std;
int main()
{
	float R[];
	int temp;
	int n=0,x=0;
	while(R[i]!='q')
	{
		cin>>R[i];
	
		i++;
	}
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(R[j]>R[j+1])
			{
				temp=R[j];
				R[j]=R[j+1];
				R[j+1]=temp;
			}
		}
	}
	cout<<"Highest Distance Excluding Finishers"<<endl;
	for(int i=n;i>0&&x<=2;i--)
	{
		if(R[i]<0)
		{
			cout<<"Invalid Input"<<endl;
			break;
		}
		if(R[i]!=42.195)
		{
			x++;
			cout<<arr[i]<<"\t";
		}
	}
}
