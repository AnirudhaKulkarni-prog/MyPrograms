#include<iostream>
using namespace std;
int maxdays(int arr[20],int n);
int main()
{

	int arr[20];
	int n,i;
	cout<<"Enter the size of array"<<endl;
	cin>>n;
	cout<<"Enter array"<<endl;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<maxdays(arr,n);
	return 0;
	
	
}
int maxdays(int arr[20],int n)
{
	int i,d=0,flag=0;
	/*do
	{
		for(i=0;i<n;i++)
		{
			arr[i]--;
			if(arr[i]==0||arr[i]<0)
			{
				flag++;
			}
		}
		if(flag==n)
		{
			return d;
		}
		d++;
	}while(flag!=n);
	return d;*/
	//Just find maximum number
}
/*
Fighting the darkness 
Basic Accuracy: 66.06% Submissions: 4581 Points: 1
Given an array arr[] of size N representing the size of candles which reduce by 1 unit each day. The room is illuminated using the given N candles. Find the maximum number of days the room is without darkness.

 

Example 1:

Input: N = 3, arr[] = {1,1,2} 
Output: 2
Explanation: The candles' length reduce 
by 1 in 1 day. So, at the end of day 1: 
Sizes would be 0 0 1, So, at end of 
day 2: Sizes would be 0 0 0. This means 
the room was illuminated for 2 days.

Example 2:

Input: N = 5, arr[] = {2,3,4,2,1} 
Output: 4

Your Task:
This is a function problem. You don't need to take any input, as it is already accomplished by the driver code. You just need to complete the function maxDays() that takes array A[] and integer N as parameters and returns the desired output.

 

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(1).

 

Constraints:
1 = N = 106
"WAsted lot's of time by doing the above code ........but the point is just find the maximum element of array(that is the number of days)...commom sense...I am a noob"





