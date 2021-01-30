#include<iostream>
using namespace std;
int main()
{
    int arr[20];
    int n;
    int cnt=0;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
       
        for(int i=0;i<n;i++)
        {
            

            if(arr[i]==0)
            {
                 cout<<-1;
                 break;

            }
             
            if(arr[i]==1)
             { 
                 i=i+1;
                 cnt++;
                 
             }
            else
              {
                  if(arr[i]<=(n-(i+1)))
                  {
                      i=i+arr[i];
                  }
                  else
                  {
                      i=i+(n-(i+1));
                  }
                 cnt++; 
              }
        }
        cout<<cnt;
    return 0;   
}