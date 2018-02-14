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
	node* tail;
	node* temp;
	node* pre;
	public:
	    void reverse_ll();
		list()
		{
			head = NULL;
		}
		void create(int );
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
node* one;
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
				tail=n;
			}
		}

		void addpos (int d, int pos)
		{
			node* n = new node;
			n -> data = d;
			n -> next = NULL;
			n -> prev = NULL;
			if(pos == 1)
			{
				n -> next = head;
				head -> prev = n;
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


		void print ()
		{
		    if(head==NULL)
            {
                cout<<"list is empty";

            }
            else
            {
                node* curr = head;
			while (curr)
			{
				cout<<curr->data<<" ";
				curr=curr->next;
			}
            }


		}
};
void list:: create(int num)
{
    if(head==NULL)
    {
        head=new node();
        head->data=num;
        head->prev=NULL;
        head->next=NULL;
        tail=head;

    }
    else
    {
        temp=head;

        while(temp->next!=NULL)
        {

            temp=temp->next;
        }
        one=new node();
        one->prev=temp;
        one->data=num;
        one->next=NULL;
        temp->next=one;
        tail=one;
    }
}

void list::  reverse_ll()
{
    if(head==NULL)
    {
        cout<<"list is empty";
    }
    else
    {
    temp=tail;
    while(temp->prev!=NULL)
    {
        cout<<temp->data;
        temp=temp->prev;
    }

	}
}

int main()
{
	list l;
	int s,d,p,n,num;
	cout<<"enter the number of elements";
	cin>>n;
	for(int i=0;i<n;i++)
    {
        cin>>num;
        l.create(num);
    }
	while(1)
	{
		cout<<endl<<"1. add begin\n2. add end\n3. add pos\n4. del begin\n5. del end\n6. print\n7. Reverse\n0. exit\n"<<endl;
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
				l.print();
				break;
            case(7):
				l.reverse_ll();
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
