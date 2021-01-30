#include <iostream>
#include<string>
using namespace std;
void chef(int arr[1000],int step_length,int d);

int main() {
	// your code goes here
	long long int  t,step_length,d;
	int arr[1000];
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    cin>>d;
	    cin>>step_length;
	    for(int i=0;i<d;i++)
	    {
	        cin>>arr[i];
	    
	    }
	    chef(arr,step_length,d);
	    
	}
	
	return 0;
}
void chef(int arr[1000],int step_length,int d)
{
	string str;
	
	
	for(int i=0;i<d;i++)
	{
	    if(arr[i]%step_length==0)
	    {
	    	str.push_back('1');
	      
	    }
	    else
	    {
	    	str.push_back('0');
	       
	    }
	   
	}
	cout<<str;

}

