#include <iostream>
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
