//Book allocation problem.....courtesy:-Aditya Verma 
/*You are given N number of books. Every ith book has Ai number of pages. 
You have to allocate books to M number of students. There can be many ways or permutations to do so. In each permutation, one of the M students will be allocated the maximum number of pages. Out of all these permutations, the task is to find that particular permutation in which the maximum number of pages allocated to a student is minimum of those in all the other permutations and print this minimum value. 

Each book will be allocated to exactly one student. Each student has to be allocated at least one book.

Note: Return -1 if a valid assignment is not possible, and allotment should be in contiguous order (see the explanation for better understanding).


Example 1:

Input:
N = 4
A[] = {12,34,67,90}
M = 2
Output:
113
Explanation: 
Allocation can be done in following ways:
{12} and {34, 67, 90} Maximum Pages = 191
{12, 34} and {67, 90} Maximum Pages = 157
{12, 34, 67} and {90}  Maximum Pages =113
Therefore, the minimum of these cases is 
113, which is selected as the output.
*/
#include<iostream>
using namespace std;
bool isValid(int arr[],int n,int m,int x)
{
        int sum=0;
        int cnt=1;
        for(int i=0;i<n;i++)
        {
            sum=sum+arr[i];
            if(sum>x)
            {
                cnt++;
                sum=arr[i];
            }
            if(cnt>m)
            {
                return false;
            }
        }
        return true;
}
int main()
{
	int n=4;
	int arr[n]={12,34,67,90};
	int m=2;
	
	int start=INT_MIN;
        int end=0;
        if(m>n)
            return -1;
        
        for(int i=0;i<n;i++)
        {
            
            end=end+arr[i];
            if(arr[i]>start)
            {
                start=arr[i];
            }
            
        }
        
        int res=-1;
        while(start<=end)
        {
            int mid=start+(end-start)/2;
            if(isValid(arr,n,m,mid))
            {
                res=mid;
                end=mid-1;
            }
            else
            {
                start=mid+1;
            }
        }
        cout<<res;
	
}

