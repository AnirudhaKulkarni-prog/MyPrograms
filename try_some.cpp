#include<iostream>
using namespace std;
int main()
{
	int d=1;
	int a[]={1,2,3,4,5};
	int b[10];
	int n=5;
    b[0]=a[d];
    int j=1;
    for(int i=(d+1)%n;i!=d;i=(i+1)%n)
    {
        b[j]=a[i];
        j++;
    }
    for(int i=0;i<n;i++)
    {
    	cout<<b[i];
	}
}
