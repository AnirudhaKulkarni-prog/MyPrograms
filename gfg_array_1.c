#include<stdio.h>
void main()
{
	int arr[10]={7,-2,3,4,9,-1};
	int n=6,flag,i,j;
	for(i=0;i<n;i++)
	{
		flag=0;
		for(j=0;j<n;j++)
		{
			if(arr[i]<arr[j])
			{
				flag++;
			}
		}
		if(flag>=2)
		{
			printf("%d\t",arr[i]);
		}
		
	}
		
}
/*
Find all elements in array which have at-least two greater elements
Last Updated: 15-07-2019
Given an array of n distinct elements, the task is to find all elements in array which have at-least two greater elements than themselves.

Examples :

Input : arr[] = {2, 8, 7, 1, 5};
Output : 2  1  5  
The output three elements have two or
more greater elements
      
Input  : arr[] = {7, -2, 3, 4, 9, -1};
Output : -2  3  4 -1  */

