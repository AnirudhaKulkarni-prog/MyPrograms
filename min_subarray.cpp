#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n,i,v;
	    int arr[50];
	    int min=1000000;
	    int sum;
	    cin>>n;
	    cin>>v;
	    for(i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    for(int i=0;i<n;i++)
	    {
	        sum=0;
	        for(int j=i;j<n;j++)
	        {
	            sum=sum+arr[j];
	            if(sum>v)
	            {
	                if((j-i+1)<min)
	                {
	                    min=j-i+1;
	                }
	                
	            }
	        }
	    }
	    cout<<min;
	    
	}
	return 0;
}
