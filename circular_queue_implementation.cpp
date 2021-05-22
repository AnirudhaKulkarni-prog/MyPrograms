#include<iostream>
using namespace std;
#define N 5
class cqueue
{
	int arr[N];
	int front,rear;
	public:
		cqueue()
		{
			front=-1;
			rear=-1;
		}
		void enqueue(int n);
		void deque();
		void print();
		bool isEmpty();
	
};
void cqueue::enqueue(int n)
{
	if(isEmpty())
	{
		front++;
		rear++;
		arr[rear]=n;
	}
	else if((rear+1)%N==front)
	{
		cout<<"It is full"<<endl;
	}
	else
	{
		rear=(rear+1)%N;
			arr[rear]=n;
	}
	
}
void cqueue::deque()
{
	if(front==rear)
	{
		front=-1;
		rear=-1;
	}
	else
	{
		front=(front+1)%N;
	}
}
bool cqueue::isEmpty()
{
	if(front==-1&&rear==-1)
	{
		return true;
	}
	return false;

}
void cqueue::print()
{
	for(int i=front;i!=rear;i=(i+1)%N)
	{
	
		cout<<arr[i]<<"\t";
	
	}
	cout<<arr[rear];
		cout<<"\n";
}
int main()
{
	cqueue q;
	q.enqueue(1);
	q.enqueue(2);
	q.enqueue(3);
	q.enqueue(4);
	q.enqueue(5);
	q.deque();
	q.enqueue(6);
	q.print();
	q.deque();
	q.print();
	q.deque();
	q.print();
	q.deque();
	q.deque();
	q.print();
	q.deque();
	q.enqueue(10);
	q.print();
	q.enqueue(11);
	q.print();
}
