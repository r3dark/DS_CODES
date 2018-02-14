#include<iostream>
#include<string>
#include<stack>
#include<algorithm>
using namespace std;
class node
{
	public:
		node* right;
		int data;
		node* left;
};
class tree
{
	public:
		node* build(node* root,int n)
		{
//			node* temp;
			if(root==NULL)
			{
				node* temp=new node;
				temp->data=n;
				temp->left=NULL;
				temp->right=NULL;
				root=temp;
			}
			if(n<root->data)
			{
				root->left=build(root->left,n);
			}
			if(n>root->data)
			{
				root->right=build(root->right,n);
			}
			if(n==root->data)
			{
				return root;
			}		
		return root;
		}
		void preprint(node* p)
		{
			if(!p)
				return;
			else
			{
				cout<<p->data<<"	";
				preprint(p->left);
				preprint(p->right);
			}
		}
		void inprint(node* p)
		{
			if(!p)
				return;
			else
			{
				inprint(p->left);
				cout<<p->data<<"	";
				inprint(p->right);
			}
		}
		void postprint(node* p)
		{
			if(!p)
				return;
			else
			{
				postprint(p->left);
				postprint(p->right);
				cout<<p->data<<"	";
			}
		}
		void tpl(node* tl)
		{
			if(!tl)
				return;
			else
			{
				tpl(tl->left);
				cout<<tl->data<<"	";
			}
		}
		void tpr(node * tr)
		{
			if(!tr)
				return;
			else
			{
				cout<<tr->data<<"	";
				tpr(tr->right);
			}
		}
		void topprint(node* p)
		{
			if(!p)
				return;
			else
			{
				tpl(p);
				tpr(p->right);
			}
		}
		node* deletenode(node *r,int key)
        {	
			if(r==NULL)
		    {
				return r;
		    }
			else if(r->data>key)
			{
				r->left=deletenode(r->left,key);
			}
			else if(r->data<key)
			{
				r->right=deletenode(r->right,key);
			}
			else
			{
				if(r->left==NULL)
				{
					node *temp=r->right;
					return temp;
				}
				else if(r->right==NULL)
				{
					node *temp=r->left;
					return temp;
				}
				else
				{
					node *temp=minvalue(r->right);
					r->data=temp->data;
					r->right=deletenode(r->right,temp->data);
				}
			}
			return r;
		}
	node *minvalue(node *root)
	{
		node *current=root;
		while(current->left) 
		current=current->left;
		return current;
	}
	int height(node* root)
	{
		int a,b;
		if(!root)
			return -1;
		else
		{
			a=height(root->left);
			b=height(root->right);
		}
		if(a>b)
			return a+1;
		else
			return b+1;
	}
	int leaf(node *root)
	{
		int a,b;
		if(!root)
		{
			return 0;
		}
		else if(!root->left && !root->right)
		{
			return 1;
		}
		else
		{
			a=leaf(root->left);
			b=leaf(root->right);
		}
		return a+b;
	}
	int totalnodes(node *root)
	{
		int a,b;
		if(!root)
		{
			return 1;
		}
		else if(!root->left && !root->right)
		{
			return 1;
		}
		else
		{
			a=totalnodes(root->left);
			b=totalnodes(root->right);	
		}
		return a+b;
	}
};

int main()
{
	tree t;
	int d,n;
//	int h;
	node* root=NULL;
	node* y;
	while(1)
	{
		cout<<"1.Insertion\n2.print\n3.delete\n4.height\n5.leaf nodes\n6.Total nodes\n";
		int x;
		cin>>x;
		switch(x)
		{
			case (1):
				cout<<"enter no. of elements\n";
				cin>>n;
				cout<<"enter elements\n";
				for(int i=0;i<n;i++)
				{
					cin>>d;
					root=t.build(root,d);
				}
				break;
			case 2:
				cout<<"Preorder:\n";
				t.preprint(root);
				cout<<"\nInorder:\n";
				t.inprint(root);
				cout<<"\nPostorder:\n";
				t.postprint(root);
				cout<<"\ntopprint:\n";
				t.topprint(root);
				cout<<endl;
				break;
			case 3:
				cout<<"\nenter element to delete\n";
				int q;
				cin>>q;
				y=t.deletenode(root,q);
				t.inprint(y);
				cout<<endl;
				break;
			case 4:
				int h;
				h=t.height(root);
				cout<<"height of tree is: "<<h<<endl;
				break;
			case 5:
			{
				int l=t.leaf(root);
				cout<<"No. of leaf nodes are: "<<l<<endl;
				break;
			}
			case 6:
				int tn;
				tn=t.totalnodes(root);
				cout<<"No. of nodes are: "<<tn<<endl;
				break;
			default:
				exit(1);
		}
	}
}
