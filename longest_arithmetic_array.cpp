#include<iostream>
#include <climits>

using namespace std;
int main()
{
    int t;
    cin>>t;
    int k=1;
    
    while(k<=t)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
       int res=2;
       int j=2;
       int pd=arr[1]-arr[0];
       int max=2;
       
       while(j<n)
       {
           if(arr[j]-arr[j-1]==pd)
           {
               
               res++;
           }
           else
           {
               pd=arr[j]-arr[j-1];
               
               res=2;
               
           }
           if(res>max)
        	{
           	 	max=res;
			}
        
           
           j++;
       }
        
        
       
        
        
        
        cout<<"Case #"<<k<<" "<<max<<"\n";
        k++;
    }
}
