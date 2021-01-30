#include <stdio.h>
int func(int arr[20],int n,int s);
int main() {
    int t;
    int s;
    int i,j,k;
    int arr[30];
    int arr1[10];
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&arr1[j]);
        }
        
        for(k=0;k<arr[0];k++)
        {
            scanf("%d",&arr[k]);
        }
        func(arr,arr1[0],arr1[1]);
        
    }
    return 0;
	//code
	
}
int func(int arr[20],int n,int s)
{
	int first=0,i,j;
	for(i=0;i<n;i++)
	{
		first=arr[i];
		if(first==s)
		{
			printf("%d",i+1);
			return;
		}
		for(j=i+1;j<n;j++)
		{
			first=first+arr[j];
			if(first==s)
			{
				printf("%d\t%d",i+1,j+1);
				return;
			}
			
		}
	}
	if(first!=s)
	{
	    printf(-1);
	}
	
}
