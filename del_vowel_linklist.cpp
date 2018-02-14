#include<iostream>
#include<stack>
using namespace std;
class node{
	public:
		char data;
		node* next;
};
class vow{
	node* head;
	node* current;
	node* temp;
	public:
		vow()
		{
			head=NULL;
		}
		
	 void addatend()
		{int n;
			cout<<"Enter no of Elements: ";
            cin>>n;
              for(int i=0; i<n; i++)
              {
                cout<<"Enter "<<i+1<<" element : "<<endl;
  
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
		}
		
		void find_vowel()
		{
		current=head;
		
		if(!head)
		return;
		
		if(current!=NULL)
		{
			while(current->data=='a' || current->data=='e' || current->data=='i' || current->data=='o' || current->data=='u')
			{
				temp=current;
				head=current->next;
			//	cout<<"current data if loop"<<current->data<<endl;
			//
				current=current->next;
					temp->next=NULL;
				delete temp;
			}
		}
		
		current=head;
		while(current->next)
		{
			if(current->next->data=='a' || current->next->data=='e' || current->next->data=='i' || current->next->data=='o' || current->next->data=='u' )
			{
				temp=current->next;
				current->next=temp->next;
				delete temp;
				temp=NULL;
			//	deleteatgivenpos(current->next->data);
				
			}
			else
			current=current->next;
		}
		
		/*voi/	`d deleteatgivenpos(int p){
		//int p;
		//cout<<"enter elem u want to delete"<<endl;
		//cin>>p;
	if(p==1)
	{
		if(head==NULL)
		return;
		
		else
		{
			temp=head;
			head=head->next;
			//free (temp);
			delete temp;
			temp=NULL;
		}
	}
	else
	{
		int x=1;
		current=head;
		while(current!=NULL && x<p-1)
		{
			current=current->next;
			x++;
		}
		temp=current->next;
		current->next=temp->next;
		delete temp;
		temp=NULL;
		
	}
	if(current==NULL)
	cout<<"not found"<<endl;
	}
	*/
	
		
			
		}
		
		void print()
		{
			current=head;
			while(current)
			{
				cout<<current->data<<"-->";
				current=current->next;
			}
			cout<<"NULL"<<endl;
		}
		
		
};

int main()
{
	vow obj;
	obj.addatend();
	obj.print();
	obj.find_vowel();
	obj.print();
}
