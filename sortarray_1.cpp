/*sorting array containing  0,1,2 without using sorting algo
Simple solution is counting number of 0,1,2 and placing them in array*/
#include<iostream>
using namespace std;
int main()
{
	int arr[100];
	int n,i,count0,count1,count2;
	cout<<"enter number of array elements"<<endl;
	cin>>n;
	
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(i=0;i<n;i++)
	{
		if(arr[i]==0)
            count0++;
        if (arr[i] == 1)
            count1++;
        if (arr[i] == 2)
            count2++;
		
	}
	    
    for (int i = 0; i < count0; i++) 
        arr[i] = 0;
     

    for (int i = count0; i < (count0 + count1); i++) 
        arr[i] = 1;
     
    // Putting the 2's in the array after the 1's
    for (int i = (count0 + count1); i < n; i++) 
        arr[i] = 2;
    for(int i=0;i<n;i++)
	{
		cout<<arr[i];
	}
	
	
} 
