/*LEETCode...Aditya Verma trick
Given an array of integers nums sorted in ascending order, find the starting and ending position of a given target value.

If target is not found in the array, return [-1, -1].

Follow up: Could you write an algorithm with O(log n) runtime complexity?*/

class Solution {
public:
    vector<int> searchRange(vector<int>& arr, int target) 
    {
        
        int n=arr.size();
        int start=0;
        int end=n-1;
        int resf=-1;
        int resl=-1;
        while(start<=end)
        {
            int mid=start+(end-start)/2;
            if(arr[mid]==target)
            {
                resf=mid;
                end=mid-1;
            }
            else if(arr[mid]>target)
                end=mid-1;
            else
                start=mid+1;
                
        }
        
        
        start=0;
        end=n-1;
        while(start<=end)
        {
            int mid=start+(end-start)/2;
            if(arr[mid]==target)
            {   
                resl=mid;
                start=mid+1;
            }
            else if(arr[mid]>target)
                end=mid-1;
            else
                start=mid+1;
                
        }
        
        
        return {resf,resl};
        
        
        
    }
};
