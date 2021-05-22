#include<iostream>
#include<climits>
#include<unordered_map>
using namespace std;
class Edge
{
	public:
		int src;
		int dest;
		int wt;
		Edge()
		{}
		Edge(int x,int y,int w)
		{
			src=x;
			dest=y;
			wt=w;
		}
};
template<typename T>
class Graph
{
	int V;
	int E;
	int z=0; 
	Edge* ed=new Edge[E];
	public:
		Graph(int v,int e)
		{
			V=v;
			E=e;
			
		}
		unordered_map<T,unordered_map<T,int>> adj;
		void insertEdge(T x,T y,int wt)
		{
			adj[x][y]=wt;
			
			ed[z]=Edge(x,y,wt);
			
			z++;
			
			
		}
		void edges()
		{
			for(int i=0;i<E;i++)
			{
				cout<<ed[i].src<<endl;
				cout<<ed[i].dest<<endl;
				cout<<ed[i].wt<<endl;
				
			}
		}
		void print()
		{
			
			
			for(auto x:adj)
			{
				cout<<x.first<<":-";
				for(auto y:x.second)
				{
					cout<<y.first<<","<<y.second<<"->";
					
					
				}
				cout<<"\n";
			}
		}
		
		void bellman_ford(int src)
		{
			int distance[V];
			
			for(int i=0;i<V;i++)
			{
				
				distance[i]=INT_MAX;
			}
			distance[src]=0;
			for(int i=0;i<V-1;i++)
			{
				for(int j=0;j<E;j++)
				{
					int u=ed[j].src;
					int v=ed[j].dest;
					int wt=ed[j].wt;
					
					if(distance[u]!=INT_MAX && distance[v]>(distance[u]+wt))
					{
						distance[v]=distance[u]+wt;
					}
				}
			}
			
			for(int j=0;j<E;j++)
			{
					int u=ed[j].src;
					int v=ed[j].dest;
					int wt=ed[j].wt;
					
					if(distance[u]!=INT_MAX && distance[v]>(distance[u]+wt))
					{
						cout<<"Graph contains a negative cycle"<<endl;
						return;
					}
		    }
			
			for(int i=0;i<V;i++)
			{
				cout<<i<<"->"<<distance[i]<<endl;
				
			}	
				
				
			
			
		}
		
		
	
};
int main()
{
	int e,wt;
	int x;
	int u,v;
	cout<<"Enter the number of edges"<<endl;
	cin>>e;
	cout<<"Enter the number of vertices"<<endl;
	cin>>v;
	Graph <int> g(v,e);
	
	cout<<"Enter starting vertex and ending vertex with wt"<<endl;
	
	while(e--)
	{
		cin>>u>>v>>wt;
		
		g.insertEdge(u,v,wt);
		
	}
	//g.edges();
	//g.print();
	g.bellman_ford(0);
	
	
}

/*
Enter the number of edges
8
Enter the number of vertices
5
Enter starting vertex and ending vertex with wt
0 1 -1
0 2 4
1 2 3
1 3 2
1 4 2
4 3 -3
3 2 5
3 1 1

0->0
1->-1
2->2
3->-2
4->1

--------------------------------
Process exited after 94.29 seconds with return value 3221226356
Press any key to continue . . .
*/
