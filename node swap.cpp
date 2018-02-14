#include <iostream>
#include <stdlib.h>
using namespace std;

// A Linked List node

class swap
{
struct node
{
	int data;
	struct node *next;
};
node *head,*ptr;
public:

swap()
{
    head = NULL;
}

    void push( int new_data);
    void printList();
    int countNodes(struct node *s);
    void swapKth( int k);


} sw;
void swap::push(int new_data)
{
    node* t=head;
    node* n= new node;
    n->data=new_data;
    n->next=NULL;
    if(!head){
        head=n;
    }
    else{
        while(t->next){
            t=t->next;
        }
        t->next=n;
    }
}
void swap::printList(){
    node* n=head;
    while(n){
        cout<<n->data<<" ";
        n=n->next;
    }
    cout<<endl;
}

int swap::countNodes(struct node *s){
    int p=1;
    node* curr=s;
    while(curr->next){
        curr=curr->next;
        p++;
    }
    return p;
}
void swap::swapKth(int k){
    node* temp=head;
    node* curr=head;
    int p=1,q=1,x,y,n;
    n=countNodes(head);
    if(k==1){
        x=curr->data;
        while(temp->next){
            temp=temp->next;
        }
        y=temp->data;
    }
    else{
        while(curr->next && p<=k){
            curr=curr->next;
            p++;
            if(p==k){
                x=curr->data;
                break;
            }
        }
        while(temp->next && q<(n-k+1)){
            temp=temp->next;
            q++;
            if(q==(n-k+1)){
                y=temp->data;
                break;
            }
        }
    }
    temp->data=x;
    curr->data=y;
}
int main()
{
int num;
cin>>num;
int val;
	for (int i = num; i >= 1; i--)
    {
    cin>>val;
	sw.push(val);
    }
        int k;
        cin>>k;
		sw.swapKth( k);
		sw.printList();
        return 0;
}
