#include<iostream>
using namespace std;
struct node
{
    node *prev;
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
        int value;
        cout<<"enter value"<<endl;
        cin>>value;
        node *nn=new node;
        nn->next=NULL;
        nn->prev=NULL;
        nn->data=value;
        if(!head)
            head=nn;
        else
        {
            nn->next=head;
            nn->prev=NULL;
            head=nn;
        }
    }
    void addend()
    {
        int value;
        cout<<"enter value"<<endl;
        cin>>value;
        node *nn=new node;
        nn->next=NULL;
        nn->prev=NULL;
        nn->data=value;
        if(!head)
            head=nn;
        else
        {
            node *temp=head;
            while(temp->next)
            {
                temp=temp->next;
            }
            nn->next=NULL;
            nn->prev=temp;
            temp->next=nn;
        }
    }
    void addpos()
    {
        int value, pos;
        cout<<"enter the position"<<endl;
        cin>>pos;
        cout<<"enter value"<<endl;
        cin>>value;
        node *nn=new node;
        nn->prev=NULL;
        nn->next=NULL;
        nn->data=value;
        if(pos==1)
        {
           head=nn;
        }
        else
        {
            int p=1;
            node *temp=head;
            while(temp && p<pos-1)
                {
                temp=temp->next;
                p++;
                }
                if(temp==NULL)
                    cout<<"Out of scope"<<endl;
                else
                {
                    nn->next=temp->next;
                    nn->prev=temp;
                    temp->next=nn;
                    temp->next->prev=nn;
                }
        }
    }
    void delbegin()
    {
        if(!head)
        {
            return;
        }
        else if(head->next==NULL)
        {
            delete head;
            head=NULL;
        }
        else
        {
            node *temp=head;
            head=head->next;
            delete temp;
            temp=NULL;
        }
    }
    void delend()
    {
        if(!head)
        {
            return;
        }
        else if(head->next==NULL)
        {
            delete head;
            head=NULL;
        }
        else
        {
         node *temp=head;
         while(temp->next->next)
            temp=temp->next;
         node *t=temp->next;
        temp->next=NULL;
         delete t;
         t=NULL;
        }
    }
  /*  void delpos()
    {
        cout<<"enter position to be deleted";
        cin>>pos;
        if(pos==1)
        {
            node *temp=head;
            head=head->next;
            delete temp;
            temp=NULL;
        }
        else
        {

        }
    }*/
    void search()
    {
    	node *temp=head;
    	int x, f=0, p=1, y=1;
    	cout<<"enter the element to be searched"<<endl;
    	cin>>x;
    	while(temp!=NULL)
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
    int x;

    ll obj;
    while(1)
    {
        cout<<"1.add begin"<<endl<<"2.add end"<<endl<<"3.add position"<<endl<<"4.delete beginning"<<endl<<"5.delete end"<<endl<<"6. search"<<endl;
        cin>>x;
        switch(x){
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
           	obj.search();
           	break;
        }
        obj.print();
}

}
