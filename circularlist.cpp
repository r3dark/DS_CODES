#include<iostream>
#include<algorithm>
using namespace std;
class node
{
	public:
		int data;
		node* next;
};

class list
{
	node* head;
	public:
		list()
		{
			head=NULL;
		}
		void addbegin(int d)
		{
			node* nn= new node;
			node* temp= new node;
			temp=head;
			nn->data=d;
			nn->next=NULL;
			if(!head)
			{
				head=nn;
				nn->next=head;
			}
			else
			{
				nn->next=head;
				while(temp->next!=head)
				{
					temp=temp->next;
				}
				head=nn;
				temp->next=head;
			}
		}
		
		void addend( int d)
		{
			node* nn = new node;
			nn->data=d;
			nn->next=head;
			if(!head)
			{
				head=nn;
				nn->next=head;
			}
			else
			{
				node* curr=head;
				while(curr->next!=head)
				{
					curr=curr->next;
				}
				curr->next=nn;
				//nn->next=head;
			}
		}
		
		void print()
		{
			node* curr=head;
			
			while(curr->next!=head)
			{
				cout<<curr->data<<" --> ";
				curr = curr->next;
			}
			cout<<curr->data;
			cout<<" --> HEAD"<<endl;
		}
};

int main()
{
	list l;
	while(1)
	{
		cout<<"1. Add begin\n2. Add end\n3. Add Pos\n4. Del begin\n5. Del End\n6. Print\n0. exit"<<endl<<endl;
		int x, d, p;
		cin >> x;
		switch(x)
		{
			case(1):
				cout << "Enter data: ";
				cin >> d;
				l.addbegin(d);
				break;
			case(2):
				cout << "Enter data: ";
				cin >> d;
				l.addend(d);
				break;
			case(3):
				cout << "Enter data & pos: ";
				cin >> d >> p;
				//l.addPos(d, p);
				break;
			case(4):
				//l.delBegin();
				break;
			case(5):
				//l.delEnd();
				break;
			case(6):
				l.print();
				break;
			default:
				exit(1);
		}
	}
}
