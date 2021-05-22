#include<iostream>
using namespace std;
int main()
{
	int n=4;
	string pass="4700";
	int dig=0;
    int alup=0;
    int allow=0;
    int spec=0;
    for(int i=0;i<pass.length();i++)
    {
        if(isdigit(pass[i]))
        {
            dig++;
            
        }
        else if(isupper(pass[i]))
        {
            alup++;
        }
        else if(islower(pass[i])) 
        {
            allow++;
        }
        else
        {
            spec++;
        }
    }
    
    int need=0,ne=0;
    if(n<6)
    {
        need=6-n;
    }
    
    if(dig==0)
    {
        
       ne++;
    }
    
    if(alup==0)
    {
         ne++;
    }
    
    if(allow==0)
    {
         ne++;
    }
    if(spec==0)
    {
        ne++;
        
    }
    if(ne<need)
        cout<<need;
        
    cout<<ne;
}
