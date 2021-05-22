#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int d,c,m,t,x;
	cin>>t;
	while(t--)
	{
	    int sum1=0,sum2=0,coupon;
	    cin>>d>>c;
	    x=3;
	    while(x--)
	    {
	        cin>>m;
	        sum1=sum1+m;
	        
	    }
	    x=3;
	    while(x--)
	    {
	        cin>>m;
	        sum2=sum2+m;
	        
	    }
	    
	    if(sum1>=150&&sum2>=150)
	    {
	        coupon=sum1+sum2+c;
	        
	    }
	    else if(sum1>=150 || sum2>=150)
	    {
	        coupon=sum1+sum2+c+d;
	    }
	    else
	    {
	        coupon=sum1+sum2+2*d;
	    }
	    
	    if(coupon<(sum1+sum2+2*d))
	    {
	        cout<<"YES"<<endl;
	    }
	    else
	    {
	        cout<<"NO"<<endl;
	    }
	    
	}
	return 0;
}

