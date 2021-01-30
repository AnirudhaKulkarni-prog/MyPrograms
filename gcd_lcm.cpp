#include<iostream>
using namespace std;

int gcd(int a,int b)
{
    if(a==0)
        return b;
    if(b==0)
        return a;
    if(a==b)
        return a;

    if(a>b)
        return gcd(a-b,b);
    else
    {
        return gcd(a,b-a);
        /* code */
    }
     

}
int main()
{
    int a=98;
    int b=56;


    cout<<gcd(a,b)<<endl;

    //there is a formula to find LCM from GCD it is LCM=a*b/GCD

    
    
}