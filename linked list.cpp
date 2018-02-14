#include<iostream>
#include<algorithm>
using namespace std;
class n
{
	public:
		int data;
		n* next;
};

class LL
{
	n *head;
	public:
		LL()
		{
			head=NULL;
		}
		void addbegin(int d)
		{
			n* n1=new n;
			n1->data=d;
			n1->next=NULL;
			if(!head)
			{
				head=n1;
			}
			else
			{
				n1->next=head;
				head=n1;
			}
		}
		
		void addpos(int d,int pos)
		{
			n* n1=new n;
			n1->data=d;
			n1->next=NULL;
			if(pos==1)
			{
				n1->next=head;
				head=n1;
			}
			else
			{
				int x=1;
				n* current=head;
				while(current && x<pos-1)
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
		
		void addend(int d)
		{
			n* n1=new n;
			n1->data=d;
			n1->next=NULL;
			if(!head)
			{
				head=n1;
			}
			else
			{
				n* current=head;
				while(current->next)
				{
					current=current->next;
				}
				current->next=n1;
			}
		}
		
		void delbeg()
		{
			if(!head)
				return;
			else
			{
				n* temp=head;
				head=head->next;
				delete temp;
				temp=NULL;
			}
		}
		
		void delend()
		{
			if(!head)
				return;
			else if(head->next==NULL)
			{
				delete head;
				head=NULL;
			}
			else
			{
				n* current=head;
				while(current->next->next)
				{
					current=current->next;
				}
				n* temp=current->next;
				current->next=NULL;
				delete temp;
				temp=NULL;
			}
		}
		
		void sort()
		{
			for(n* current=head;current;current=current->next)
			{
				for(n* curr=head;curr->next;curr=curr->next)
				{
					if((curr->data)>(curr->next->data))
					{
						int t=curr->data;
						curr->data=curr->next->data;
						curr->next->data=t;
					}
				}
			}
		}
	
		void print()
		{
			n* current=head;
			while(current)
			{
				cout<<current->data<<" ";
				current=current->next;
			}
			cout<<endl;
//			for(n* current=head;current;current=current->next)
//				cout<<current->data<<"	";
//			cout<<endl;
		}
};

int main()
{
	LL list;
	while(1)
	{
		cout<<"1. Add begin\n2. Add pos\n3. Add end\n4. Del begin\n5. Del end\n6. Print\n7. sort\n0. exit"<<endl;
		int x,data,pos;
		cin>>x;
		switch(x)
		{
			case(1):
				cout << "Enter data: ";
				cin >> data;
				list.addbegin(data);
				break;
			case(2):
				cout << "Enter data: ";
				cin >> data;
				cout << "Enter pos: ";
				cin >> pos;
				list.addpos(data,pos);
				break;
			case(3):
				cout << "Enter data: ";
				cin >> data;
				list.addend(data);
				break;
			case(4):
				list.delbeg();
				break;
			case(5):
				list.delend();
				break;
			case(6):
				list.print();
				break;
			case(7):
				list.sort();
				break;
			default:
				exit(1);
		}
	}
}
