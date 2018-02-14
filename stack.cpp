#include<iostream>
#include<algorithm>
using namespace std;
class stack
{
	int* a;
	int top;
	int size;
	public:
	stack()
	{
		cout<<"enter size"<<endl;
		cin>>size;
		a=new int[size];
		/*for(int i=0;i<size;i++)
		{
			a[i]=0;
		}*/
		top=-1;
	}	
	int empty()
	{
		if(top==(-1))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	
	int full()
	{
		if(top==size-1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	
	void push (int data)
	{
		if(full())
		{
			cout<<"stack is full"<<endl;
		}
		else
		{
			top++;
			a[top]=data;
		}
	}
	
	int pop()
	{
		int t;
		if(empty())
		{
			cout<<"stack is empty"<<endl;
		}
		else
		{
			t=a[top];
			top--;
		}
		return t;
	}
	
	void display()
	{
		if(empty())
			cout<<"stack is empty\n";
		for(int i=0;i<=top;i++)
		{
			cout<<a[i]<<"	";
		}
		cout<<endl;
		/*while(!empty())
		{
			cout<<a[top]<<" ";
			top--;
		}
		cout<<endl;*/
	}
};

int main()
{
	stack s;
	int x,d;
	while(1)
	{
		cout<<"1. push\n2. pop\n3. display"<<endl;
		cin>>x;
		switch(x)
		{
			case(1):
				cout<<"enter data\n";
				cin>>d;
				s.push(d);
				break;
			case(2):
				d=s.pop();
				cout<<"top is "<<d<<endl;
				//s.pop();
				break;
			case(3):
				s.display();
				break;
			default:
				exit(1);
		}
	}
}
