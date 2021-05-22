#include<iostream>
using namespace std;
class Node
{
	public:
		Node* next;
		int data;
		Node(int x)
		{
			data=x;
			next=NULL;
		}
};
class LinkedList
{
	Node* head;
	public:
		LinkedList()
		{
			head=NULL;
		}
		void create()
		{
			int n,x;
			cout<<"\nEnter the number of values you wish to enter"<<endl;
			cin>>n;
			for(int i=0;i<n;i++)
			{
				
				cout<<"Enter the elements to insert"<<endl;
				cin>>x;
				insert(x);
			}
		}
		void insert(int x)
		{
			
			Node* nn=new Node(x);
			Node* temp=head;
			
			if(head==NULL)
			{
				head=nn;
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
		void display()
		{
			Node* temp=head;
			while(temp!=NULL)
			{
				cout<<temp->data<<" -> ";
				temp=temp->next;
			}
			cout<<"\n";
		}
		void insbeg(int x);
		void ins_pos(int,int);
		void del_pos(int);
		void rev_disp()
		{
			rev_display(head);
		}
		
		void rev_display(Node*);
		void rev_helper()
		{
			rev(head);
		}
		void rev(Node* temp);
		void rev_it_helper()
		{
			rev_it(head);
		}
		void rev_it(Node*);
		void rev_grp_helper(int k)
		{
			head=rev_grp(head,k);
		}
		Node* rev_grp(Node*,int);
	
};
void LinkedList::insbeg(int x)
{
	Node* nn=new Node(x);

	if(head==NULL)
	{
		head=nn;
		
	}
	else
	{
		nn->next=head;
		head=nn;
	}
}
void LinkedList::ins_pos(int pos,int x)
{
	Node* nn=new Node(x);
	Node* temp=head;
	int i=1;
	while(temp->next!=NULL&&i<pos)
	{
		temp=temp->next;
		i++;
	}
	nn->next=temp->next;
	temp->next=nn;
	
}
void LinkedList::del_pos(int x)
{
	Node* temp=head;
	if(x==1)
	{
		head=temp->next;
		delete temp;
		
	}
	else
	{
		int i;
		for(int i=1;i<x-1;i++)
		{
			temp=temp->next;
		}
		Node *deltemp=temp->next;
		temp->next=deltemp->next;
		delete deltemp;
	}
}
void LinkedList::rev_display(Node* temp)
{
	if(temp==NULL)
	{
		return;
	}
	
	rev_display(temp->next);
	cout<<temp->data<<" -> ";
	
}
void LinkedList::rev(Node* temp)
{
	if(temp->next==NULL)
	{
		head=temp;
		return;
		
	}
	rev(temp->next);
	Node* temp1=temp->next;
	temp1->next=temp;
	temp->next=NULL;
}
void LinkedList::rev_it(Node* temp)
{
	Node* curr=temp;
	Node* prev=NULL;
	Node* nxt=NULL;
	
	while(curr!=NULL)
	{
		nxt=curr->next;
		curr->next=prev;
		prev=curr;
		curr=nxt;
	}
	head=prev;
}
Node* LinkedList::rev_grp(Node* temp,int k)
{
	
	if(!temp)
	{
		
		return NULL;
	}
	Node* curr=temp;
	Node* prev=NULL;
	Node* nxt=NULL;
	int i=0;
	while(curr!=NULL&&i<k)
	{
		nxt=curr->next;
		curr->next=prev;
		prev=curr;
		curr=nxt;
		i++;
		
	}
	if(nxt != NULL)
        temp->next = rev_grp(nxt, k);
	
	return prev;
	
}
int main()
{
	LinkedList *l1=new LinkedList();
	/*l1->create();
	l1->display();
	l1->insbeg(4);
	l1->display();
	int x,m;
	cout<<"Enter the position and element to insert the element\n"<<endl;
	cin>>x;
	cin>>m;
	l1->ins_pos(x,m);
	l1->display();
	cout<<"Enter the position of the element to be deleted\n"<<endl;
	cin>>x;
	l1->del_pos(x);
	l1->display();*/
	l1->create();
	l1->display();
	//l1->rev_helper();
	//l1->rev_it_helper();
	int k;
	cout<<"Enter the number of groups in which we need to sort this Linked List"<<endl;
	cin>>k;
	l1->rev_grp_helper(k);
	l1->display();
	
	
	
}
