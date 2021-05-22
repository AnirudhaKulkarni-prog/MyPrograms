#include<iostream>
using namespace std;
int main()
{
		
		vector<int> arr;
        vector <bool> arr1(nums2.size());
        for(int i=0;i<nums1.size();i++)
        {
            for(int j=0;j<nums2.size();j++)
            {
                if(nums1[i]==nums2[j]&&arr1[j]==false)
                {
                    
                    arr1[j]=true;       
                    arr.push_back(nums1[i]);
                    break;
                    
                    
                }
            }
        }
       return arr;
}
