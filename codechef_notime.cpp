#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	int h;
	int hl;
	int x;
	

	
     cin>>n;
	 cin>>h;
	 cin>>hl;
	 while(n--)
	 {
	    cin>>x;
	    if(x+hl>=h)
	    {
	       cout<<"YES"<<endl;
	       return 0;
	    }
	 }
	    
	
	cout<<"NO"<<endl;
	return 0;
}

