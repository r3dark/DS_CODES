#include<iostream>
#include<string>
#include<stack>
#include<algorithm>
using namespace std;

class node
{
	public:
		char data;
		node* next;
};

class vow
{
	node* head;
	node* current;
	node* temp;
	public:
		vow()
		{
			head=NULL;
		}
		node* find_vowel(node* head);
		void print(node* head);
		node* addatend();
};

node* vow :: addatend()
{
	int n;
	cin>>n;
	for(int i=0; i<n; i++)
	{
		temp = new node;
		cin>>temp->data;
		temp->next = NULL;
		if(!head)
			head=temp;
		else
		{
			current = head;
			while(current->next)
				current = current->next;
			current->next = temp;
		}
	}
	return head;
}

node* vow :: find_vowel(node* head)
{
    //write your code here
    while(head->data=='a' || head->data=='e' || head->data=='i' || head->data=='o' || head->data=='u'){
        node* t=head;
        head=head->next;
        delete t;
        t=NULL;
        if(!head)
        {
        	break;
		}
    }
    if(head){
    	node* curr=head;
    	while(curr->next){
	        if(curr->next->data=='a' || curr->next->data=='e' || curr->next->data=='i' || curr->next->data=='o' || curr->next->data=='u'){
	            node* t=curr->next;
	            curr->next=curr->next->next;
	            delete t;
	            t=NULL;
	        }
	        else
	            curr=curr->next;
	    }
	}
    return (head);
}

void vow :: print(node* head)
{
	current=head;
	while(current)
	{
		cout<<current->data<<" ";
		current=current->next;
	}
}

int main()
{
	vow obj;
	node* a=obj.addatend();
	node* b=obj.find_vowel(a);
	obj.print(b);
}
