#include<iostream>
#include<string>
#include<stack>
#include<algorithm>
using namespace std;

class node
{
	public:
		int n;
		node *next;
};

class graph
{
	node *head;
	public:
		graph()
		{
			head=NULL;
		}
		void addedge(int v)
		{
			node *newnode=new node; 
			newnode->next=NULL;
			newnode->n=v;
			if(!head)
			{
				head=newnode;
			}
			else
			{
				newnode->next=head;
				head=newnode;
			}
		}
		void displist(node *head)
		{
			node *current=head;
			while(current)
			{
				cout<<current->n<<" ";
				current=current->next;
			}
		}
};

int main()
{
	graph g;
	node *head;
	int n;
	cout<<"Enter No. of vertices\n";
	cin>>n;
	int a[n][n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i][0];
		g.addedge(a[i][head]);
	}
	while(1)
	{
		int v;
		cout<<"enter vertex\n";
		cin>>v;
		g.displist(v);
	}
	
//	for(int i=0;i<n;i++)
//	{
//		cout<<a[i]<<" ";
//	}
	
}
