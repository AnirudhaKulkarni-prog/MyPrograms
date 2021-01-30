#include<iostream>
using namespace std;
int main()
{
    int n,flag;
    int arr[30];
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {   flag=0;
        for(int j=0;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                flag++;
            }
        }
        
        if(flag==2)
        {
            cout<<arr[i];
            break;
        }
    }
    return 0;
}