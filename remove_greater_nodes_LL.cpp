#include<iostream>
#include<string>
#include<stack>
#include<algorithm>
using namespace std;

class node
{
	public:
		int data;
		node* next;
};

class linkedlist
{
	
	public:
		node* head;
		linkedlist()
		{
			head=NULL;
		}
		void addbegin(int d)
		{
			node* newnode=new node;
			newnode->next=NULL;
			newnode->data=d;
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
		
		void removenode(int d)
		{
			node* t;			
			if(head)
			{
				while(head->data>d)
				{
					t=head;
					head=head->next;
					delete t;
					t=NULL;
					if(!head)			//don't check while condition when head=NULL
					{
						break;
					}
				}
				if(head)				//if head is empty, no need to run while
				{
					node* curr=head;	//to store current head, not the initial one, hence declared here
					while(curr->next)
					{
						if(curr->next->data<=d)
						{
							curr=curr->next;
						}
						else if(curr->next->data>d)
						{
							t=curr->next;
							curr->next=curr->next->next;
							delete t;
							t=NULL;
						}
					}
				}
			}
		}
		
		void print()
		{
			if(!head)
			{
				cout<<"empty list\n";
			}
			node* current=head;
			while(current)
			{
				cout<<current->data<<" ";
				current=current->next;
			}
			cout<<endl;
		}
};

int main()
{
	linkedlist l;
	int x,d;
	while(1)
	{
		cout<<"1.addbegin\n2.removenodes\n3.print\n";
		cin>>x;
		switch(x)
		{
			case(1):
				int s;
				cout<<"enter size\n";
				cin>>s;
				cout<<"enter data\n";
				for(int i=0;i<s;i++)
				{
					cin>>d;
					l.addbegin(d);
				}
				l.print();
				break;
			case(2):
				cout<<"enter number\n";
				cin>>d;
				l.removenode(d);
				break;
			case(3):
				l.print();
				break;
			default:
				exit(1);
		}
	}
}
