#include<iostream>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int k;
	cin>>k;
	string charValue="01111001111111111011111111";
	int m=INT_MIN;
	int n=s.length();
	 for(int i = 0; i <n; i++)
	 {
	 	for (int len = 1; len <= n - i; len++)
            {
            	int c=0;
            	for(auto x:s.substr(i,len))
            	{
            		if(charValue[int(x)-97]==0)
            		{
            			c++;
					}
				}
				if(c<=k)
				{
					m=max(m,len);	
				}
			}
	 }
        
	cout<<m;
}
