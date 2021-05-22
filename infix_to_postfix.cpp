#include<iostream>
#include<stack>
#include<string>
using namespace std;
int prec(char x)
{
	if(x=='^')
		return 3;
	else if(x=='/'||x=='*')
		return 2;
	else if(x=='+'||x=='-')
	    return 1;
	else
	    return 0;
}
int main()
{
	stack <int> s1;
	string s="a+b*(c^d-e)^(f+g*h)-i";
	string res="";
	char x;
	
	for(int i=0;i<s.length();i++)
	{
		if(s[i]>='a'&&s[i]<='z')
		{
			res+=s[i];
		}
		else if(s[i]=='(')
		{
			s1.push('(');
			
		}
		else if(s[i]==')')
		{
			while(!s1.empty()&&s1.top()!='(')
			{
				x=s1.top();
				s1.pop();
				res+=x;		
			}
			if(s1.top()=='(')
			{
				s1.pop();
			}
		}
		else
		{
			while(!s1.empty()&&prec(s1.top())>=prec(s[i]))
			{
				x=s1.top();
				s1.pop();
				res+=x;		
			}
			s1.push(s[i]);
			
		}
	}
	while(!s1.empty())
	{
		x=s1.top();
		s1.pop();
		res+=x;
		
	}
	cout<<res;
	
}
