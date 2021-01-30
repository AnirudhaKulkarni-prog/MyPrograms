//Kadane's algo to find max sum subarray with low complexity than brute force(n2) while kadane 0(n)
//For all the indices find the subarray with max sum ending at that index.
//So the max sum of subarray for a particular index x could be either arr[x] itself or arr[x]+(maximum sum subarray ending at x-1 index )
#include<iostream>
using namespace std;
int main()
{
    int arr[20];
    int n;
    cout<<"Enter number of elements "<<endl;
    cin>>n;
    cout<<"Enter array elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int max_local=arr[0];
    int max_global=arr[0];
    for(int i=1;i<n;i++)
    {
        max_local=max(max_local+arr[i],arr[i]);
        if(max_local>max_global)
        {
            max_global=max_local;
        }
    }
    cout<<max_global;

}