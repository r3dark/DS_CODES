#include<iostream>
using namespace std;

class node
{
	public:
		int data;
		node* next;
};

class list
{
	node*head;		//??
	
	public:
	list()
	{
		head = NULL;
	}
	void addBegin(int d)
	{
		node* nn = new node;		//node creation- nn initialised with data members of class node
		nn -> data = d;
		nn -> next = NULL;
		if(!head)
			head = nn;
		else
		{
			nn -> next = head;
			head = nn;
		}
	}
	void addEnd(int d)
	{
		node* nn = new node;
		nn -> data = d;
		nn -> next = NULL;
		if(!head)
			head = nn;
		else
		{
			node* curr = head;
			while(curr -> next)
				curr = curr -> next;
			curr -> next = nn;
		}
	}
	void addPos(int d, int pos)
	{
		node* nn = new node;
		nn -> data = d;
		nn -> next = NULL;
		if(pos == 1)
		{
			nn -> next = head;
			head = nn;
		}
		else
		{
			int p = 1;
			node* current = head;
			while(current && p < pos - 1)
			{
				current = current -> next;
				p++;
			}
			if(current == NULL)
				printf("Position doesn't exist\n");
			else
			{
				nn -> next = current -> next;
				current -> next = nn;
			}
		}
	}
	void delBegin()
	{
		if(!head)
			return;
		else
		{
			node* t = head;
			head = head -> next;
			delete t;
			t = NULL;
		}
	}
	void delEnd()
	{
		if(!head)
			return;
		else if(head -> next == NULL)
		{
			delete head;
			head = NULL;
		}
		else
		{
			node* curr = head;
			while(curr -> next -> next)
				curr = curr -> next;
			node* t = curr -> next;
			curr -> next = NULL;
			delete t;
			t = NULL;
		}
	}
	void print()
	{
		node* curr = head;
		while(curr)
		{
			cout << curr -> data<<" ";
			curr = curr -> next;
		}
		cout << endl;
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
				l.addBegin(d);
				break;
			case(2):
				cout << "Enter data: ";
				cin >> d;
				l.addEnd(d);
				break;
			case(3):
				cout << "Enter data & pos: ";
				cin >> d >> p;
				l.addPos(d, p);
				break;
			case(4):
				l.delBegin();
				break;
			case(5):
				l.delEnd();
				break;
			case(6):
				l.print();
				break;
			default:
				exit(1);
		}
	}
}
