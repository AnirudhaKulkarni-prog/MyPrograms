#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;

int vectorDemo()
{
	vector<int> A={18,16,14,15,19};

	cout<<A[1]<<endl;
	sort(A.begin(),A.end());//for sorting Complexity:-0(nlogn)
	cout<<A[0]<<endl;
	bool present=binary_search(A.begin(),A.end(),19);//value present is 1

	A.push_back(100);
	A.push_back(100);
	A.push_back(101);
	A.push_back(102);

	//Find the element which is greater or strictly greater than a particular element in a sorted vector

	vector<int>::iterator it=lower_bound(A.begin(),A.end(),100);//gives element >= 100
	cout<<*it<<endl;
	vector<int>::iterator it1=upper_bound(A.begin(),A.end(),100);//gives element strictly greater than 100
	cout<<*it1<<endl;
	cout<<it1-it<<endl;//we have two hundreds(We can count how many numbers are present

	//printing an vector
	
	
	
	
	vector<int>::iterator it2;

	for(it2=A.begin();it2!=A.end();it2++)
	{
		cout<<*it2<<"\t";
	}
	return 0;

}
int setDemo()
{
	//we want to find lower bound and upper bound without always sorting so now we will use set
	//set automatically sorts inserted elements

	set<int> s;
	s.insert(2);
	s.insert(7);
	s.insert(5);
	s.insert(-6);
	s.insert(9);
	s.insert(200);

	for(int x:s)
	{
		cout<<x<<endl;
	}
	//Fact:auto keyword is like var in Dart we need not mention the data type the compiler will deduce itself
	auto it =s.find(5);
	auto it1=s.end();
	if(it==s.end())
	{
		cout<<"Not present"<<endl;
	}
	else
	{
		cout<<"present"<<endl;
	}
	cout<<*it1<<endl;
	return 0;

	auto i1=s.upper_bound(-6);
	cout<<*i<<endl;
	 
}
int main()
{
	setDemo();
	return 0;
}
