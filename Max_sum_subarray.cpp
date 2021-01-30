/*Find subarray with maximum sum using kadane's algo*/

#include<iostream>
#include<math.h>
using namespace std;


int main()
{
    int n;
   
    int arr[20];
    cout<<"enter the number of elements in array"<<endl;
    cin>>n;
    cout<<"Enter the array elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
     int max=arr[0] ;
    for(int i=0;i<n;i++)
    {
        int sum=arr[i];
        if(sum>=max)
        {
            max=sum;
        }
        for(int j=i+1;j<n;j++)
        {
            
            sum=sum+arr[j];
            if(sum>max)
            {
                max=sum;
            }
        
        }
    }
    cout<<max;

 
}