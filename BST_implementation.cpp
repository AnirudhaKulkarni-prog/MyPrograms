#include<iostream>
using namespace std;

class Node
{
		
		Node* left;
		Node* right;
		int data;

		Node(int x)
		{
			left=NULL;
			data=x;
			right=NULL;
		}
		friend class BST;
};
class BST
{
	Node* root;
	public:
		BST()
		{
			root=NULL;
		}
		void create();
		void insert_BST(int x);
		void preorder(Node* temp);
		void inorder(Node* temp);
		void pre_helper()
		{
			preorder(root);
		}
		void in_helper()
		{
			inorder(root);
		}
		int ht_helper()
		{
			return ht(root);
		}
		int ht(Node* temp);
		
};
int BST::ht(Node* temp)
{
	
		if(temp == NULL)
			return -1;
	
		int lDepth = ht(temp->left);
        int rDepth = ht(temp->right);
 		cout<<lDepth<<" "<<rDepth<<endl;
        
        if (lDepth > rDepth)
            return (lDepth + 1);
        else
            return (rDepth + 1);
	
}
void BST::insert_BST(int x)
{
	Node *nn=new Node(x);
	if(root==NULL)
	{
		
		root=nn;
		return;
	}
	Node *current=root;
	Node *parent=root;
	
	while(current!=NULL)
	{
		parent=current;
		if(nn->data < current->data)
			current=current->left;
		else
			current=current->right;
	}
	
	
	if(nn->data < parent->data)
	{
		parent->left=nn;
	}
	else
	{
		parent->right=nn;
		
	}
}
void BST::preorder(Node *temp)
{
	if(temp!=NULL)
	{
		cout<<temp->data<<" ";
		preorder(temp->left);
		preorder(temp->right);
	}
	
	
}
void BST::inorder(Node *temp)
{
	if(temp!=NULL)
	{
	
		inorder(temp->left);
		cout<<temp->data<<" ";
		inorder(temp->right);
	}
	
	
}
void BST::create()
{
	int n;
	cout<<"\nEnter number of elements\n"<<endl;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int x;
		cout<<"\nEnter the value\n";
		cin>>x;
		insert_BST(x);
	}
	
	
	
}
int main()
{
	BST *t=new BST();
	t->create();
	t->in_helper();
	
	int x=t->ht_helper();
	cout<<"\n"<<x;
	
}
