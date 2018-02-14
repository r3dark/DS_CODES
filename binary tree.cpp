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
		node* build(int a[],int n)
		{
			node* root=NULL;
			if(a[n]!=0)
			{
				node* temp=new node;
				temp->data=a[n];
				temp->left=build(a,(2*n)+1);
				temp->right=build(a,(2*n)+2);
				root=temp;
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
//		node* tpl(node* tl)
//		{
//			if(!tl)
//				return tl;
//			else
//			{
//				tl->left=tpl(tl->left);
//				cout<<tl->data<<"	";
//			}
//			return tl;
//		}
//		node* tpr(node * tr)
//		{
//			if(!tr)
//				return tr;
//			else
//			{
//				cout<<tr->data<<"	";
//				tr->right=tpr(tr->right);
//			}
//			return tr;
//		}
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
};

int main()
{
	tree t;
	int d,n;
//	int a[]={2,3,4,5,6,7,8,0,0,11,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
	int a[]={1,2,3,4,5,6,7,0,0,0,0,0,0,0,0,0};
//	int a[]={0,1,2,0,0};
	node* x=t.build(a,0);
	cout<<"Preorder:\n";
	t.preprint(x);
	cout<<"\nInorder:\n";
	t.inprint(x);
	cout<<"\nPostorder:\n";
	t.postprint(x);
	cout<<"\ntopprint:\n";
	t.topprint(x);
}
