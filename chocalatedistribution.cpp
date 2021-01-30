#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m,i;
	    cin>>n;
	    int a1;
	    vector<int> arr;
	    for(i=0;i<n;i++)
	    {
	        cin>>a1;
	        arr.push_back(a1);
	    }
	    cin>>m;
	    sort(arr.begin(),arr.end());
	    int min_diff;
	    int j=m-1;
	    min_diff=arr[j]-arr[0];
	    j++;
	    for(i=1;j<arr.size();i++,j++)
	    {
	        if(arr[j]-arr[i]<min_diff)
	        {
	            min_diff=arr[j]-arr[i];
	            
	        }
	    }
	
	    cout<<min_diff<<endl;
	}
	return 0;
}
