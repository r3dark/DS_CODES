#include<iostream>
#include<algorithm>
using namespace std;
class queue
{
	int rear;
	int front;
	int size;
	int *a;
	public:
		queue()
		{
			front=-1;
			rear=-1;
			cout<<"enter size\n";
			cin>>size;
			a=new int[size];
		}
		int empty()								//underflow
		{
			if(front==-1 && rear==-1) 
				return 1;
			else
				return 0;
		}
		int full()								//overflow
		{
			if(rear==size-1 && front==0)
				return 1;
			else
				return 0;
		}
		void enqueue(int d)
		{
			if(full() || rear==front-1)			//3,4,5,rear->6,front->2
			{
				cout<<"queue is full\n";
			}
			else if(empty())
			{
				front++;
				rear++;
				a[rear]=d;
			}
			else if(rear==size-1)				//circular
			{
				rear=0;
				a[rear]=d;
				while(front<size-1)
					front++;
			}
			else
			{
				rear++;
				a[rear]=d;
			}
		}
		void dequeue()
		{
			if(empty())
			{
				cout<<"queue is empty\n";
			}
			else if(front==rear)
			{
				front=-1;
				rear=-1;
			}
			else if(front==size-1 && rear<front)
			{
				front=0;
			}
			else
			{
				int t=a[front];
				front++;
			}
		}
		void print()
		{
			if(empty())
			{
				cout<<"queue is empty\n";
			}
			else if(rear<front)
			{
				rear=0;
				for(int i=rear;i<=front;i++)
				{
					cout<<a[i]<<"	";
				}
				cout<<endl;
			}
			else
			{
				for(int i=front;i<=rear;i++)
				{
					cout<<a[i]<<"	";
				}
			cout<<endl;
			}
		}
};

int main()
{
	queue q;
	int x,d;
	while(1)
	{
		cout<<"1. enqueue\n2. dequeue\n3. print\n";
		cin>>x;
		switch(x)
		{
			case(1):
				cout<<"enter element\n";
				cin>>d;
				q.enqueue(d);
				break;
			case(2):
				q.dequeue();
				break;
			case(3):
				q.print();
				break;
			default:
				exit(1);
		}
	}
}
