#include<iostream>
using namespace std;

double rnd(double x)
{
    double val=long(x*100+0.5);
    return double(val/100);
}

int main() 
{
	// your code goes here
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	long t;
	double a,b,c,v;
	cin>>t;
	while(t--)
	{
	    cin>>a;
	    cin>>b;
	    cin>>c;
	    cin>>v;
	    double x=a*b*c*v;
	    cout<<x;
	    double y=rnd(100/x);
	    cout<<y;
	    if(y<9.58)
	        cout<<"YES";
	    else
	        cout<<"NO";
	}        
	return 0;
}

