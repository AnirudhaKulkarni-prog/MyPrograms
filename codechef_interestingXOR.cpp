#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	long t,c;
	cin>>t;
	while(t--)
	{
		cin>>c;
		long x=0;
		do
		{
			if(pow(2,x)>c)
			{
				break;
			}
			x++;
			
		}while(x);
		
		long z=pow(2,x);
		long m=INT_MIN;
		for(long i=1;i<z;i++)
		{
			for(long j=1;j<z;j++)
			{
				if((i^j)==c)
				{
					m=max(m,(i*j));
				}
			}
		}
				
		cout<<m<<endl;
	}
}
