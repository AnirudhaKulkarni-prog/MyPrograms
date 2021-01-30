//very inefficient code....insertion or deletion from begginning should be done
#include<iostream>
using namespace std;
class Node
{
	public:
		int data;
		Node *next;
		Node(int x)
		{
			data=x;
			next=NULL;
			
		}
};
class Stack
{
	Node *root;
	public:
	Stack()
	{
		root=NULL;
	}
		bool isEmpty();
		void push(int x);
		void pop();
		void peek();
		void print();
};
bool Stack::isEmpty()
{
	if(root==NULL)
	{
		return true;
		
	}
	return false;
}
void Stack::push(int x)
{

	Node *temp=root;
	Node *nn=new Node(x);
	if(isEmpty())
	{
		
		root=nn;
	}
	else
	{
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=nn;
		
	}
	
		
}
void Stack::pop()
{

	if(isEmpty())
	{
			cout<<"Stack Empty"<<endl;
	}
	else
	{
			Node *temp=root;
			Node *temp1=root;
			if(temp->next!=NULL)
			{
				while(temp->next!=NULL)
				{
					temp=temp->next;
				}	
				while(temp1->next!=temp)
				{
				temp1=temp1->next;
				}
				temp1->next=NULL;
				delete temp;
			}
			else
			{
				root=NULL;
				delete temp;
			}
	}
	
	
}
void Stack::peek()
{
	Node *temp=root;
	if(isEmpty())
	{
		cout<<"Stack Empty"<<endl;
	}
	else
	{
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		cout<<temp->data<<endl;
	}
}
void Stack::print()
{
	
		
	Node *temp=root;

	if(isEmpty())
	{
		cout<<"Stack Empty"<<endl;
		
	}
	else
	{
		
		while(temp!=NULL)
		{
			
			cout<<temp->data<<" ";
			
			temp=temp->next;
		}
		cout<<"\n";
	
	}
	
}
int main()
{
	Stack s;
	s.push(3);
	s.push(4);
	s.push(5);
	s.print();
	s.pop();
	s.print();
	s.pop();
	s.print();
	s.pop();
	
}

