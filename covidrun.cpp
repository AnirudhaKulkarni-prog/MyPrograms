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
	      if(n==0||k==0)
	    {
	        cout<<"NO"<<'\n';
	        continue;
	    }
	    do
	    {
	        flag++;
	        z=(z+k)%n;
	        if(z==y)
	        {
	            cout<<"YES"<<'\n';
	            break;
	        }
	        
	        
	    }while(z!=x);
	    if(flag==n/k)
	    {
	        cout<<"NO"<<'\n';
	    }

	}
	return 0;
}

