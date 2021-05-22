//probem:-Discuss how stacks can be used for checking balancing of symbols.

#include<iostream>
#include<stack>
#include<string>
using namespace std;
int main()
{
  stack <int> s1;
  string s="((a+b)+[c-d]}";
  char x,i=0;
  while(i<s.length())//better to write a for loop but i am too lazy
  {
  	if(s[i]=='{'||s[i]=='('||s[i]=='[')
  	{
  			s1.push(s[i]);
	}
	else if(s[i]=='}'||s[i]==')'||s[i]==']')
  	{
  			x=s1.top();
  			if(x=='('&& s[i]==')')
  			{
  				s1.pop();	
			}
			else if(x=='{'&& s[i]=='}')
  			{
  				s1.pop();	
			}
			else if(x=='['&& s[i]==']')
  			{
  				s1.pop();	
			}
			else
			{
				s1.push(s[i]);
			}
	}
	else
	{
		i++;
		continue;
	}
  	i++;
  	
  	
  }
  if(s1.empty())
  {
  	cout<<"Yess";
  }
  else
  {
  	cout<<"Noo";
  }
}
