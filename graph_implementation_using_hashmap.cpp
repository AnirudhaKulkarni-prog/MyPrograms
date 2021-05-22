#include<iostream>
#include<unordered_map>
#include<queue>
using namespace std;




template<typename T>
class Graph
{
	int V;
	int E;

	public:
		Graph(int v,int e)
		{
			V=v;
			E=e;
			
		}
		unordered_map<T,unordered_map<T,int>> adj;
		void insertEdge(T x,T y,int wt,bool bi_dir=true)
		{
			adj[x][y]=wt;
			
			if(bi_dir==true)
			{
				adj[y][x]=wt;
				
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
		
		dfs_helper(int x,bool visited[])
		{
			cout<<x<<"\t";
			visited[x]=true;
			for(auto m:adj[x])
			{
				if(!visited[m.first])
				{
					dfs_helper(m.first,visited);
					
				}
			}
			
			
		}
		
		dfs()
		{
			bool* visited=new bool[V];
			for(int i=0;i<V;i++)
			{
				visited[i]=false;
			}
				cout<<"DFS:- ";
			dfs_helper(0,visited);
		
		}
		bfs_helper(int x,bool visited[])
		{
			queue<int> q;
			visited[x]=true;
			cout<<"BFS:-"<<x<<"\t";
			q.push(x);
			
			while(!q.empty())
			{
				x=q.front();
				q.pop();
				for(auto m:adj[x] )
				{
					if(!visited[m.first])
					{
						cout<<m.first<<"\t";
						q.push(m.first);
						visited[m.first]=true;
						
					}
				}
				
			}
		}
		bfs()
		{
			bool* visited=new bool[V];
			for(int i=0;i<V;i++)
			{
				visited[i]=false;
			}
			bfs_helper(0,visited);
			
		}
		djikstra_helper(int src,bool visited[],int distance[])
		{
			int min_value;
			int min_in;
			
		
			int x=V;
			while(x--)
			{
				
				visited[src]=true;
				min_value=INT_MAX;
				for(auto m:adj[src])
				{
					
					if(!visited[m.first])
					{
						
						if((m.second+distance[src])<distance[m.first])
						{
							distance[m.first]=m.second+distance[src];
						}
						if(min_value>m.second)
						{
							min_in=m.first;		
							min_value=m.second;
						}
						
					}
				}
				src=min_in;
				
			}
			for(int i=0;i<V;i++)
			{
				cout<<distance[i]<<"\n";
			}
			
			
		}
		djikstra(int src)
		{
			bool* visited=new bool[V];
			for(int i=0;i<V;i++)
			{
				visited[i]=false;
			}
			int* distance=new int[V];
			for(int i=0;i<V;i++)
			{
				if(i==src)
				{
					distance[i]=0;
				}
				else
					distance[i]=INT_MAX;
			}
			djikstra_helper(src,visited,distance);
			
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
		g.insertEdge(u,v,wt,false);
	}
	//g.dfs();
	//g.bfs();
	g.print();
	//g.djikstra(0);
	
}
