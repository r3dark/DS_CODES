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
		int empty()
		{
			if(front==-1 && rear==-1) 
				return 1;
			else
				return 0;
		}
		int full()
		{
			if(rear==size-1)
				return 1;
			else
				return 0;
		}
		void enqueue(int d)
		{
			if(full())
			{
				cout<<"queue is full\n";
			}
			else if(empty())
			{
				front++;
				rear++;
				a[rear]=d;
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
