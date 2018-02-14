#include<iostream>
#include<algorithm>
using namespace std;
class n
{
	public:
		char data;
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
		void addbegin(char d)
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
		
		void addpos(char d,int pos)
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
		
		void addend(char d)
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
		void vowel()
		{
			n* h=head;
			n* temp=head;
			n* current=head;
			if(!head)
				return;
			while(current)
			{
				if(h->data == 'a' || h->data == 'e' || h->data == 'i' || h->data == 'o' || h->data == 'u' )
				{
					head=h->next;
					current=head;
					delete temp;
					temp=NULL;
				}
				else if(current->next->data == 'a' || current->next->data == 'e' || current->next->data == 'i' || current->next->data == 'o' || current->next->data == 'u' )
				//else if(current->data == 'a' || current->data == 'e' || current->data == 'i' || current->data == 'o' || current->data == 'u' )
				{
					temp=current->next;
					current->next=current->next->next;
					delete temp;
					temp=NULL;
				}
				else
					current=current->next;
			}
			//current=current->next;
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
		}
};

int main()
{
	LL list;
	while(1)
	{
		cout<<"1. Add begin\n2. Add pos\n3. Add end\n4. Del begin\n5. Del end\n6. delete vowel\n7. Print\n0. exit"<<endl;
		int x,pos;
		char data;
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
				list.vowel();
				break;
			case(7):
				list.print();
				break;
			default:
				exit(1);
		}
	}
}
