#include<iostream>
using namespace std;
struct node
{
    node *next;
    int data;
};
class ll
{
    node *head;
    public:
    ll()
    {
        head=NULL;
    }
    void addbegin()
    {
    	node *temp=head;
        int value; 
        cout<<"enter data"<<endl;
        cin>>value;
        node *nn=new node;
        nn->data=value;
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
    void addend()
    {
        /*int value;
        cout<<"enter data"<<endl;
        cin>>value;
        node *nn=new node;
        nn->next=NULL;
        nn->data=value;*/
         int value;
        cout<<"enter data"<<endl;
        cin>>value;
        node *n=new node;
        n->data=value;
        n->next=NULL;
        if(!head)
        {
        	head=n;
        	n->next=head;
		}
		else
		{
			node *current=head;
			while(current->next!=head)
			{
			current=current->next;
			}
			current->next=n;
			n->next=head;
		}
        
    }
    void addpos()
    {
    	int value, pos;
    	cout<<"enter data"<<endl;
    	cin>>value;
    	cout<<"enter position"<<endl;
    	cin>>pos;
    	node *nn=new node;
    	nn->next=NULL;
    	nn->data=value;
    	if(pos==1)
    	{
    		node *temp=head;
    		node *curr=head;
    		nn->next=temp;
    		while(curr->next)
    		{
    			curr=curr->next;
			}
			curr->next=head;
				head=nn;
		}
		else
		{
			node *temp=head;
			node *curr=head;
			int p=1;
			while(temp->next && p<pos-1)
			{
				temp=temp->next;
				p++;
			}
			if(temp->next==head)
			{
				cout<<"the position doesn't exist"<<endl;
			}
			else
			{
				nn->next=temp->next;
				temp->next=nn;
			}
		}
    	
	}
	void delbegin()
	{
		node *temp=head;
		node *t=head;
		while(temp->next!=head)
		{
			temp=temp->next;
		}
		temp->next=head->next;
		head=head->next;
		delete t;
		t=NULL;
	}
	void delend()
	{
		node *temp=head;
		while(temp->next->next!=head)
		{
			temp=temp->next;
		}
		node *t=temp->next;
		temp->next=head;
		delete t;
		t=NULL;
	}
	void delpos()
	{
		int pos, p=1;
		cout<<"enter position to be deleted"<<endl;
		cin>>pos;
		if(pos==1)
		{
			node *temp=head;
			node *t=head;
			
			while(temp->next!=head)
			{
				temp=temp->next;
			}
			temp->next=head->next;
			head=head->next;
			delete t;
			t=NULL;
		}
		else
		{
			int p=1;
			node *temp=head;
			head=head->next;
			while(temp->next!=head && p<pos-1)
			{
				temp=temp->next;
				p++;
			}
			if(temp->next==head)
			{
				cout<<"position doesn't exist"<<endl;
			}
			else
			{
				node *t=temp->next;
				temp->next=t->next;
				node *curr=head;
				
				delete t;
				t=NULL;
			}
		}
	}
	void search()
	{
		node *temp=head;
    	int x, f=0, p=1, y=1;
    	cout<<"enter the element to be searched"<<endl;
    	cin>>x;
    	while(temp->next!=head)
    	{
    		
    	if(temp->data==x)
    	{
    		f++;
    		break;
		}
		
			y++;
		
	
			temp=temp->next;
     
	}
	if(f>0)
	{
		cout<<"available at "<<y<<endl;
	}
	else
	{
		cout<<"not available"<<endl;
	}
	}
    void print()
    {
        node *current=head;
        while(current->next!=head)
        {
            cout<<current->data<<" ";
            current=current->next;
        }
        cout<<current->data<<endl;
    }
};
int main()
{
    ll obj;
    int x;
    while(1)
    {
        cout<<"1.add begin"<<endl<<"2.add end"<<endl<<"3.add position"<<endl<<"4.delete begin"<<endl<<"5.delete  end"<<endl<<"6.delete position"<<endl<<"7.print"<<endl<<"8.search";
        cin>>x;
        switch(x)
        {
        case(1):
            obj.addbegin();
            break;
        case(2):
            obj.addend();
           	break;
       	case(3):
           	obj.addpos();
           	break;
        case(4):
       		obj.delbegin();
       		break;
       	case(5):
       		obj.delend();
       		break;
       	case(6):
       		obj.delpos();
       		break;
        case(7):
            obj.print();
            break;
            case(8):
            	obj.search();
            	break;
        }
    }

}
