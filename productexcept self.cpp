#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{

    vector<long long int> arr1;
    long long int nums[100]={1,2,3};
    long long int prod;
    long long int f_prod;
    int k=0,m=0,n=3;
    for(int i=0;i<n;i++)
    {
    	prod=1;
    	f_prod=1;
        for(int j=i+1;j<n;j++)
        {
        	
            prod=prod*nums[j];
        }
        
        for(int k=0;k<i;k++)
        {
        	
           
            f_prod=f_prod*nums[k];
            
        }
        
        /*arr1[m]=f_prod*prod;
        m++;*/
        cout<<f_prod*prod;
    }
    return 0;
}
