#include<iostream>
#include<stdlib.h>
#include<map>
#include<algorithm>
using namespace std;
/* A linked list node */
class node
{
public:
 int data;
 node *next;
};
class llist
{
node *start;
public:
llist()
{
    start=NULL;
}
void removeDuplicates();
void push(int );
void printList();
};
/*void llist::removeDuplicates()
{
    //complete the code
    node* curr=start;
    int n=1;
    node* temp=start;
    while(temp->next){
        temp=temp->next;
        n++;
    }
    int a[n];
    int b[n];
    int i=0;
    while(curr){
        a[i]=curr->data;
        curr=curr->next;
        i++;
    }
    for(i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]==a[j]){
                a[j]=a[j+1];
            }
        }
    }
    for(i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}*/
void llist::removeDuplicates()
{
    //complete the code
    node* curr=start;
    int n=1;
    node* temp=start;
    while(temp->next){
        temp=temp->next;
        n++;
    }
    int a[n];
    int b[n];
    int i=0;
    while(curr){
        a[i]=curr->data;
        curr=curr->next;
        i++;
    }
    for(i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]==a[j]){
                a[j]=0;
            }
        }
    }
    for(i=0;i<n;i++){
        if(a[i]!=0)
            cout<<a[i]<<" ";
    }
}
void llist::push(int new_data)
{
    //complete the code
    node* t=start;
    node* n= new node;
    n->data=new_data;
    n->next=NULL;
    if(!start){
        start=n;
    }
    else{
        while(t->next){
            t=t->next;
        }
        t->next=n;
    }
}
void llist::printList()
{
    //complete the code
    /*node* n=start;
    while(n){
        cout<<n->data<<" ";
        n=n->next;
    }
    cout<<endl;*/
}
int main()
{
  
    llist l1;
    int n,nm,i;
    cin>>n;
   for(i=0;i<n;i++)
   {
      cin>>nm;
      l1.push(nm);
   }
  l1.removeDuplicates();
  l1.printList();
}
