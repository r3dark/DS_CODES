#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
};
class LL{
    node* head;
    public:
    LL(){
        head=NULL;
    }
    void addbeg(int d){
        node* newnode = new node;
        newnode->data=d;
        newnode->next=NULL;
        if(!head){
            head=newnode;
        }
        else{
            newnode->next=head;
            head=newnode;
        }
    }
    void insert(int d){
        node* curr=head;
        node* newnode= new node;
        newnode->data=d;
        newnode->next=NULL;
        if(d<head->data){
            newnode->next=head;
            head=newnode;
        }
        else{
            while((d>curr->next->data) && curr!=NULL){
                curr=curr->next;
            }
            newnode->next=curr->next;
            curr->next=newnode;
        }
    }
    void print(){
        node* curr=head;
        while(curr){
            cout<<curr->data<<endl;
            curr=curr->next;
        }
        //cout<<endl;
    }
    
};
 int main(){
     LL n;
     int d=0,s;
     while(1){
     	cin>>d;
     	if(d!=-1)
         	n.addbeg(d);
        else
        	break;
     }
     cin>>s;
     n.insert(s);
     n.print();
 }
