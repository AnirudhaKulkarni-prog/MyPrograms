#include <iostream>
using namespace std;
void spiral(int arr[30][30],int m,int n);
int main() {
	int t;
	cin>>t;
	int m,n;
	int arr[30][30];
	
	for(int i=0;i<t;i++)
	{
	    cin>>m;
	    cin>>n;
	 
	    for(int i=0;i<m;i++)
	    {
	        for(int j=0;j<n;j++)
	        {
	            cin>>arr[i][j];
	        }
	    }
	    spiral(arr,m,n);
	    
	}
	return 0;
}
void spiral(int arr[30][30],int m,int n)
{
    int row=0;
    int col=0;
    while(row<m&&col<n)
    {
        for(int i=col;i<n;i++)
        {
            cout<<arr[row][i];
            cout<<"\t";
        
        }
        cout<<"\t";
        row=row+1;
        for(int i=row;i<m;i++)
        {
            cout<<arr[i][n-1];
            cout<<"\t";
        
        }
        cout<<"\t";
        n--;
        
        if(row<m)
        {
        
        for(int i=n-1;i>=col;i--)
        {
            cout<<arr[m-1][i];
            cout<<"\t";
        
        }
        m--;
        }
        cout<<"\t";
        if(col<n)
        {
        for(int i=m-1;i>=row;i--)
        {
            cout<<arr[i][col];
            cout<<"\t";
        
        }
        col++;
        }
        cout<<"\t";
      
    }

    
    
}

