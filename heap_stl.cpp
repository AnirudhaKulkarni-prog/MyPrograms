#include<iostream>
#include<queue>
using namespace std;
int main()
{
	priority_queue<int> max_heap;//for Kth smallest element
	
	 priority_queue<int, vector<int>,  
                       greater<int> > min_heap;//for Kth largest element
                       
    int arr[]={89,43,78,79,30,20,100};
	int k=3;
	
	for(int i=0;i<7;i++)
	{
		max_heap.push(arr[i]);
		
		if(max_heap.size()>k)
		{
			max_heap.pop();
		}
		
	}	
	
	cout<<max_heap.top();
	
}
