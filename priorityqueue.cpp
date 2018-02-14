#include<iostream>
#include<string>
#include<stack>
#include<algorithm>
using namespace std;

class n
{
	public:
		int data;
		n* next;
		int prior;
};

class LL
{
	n *head;
	public:
		LL()
		{
			head=NULL;
		}
		void priority(int d,int pos)
		{
			n* n1=new n;
			n1->data=d;
			n1->next=NULL;
			n1->prior=pos;
			if(n1->prior==1)
			{
				n1->next=head;
				head=n1;
			}
			else
			{
				int x=1;
				n* current=head;
				while(current && x<n1->prior-1)
				{
					current=current->next;
					x++;
				}
				if(current==NULL)
				{
					cout<<"position doesn't exit"<<endl;
				}
				else
				{
					n1->next=current->next;
					current->next=n1;
				}
			}
		}
		void print()
		{
			/*n* current=head;
			while(current)
			{
				cout<<current->data<<" ";
				current=current->next;
			}
			cout<<endl;*/
			for(n* current=head;current;current=current->next)
				cout<<current->data<<"	";
			cout<<endl;
		}
};

int main()
{
	LL list;
	while(1)
	{
		cout<<"1. Add element\n2. Print\n0. exit"<<endl;
		int x,data,pos;
		cin>>x;
		switch(x)
		{
			case(1):
			{
				cout << "Enter data: ";
				cin >> data;
				cout << "Enter pos: ";
				cin >> pos;
				list.priority(data,pos);
				break;
			}
			case(2):
			{
				list.print();
				break;
			}
			default:
			{
				exit(1);
			}
		}
	}
}
