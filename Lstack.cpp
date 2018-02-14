#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
class node
{
	public:
		int data;
		node* next;
};

class stack
{
	public:
		node* top;
		stack()
		{
			top=NULL;
		}
		void push(int d);
		void pop();
		void display();
		int full();
		int empty();
};

int stack::full()
{
//	if()
}

int stack::empty()
{
	if(!top)
		return 1;
	else
		return 0;
}

void stack::push(int d)
{
	node* newnode=new node;
	newnode->data=d;
	newnode->next=NULL;
	if(!top)
	{
		top=newnode;
	}
	else
	{
		newnode->next=top;
		top=newnode;
	}
}

void stack::pop()
{
	if(empty())
	{
		return;
	}
	else
	{
		node* temp=top;
		top=top->next;
		delete temp;
		temp=NULL;
	}
}

void stack::display()
{
	node* temp=top;
	if(!top)
	{
		cout<<"stack is empty\n";
	}
	cout<<top->data<<endl;
//	while(temp->next)
//	{
//		cout<<temp->data<<endl;
//		temp=temp->next;
//	}
}

int main()
{
	int x,d;
	stack s;
	while(1)
	{
		cout<<"1.Push\n2.Pop\n3.Display\n";
		cin>>x;
		switch(x)
		{
			case(1):
				cout<<"enter element\n";
				cin>>d;
				s.push(d);
				break;
			case(2):
				s.pop();
				break;
			case(3):
				s.display();
				break;
			default:
				exit(1);
		}
	}
}
