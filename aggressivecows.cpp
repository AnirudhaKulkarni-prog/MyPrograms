#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool isValid(long arr[],long n,long m,long x)
{
	
	long cows_placed = 1, last_pos =arr[0];
	  for (int i = 1; i < n; i++)
	  {
	    if ((arr[i] - last_pos) >= x)
	    {
	      if (++cows_placed == m)
	        return true;
	      last_pos = arr[i];
	    }
	  }
  return false;
	
}
int main()
{
	long t;
	cin>>t;
	
	long n,m;
	
	while(t--)
	{
		
		cin>>n;
			
		long arr[n];
		cin>>m;
		
		for(int i=0;i<n;i++)
		{
			
			cin>>arr[i];
		}
		
		
		long start=0;
		
		sort(arr,arr+n);
		long end=arr[n-1]-arr[0];
		
		
		     long res=-1;
	        while(start<=end)
	        {
	            long mid=start+(end-start)/2;
	            if(isValid(arr,n,m,mid))
	            {
	                res=mid;
	                start=mid+1;
	            }
	            else
	            {
	                
	                end=mid-1;
	            }
	        }
	        return res;
		
		
	}
	
	
}
