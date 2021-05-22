#include<iostream>
#include <bits/stdc++.h>
using namespace std;


int main()
{
	int arr[30];
	int n;
	cout<<"Enter the array size"<<endl;
	cin>>n;
	cout<<"Enter the elements"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	sort(arr,arr+n);
	cout << "Optimal order in which programs are to be"
            "stored is: "; 
    for(int i = 0; i < n; i++)
	{
		cout << arr[i] << " "; 
	} 
    cout << endl; 
  
    
    float MRT = 0; 
    for(int i = 0; i < n; i++) 
	{ 
        int sum = 0; 
        for(int j = 0; j <= i; j++)
		{
			sum+=arr[j];
		 } 
        
        MRT += sum; 
    } 
    MRT=MRT/n; 
    cout << "Minimum Retrieval Time of this"
           " order is " << MRT; 

	
}
