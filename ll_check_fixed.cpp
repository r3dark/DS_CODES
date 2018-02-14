#include<iostream>
using namespace std;
struct node
{
    node *next;
    int data;
    node *prev;
};
class ll
{
    node *head=NULL;
    public:
    void insertend()
    {
        int value;


        cout<<"enter value"<<endl;
        cin>>value;
        node *newnode=new node;
        newnode->data=value;		// important to initialize here as
        newnode->next=NULL;			// new node is created but not what it is pointing at?
        newnode->prev=NULL;			// have to set NULL/address and value as soon as node is made
        if(!head)
        {
            head=newnode;
        }
        else{
                node *temp=head;
        while(temp->next)
        {
            temp=temp->next;
        }
        temp->next=newnode;			// now if no value and pointer is set to newnode before, temp->next is pointing to a node which has no data and its prev
									//and next are not specified
        newnode->data=value;		//then no need to set value here again
        newnode->next=NULL;			//and no need to set newnode->NULL again, coz already did above
        newnode->prev=temp;
    }
    }
    void print()
    {
        node *curr=head;
        while(curr)
        {
            cout<<curr->data<<" ";
            curr=curr->next;
        }
        cout<<endl;
    }
};
int main()
{
    ll obj;
    obj.insertend();
    /*obj.insertend();
    obj.insertend();
    obj.insertend();*/
    obj.print();
}
