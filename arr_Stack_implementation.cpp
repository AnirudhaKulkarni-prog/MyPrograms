#include<iostream>
using namespace std;
#define MAX 4
class Stack
{
	int arr[MAX];
	int top;
	
	public:
		Stack()
	{
		top=-1;
	}
		bool isEmpty();
		bool push(int x);
		int pop();
		int peek();
		void print();
		
		
};
bool Stack::isEmpty()
{
	if(top<0)
		return true;
	else
		return false;
}
bool Stack::push(int x)
{
	if(top>=MAX-1)
	{
		cout<<"Stack Overflow"<<endl;
		return false; 
	}
	else
	{
		top++;
		arr[top]=x;
		return true;
	}
	
}
int Stack::pop()
{
	if(isEmpty())
	{
		cout<<"Stack UnderFlow"<<endl;
		return 0;
	}
	else
	{
		
		top--;
		return arr[top+1];
	}
}
int Stack::peek()
{
	if(isEmpty())
	{
		cout<<"Stack is Empty "<<endl;
	}
	else
	{
		return arr[top];
	}
	
}
void Stack::print()
{
	
	int i;
	for(i=0;i<=top;i++)
	{
		cout<<arr[i]<<"\t";
	}
	cout<<"\n";
}
int main()
{
	int i;
	Stack s;
	s.push(3);
	s.print();
	s.push(4);
	s.print();
	s.push(5);
	s.print();
	s.push(6);
	s.print();
	s.pop();
	s.print();
	
	
}
