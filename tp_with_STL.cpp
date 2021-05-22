#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n=6;
	int a[n]={2,3,4,5,6,6};
	
	int x=upper_bound(a,a+n,10)-a;
	int z=lower_bound(a,a+n,4)-a;
	cout<<x<<" "<<z;
}
