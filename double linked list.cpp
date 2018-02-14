#include<iostream>
#include<algorithm>
using namespace std;
class node
{
	public:
		int data;
		node* next;
		node* prev;
};

class list
{
	node* head;
	public:
		list()
		{
			head = NULL;
		}
		void addbegin (int d)
		{
			node* n = new node;
			n->data = d;
			n->prev = NULL;
			n->next = NULL;
			if(!head)
			{
				head = n;
			}
			else
			{
				n->next = head;
				head = n;
			}
		}
		
		void addend (int d)
		{
			node* n = new node;
			n -> data = d;
			n -> prev = NULL;
			n -> next = NULL;
			if (!head)
			{
				head = n;
			}
			else
			{
				node* curr = head;
				while (curr -> next)
				{
					curr = curr -> next;
				}
				curr -> next = n;
				n -> prev = curr;
			}
		}
		
		void addpos (int d, int pos)
		{
			node* t = head;
			node* n = new node;
			n -> data = d;
			n -> next = NULL;
			n -> prev = NULL;
			if(pos == 1)
			{
				n -> next = t;
				t -> prev = n;
				head = n;
			}
			else
			{
				int p = 1;
				node* curr = head;
				while (curr && p < pos - 1)
				{
					curr = curr -> next;
					p++;
				}
				if (curr == NULL)
				{
					cout<<"position doesn't exit"<<endl;
				}
				else
				{
					n -> next = curr -> next;
					curr -> next = n;
					n -> prev = curr;
					n -> next -> prev = n;
				}
			}
		}
		
		void delbegin ()
		{
			if(!head)
				return;
			else
			{
				node* temp = head;
				if (head -> next == NULL)
				{
					delete head;
					head = NULL;
				}
				else
				{
					head = head -> next;
					head -> prev = NULL;
					delete temp;
					temp = NULL;
				}
			}
		}
		
		void delend()
		{
			if(!head)
				return;
			else if (head -> next == NULL)
			{
				delete head;
				head = NULL;
			}
			else
			{
				node* curr = head;
				while (curr -> next -> next)
				{
					curr = curr -> next;
				}
				node * temp = curr -> next;
				curr -> next = NULL;
				delete temp;
				temp = NULL;
			}
		}
		
		void delpos(int pos)
		{  
			node* curr = head;
			if (!head)
				return;
			int p = 1;
			while (curr && p < pos - 1);
			{
				curr = curr -> next;
				p++;
			}
			if (curr == NULL)
			{
				cout<<"invalid position\n";
			}
			else
			{
				curr = head;
				node* temp = curr -> next;
				curr -> next = curr -> next -> next;
				curr -> next -> prev = curr;
				delete temp;
				temp = NULL;
			}
		}
		
		void print ()
		{
			node* curr = head;
			while (curr)
			{
				cout<<curr->data<<" <==> ";
				curr=curr->next;
			}
			cout<<"NULL"<<endl;
			/*while(curr->prev != NULL)
			{
				cout<<curr->data<<" <==> ";
				curr = curr -> prev;
			}*/
		}
};

int main()
{
	list l;
	int s,d,p;
	while(1)
	{
		cout<<"1. add begin\n2. add end\n3. add pos\n4. del begin\n5. del end\n6. del position\n7. print\n0. exit\n"<<endl;
		cin>>s;
		switch(s)
		{
			case(1):
				cout<<"enter data\n";
				cin>>d;
				l.addbegin(d);
				break;
			case(2):
				cout<<"enter data\n";
				cin>>d;
				l.addend(d);
				break;
			case(3):
				cout<<"enter data\n";
				cin>>d;
				cout<<"enter position\n";
				cin>>p;
				l.addpos(d,p);
				break;
			case(4):
				l.delbegin();
				break;
			case(5):
				l.delend();
				break;
			case(6):
				cout<<"enter position where element to delete"<<endl;
				cin>>p;
				l.delpos(p);
				break;
			case(7):
				l.print();
				break;
			default:
				exit(1);
		}
	}
	/*cout<<"ENTER NO OF ELEMENTS"<<endl;
	cin>>s;
	for(int i=s;i>0;i--)
	{
		cout<<"enter data"<<endl;
		cin>>d;
		//l.addbegin(d);
		l.addend(d);
	}
	l.print();*/
}
