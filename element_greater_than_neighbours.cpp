//is called a peak element problem.Can be also solved by using sinmple if...else with base condition
#include<iostream>
using namespace std;
int main()
{
    int arr[20];
    int n;
    cout<<"Enter the number of elemants"<<endl;
    cin>>n;
    cout<<"Enetr the elements in array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];

    }
    int l=0;
    int h=n-1;
    int mid=0;
    while(l<=h)
    {
        mid=(l+h)/2;
        if(arr[mid]>arr[mid-1]&&arr[mid]>arr[mid+1])
        {
            cout<<arr[mid];
            break;
        }
        else if(arr[mid]>arr[mid-1])
        {
            l=mid+1;
            /* code */
        }
        else
        {
            h=mid-1;
        }
        
        

    }
}