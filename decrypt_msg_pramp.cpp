//link:-https://janac.medium.com/pramp-question-decrypt-message-e5c9a649615c






#include<iostream>

#include<string>
using namespace std;
int main()
{
	string s="flgxswdliefy";
	int sum=0,x;
	int prev_x=0;
	int m=int(s[0]);
	s[0]=char(m-1);
	for(int i=1;i<s.length();i++)
	{
		
		x=int(s[i]);
		cout<<x<<endl;
	
		
		while(1)
		{
			x=x+26;
		if(i==1)
		{
			
			sum=x-m;
		}	
		else
		{
				
			sum=x-prev_x;
			
		}	
			
		
			cout<<sum<<endl;
			if(sum>=97&&sum<=122)
			{
				break;
			}
			
		}
		s[i]=char(sum);
		prev_x=x;
	}
	cout<<s;

	
	
}
