#include<iostream>
using namespace std;
int main()
{
		string s="0P";
		
		int n=s.length();
        string str="";
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            if(('a'<=s[i]&&s[i]<='z')||('A'<=s[i]&&s[i]<='Z'))
            {
                str=str+char(tolower(s[i]));
                cnt++;
            }
            
        }
        cout<<str<<endl;
        int i,j,flag=0;
        for(int i=0,j=cnt-1;i<j;i++,j--)
        {
            if(str[i]!=str[j])
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
        {
            cout<<false;
        }
        else
        	cout<<true;
}
