#include<iostream>
#include<set>

using namespace std;
int main()
{
	set <int> s;//Everything is sorted bro......Being cool,but set sorts everything without asking it
	s.insert(1);
	s.insert(2);
	s.insert(3);
	s.insert(4);
	s.insert(0);
	for(int x:s)
	{
		cout<<x<<endl;
	}
	auto it=s.find(3);
	if(it==s.end())
	{
		cout<<"Not Found";
	}
	else
	{
		cout<<"Found  "<<*it<<endl;
	}
	
	auto it1=s.lower_bound(-1);//Gives the first element greater than or equal to -1(if their is none it returns the iterator to the last element
	cout<<*it1<<endl;
	auto it2=s.upper_bound(2);//Gives the first element strictly greater than -1(if their is none it returns the iterator to the last element
	cout<<*it2<<endl;
	
	
}
