#include<iostream>
using namespace std;
int main()
{
	vector<int> arr={1,2,3,4};
	int n=arr.size();
	int p=10;
	int time=0;
	
	while(p>0)
	{
		time++;
		for(int i=0;i<n;i++)
		{
			
			if(arr[i]==1)
			{
				
			}
			else
			{
				if((time-arr[i])%arr[i]==0)
				{
					p--;
				}
			}
			
		}
	}
}
