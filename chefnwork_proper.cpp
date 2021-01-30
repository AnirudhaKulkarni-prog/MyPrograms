#include <iostream>

using namespace std;


int main() {
	// your code goes 
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;#include <iostream>
using namespace std;

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
	    	
	    int n,k,x,y;
	    cin>>n>>k>>x>>y;
	    int z=x;
	    int flag=0;
	    if(x==y)
	    {
	        flag=1;
	    }
	    x=(x+k)%n;
	     while (x!=z){
            if (x==y){
            flag=1;
            break;
            }
            x=(x+k)%n;
        }
        if(flag==1)
        cout<<"YES\n";
        else
        cout<<"NO\n";
	
	  
	    
	
}
return 0;
}
	while(t--)
	{
        int step_length,d;
       
	    cin>>d>>step_length;
	     string str="";
	   
	    int arr[d];
	    for(int i=0;i<d;i++)
	    {
	        cin>>arr[i];
	        if(arr[i]%step_length==0)
	        {
	            str+="1";
	        
	        }
	        else
	        {
	            str+="0";
	        }
	        
	    
	    }
	    cout<<str<<'\n';
	}

	return 0;
}

