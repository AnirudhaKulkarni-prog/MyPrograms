#include<iostream>
using namespace std;
int main()
{
	int A[2][3]={{1,2,3},{5,6,7}};
	
	cout<<*(*(A+1)+1);
	
}
