#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	
	string s1;
	string s2;
	cin>>s1;
	char temp;
	
	
	int len=0;
	
	while(s1[len]!='\0')
	{
		len++;
	
	}
	int i=0;
	int j=len/2;
	
	while(j<len&&i<len/2)
	{
		temp=s1[i];
		s1[i]=s1[j];
		s1[j]=temp;
		
		j++;
		i++;
		
		
	}
	cout<<s1;

}
