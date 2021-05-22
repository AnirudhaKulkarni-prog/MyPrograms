/*Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.

Follow up: Could you implement a solution with a linear runtime complexity and without using extra memory?Yes,bit manipulation*/
#include<iostream>

using namespace std;
int main()
{
	int arr[]={4,1,2,1,2};
	int n=5;
	int result = 0;
    for(int i=0; i <n; i++)
	{
        result ^= arr[i];//This works as addition XOR of same element is 0....so only the element occuring odd number of times is left
        
    }
    cout<<result;
	
}
