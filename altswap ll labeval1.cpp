#include<iostream>
#include<string>
#include<stack>
#include<algorithm>
using namespace std;
class vow
{
	struct node
	{
		int data;
		struct node* next;
	};
	node* head;
	public:
		vow()
		{
			head=NULL;
		}
		void addatend(int d);
		void print();
		void change();
};
void vow::addatend(int d)
{
	struct node* curr=head;
	struct node* n=new node;
	n->data=d;
	n->next=NULL;
	if(!head)
	{
		head=n;
	}
	else
	{
		while(curr->next)
		{
			curr=curr->next;
		}
		curr->next=n;
	}
}

void vow::print()
{
	struct node* curr=head;
	while(curr)
	{
		cout<<curr->data<<" ";
		curr=curr->next;
	}
	cout<<endl;
}
/*
class node{
    public:
        int data;
        node* next;
};
*/
//node* vow :: change(node * head)
/*void vow::change()
{
    node* curr=head;
    node* t=head;
    int x,p=1;
    //write your code here
    while(t->next){
        t=t->next;
        p++;
    }
    if(p%2){
        while(curr->next){
            x=curr->next->data;
            curr->next->data=curr->data;
            curr->data=x;
            curr=curr->next->next;
        }
    }
    else{
        while(curr->next){
            x=curr->next->data;
            curr->next->data=curr->data;
            curr->data=x;
            if(curr->next->next!=NULL)
                curr=curr->next->next;
            else
                curr=curr->next;
        }
    }
    //return(head);
}*/
void vow::change()
{
	node* curr=head;
	if(head){
		head=head->next;
		curr->next=head->next;
		head->next=curr;
		curr=curr->next;
	}
	while(curr){
		node* t=curr->next;
		curr->next=t->next;
		if(t->next->next){
			t->next=t->next->next;
			curr->next->next=t;
		}
		else{
			t->next=NULL;
			curr->next->next=t;
		}
	}
}
int main()
{
	vow v;
	int n,d;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>d;
		v.addatend(d);
	}
	v.change();
	v.print();
}
