#include<iostream>
using namespace std;
int main()
{
	int a1[20][20];
	int a2[20][20];
	int a3[20][20];
	int x1,x2,x3,x4,x5,x6,x7;
	
	cout<<"enter the array elements for the 1st 2D matrix"<<endl;
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			cin>>a1[i][j];
		}
	}
		cout<<"enter the array elements for the 2nd 2D matrix"<<endl;
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			cin>>a2[i][j];
		}
	}
  x1= (a1[0][0] + a1[1][1]) * (a2[0][0] + a2[1][1]);
  x2= (a1[1][0] + a1[1][1]) * a2[0][0];
  x3= a1[0][0] * (a2[0][1] - a2[1][1]);
  x4= a1[1][1] * (a2[1][0] - a2[0][0]);
  x5= (a1[0][0] + a1[0][1]) * a2[1][1];
  x6= (a1[1][0] - a1[0][0]) * (a2[0][0]+a2[0][1]);
  x7= (a1[0][1] - a1[1][1]) * (a2[1][0]+a2[1][1]);
	
  a3[0][0] = x1 + x4- x5 + x7;
  a3[0][1] = x3 + x5;
  a3[1][0] = x2 + x4;
  a3[1][1] = x1 - x2 + x3 + x6;
  for(int i=0;i<2;i++)
  {
  	for(int j=0;j<2;j++)
  	{
  		cout<<a3[i][j]<<"\t";
	  }
	  cout<<"\n";
  }
  
}
