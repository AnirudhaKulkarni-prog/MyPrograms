#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	string s="iuo";
	string t="";
    for(int i=0;i<s.length();i++)
    {
        if(s[i]!=' ')
        {
            t=t+s[i];
        }
    }
    int l=t.length();
    int n1=floor(sqrt(l));
    int n2=ceil(sqrt(l));
    int flag=0;
    
    if(n1*n2<l)
    {
     /*while(n1++)
    {
        while(n2++)
        {
            if(n1*n2>=l)
            {
                flag=1;
                break;
            }
        }
        
    }*/
        int i,j;
        for(i=n1;;i++)
        {
            for(j=n2;;j++)
            {
                if(i*j>=l)
                {
                    flag=1;
                    break;
                }
                
                
            }
            if(flag==1)
            {
                break;
            }
        }
        n1=i;
        n2=j;
    }
    cout<<n1<<n2;
    char arr[n1][n2];
    int k=0;
    for(int i=0;i<n1&&k<l;i++)
    {
        for(int j=0;j<n2&&k<l;j++)
        {
            arr[i][j]=t[k];
            k++;
        }
    }
    
    t="";
    k=0;
    for(int i=0;i<n2;i++)
    {
        for(int j=0;j<n1;j++)
        {
            if(arr[j][i]<='z'&&arr[j][i]>='a')
                t=t+arr[j][i];  
                k++;    
        }
        t=t+" ";
    }
    
    cout<<t;
    
}
