#include<iostream>
#include<queue>
#include<stack>
using namespace std;

class matrix
{
	public:
		int i,n,t,x,y,j;
		int a[100][100];
		void adj_mat()
		{
			cout<<"enter size"<<endl;
			cin>>n;
			for(i=0;i<n;i++)
			{
				for(j=0;j<n;j++)
				a[i][j]=0;	
			}
			int s=n*(n-1);
			int adj[s];
			for(i=0;i<n*(n-1);i++)
			{
				cin>>x>>y;	
				if(x==-1 && y==-1)
				{
					cout<<"wrong"<<endl;
					break;
				}
				if(x>=n || y>=n)
				{
					cout<<"invalid"<<endl;
				}
				else
				{
					a[x][y]=1;
				}
			}	
		}
		void display()
		{
			for(i=0;i<n;i++)
			{
				for(j=0;j<n;j++)
				cout<<a[i][j]<<" ";
				cout<<endl;
			}
		}
		void bfs(int src)
		{
			int * visit;
			visit = new int[n]();
//			cout<<endl;
			queue<int>q;
			q.push(src);
			visit[src]=1;
			while(!q.empty())
			{	
				int k=q.front();
				cout<<k<<" ";
				q.pop();
				for(j=0;j<n;j++)
				{
					if(visit[j]==0 && a[k][j]==1)
					{
						q.push(j);
						visit[j]=1;
					}
				}
			}
		}
	void dfs(int src)
	{
		int * visit;
		visit = new int[n]();
		cout<<endl;	
		stack<int>q;
		q.push(src);
		visit[src]=1;
		while(!q.empty())
		{
			int k=q.top();
			cout<<k<<" ";
			q.pop();
			for(j=0;j<n;j++)
			{
				if(visit[j]==0 && a[k][j]==1)
				{
					q.push(j);
					visit[j]=1;
				}
			}
		}
	}
	void in_outdegree(int k)
	{
 		int i,j,count=0,t=0;
 		for(i=0;i<n;i++)
	 	{
 			if(a[k][i]==1)
 			count++;
			if(a[i][k]==1)
		 	t++;
	 	}
	 	cout<<"outdegree: "<<count<<"  "<<"indegree: "<<t<<endl;	
	}
	void del_node(int k)
	{
	 	int i,j;
	 	for(i=k;i<n-1;i++)
		{
		 	for(j=0;j<n;j++)
		  	{
				a[j][i]=a[j][i+1];
			    if(i!=j)
				a[i][j]=a[i+1][j];	
		  	}
		}
		n--;	
	}
	void add_node(int k)
	{
		int i,j,u,v;
		for(j=0;j<=k;j++)
		{
			a[j][k]=0;
			a[k][j]=0;	
		}
		n++;
		cout<<"enter edges"<<endl;
		for(i=0;i<=k;i++)
		{
			cin>>u>>v;
			if(u>k || v>k)
			cout<<"invalid"<<endl;
			if(u==-1 && v==-1)
			{
				break;
			}
			else
				a[u][v]=1;
		}	
	}
};

int main()
{

	matrix obj;
	int k,a,s,n,t;
	/*obj.adj_mat();
	obj.display();
	cout<<"enter source"<<endl;
	cin>>k;
	cout<<"bfs: "<<endl;
	obj.bfs(k);
	cout<<"dfs: "<<endl;
	obj.dfs(k);
	
	cout<<endl<<"enter nodE whose indegree and outdegree u want to find:"<<endl;
	cin>>a;
	obj.in_outdegree(a);
	
	cout<<"enter node u want to delete"<<endl;
	cin>>s;
	obj.del_node(s);
	obj.display();
	
	cout<<"enter node u want to add"<<endl;
	cin>>t;
	obj.add_node(t);
	
	obj.display();
	*/
	cout<<"1. adjacency_matrix"<<endl;
	cout<<"2. BFS"<<endl;
	cout<<"3. DFS"<<endl;
	cout<<"4. Indegree_Outdegree"<<endl;
	cout<<"5. delete node"<<endl;
	cout<<"6. add node"<<endl;
	cout<<"7. display"<<endl;
	cout<<"enter choice"<<endl;
	cin>>n;
	do
	{
		switch(n)
		{
			case 1:
				obj.adj_mat();
				obj.display();
				cout<<endl;
				break;
			case 2:
				cout<<"enter source"<<endl;
				cin>>k;
				cout<<"bfs: ";
				obj.bfs(k);
				cout<<endl;
				break;
			case 3:
				cout<<"enter source"<<endl;
				cin>>k;
				cout<<"dfs: ";
				obj.dfs(k);
				cout<<endl;
				break;
			case 4:
				cout<<"enter node whose indegree and outdegree u want to find:"<<endl;
				cin>>a;
				obj.in_outdegree(a);
				break;
			case 5:
				cout<<"enter node u want to delete"<<endl;
				cin>>s;
				obj.del_node(s);
				obj.display();
				break;
			case 6:
				cout<<"enter node u want to add"<<endl;
				cin>>t;
				obj.add_node(t);
	
				obj.display();
				break;
			case 7:
				obj.display();
				break;
			case 8:
				cout<<"exit"<<endl;
				break;		
			default:
				break;
		}
		cout<<endl<<"1. adjacency_matrix"<<endl;
		cout<<"2. BFS"<<endl;
		cout<<"3. DFS"<<endl;
		cout<<"4. Indegree_Outdegree"<<endl;
		cout<<"5. delete node"<<endl;
		cout<<"6. add node"<<endl;
		cout<<"7. display"<<endl;
		cout<<"enter operation u want to perform"<<endl;
		cin>>n;
	}while(n!=8);
}
