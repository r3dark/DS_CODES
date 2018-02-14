#include<iostream>
#include<algorithm>
using namespace std;
class stack
{
	int* a;
	int top1,top2;
	int size;
	public:
		stack()
		{
			cout<<"enter size"<<endl;
			cin>>size;
			a=new int[size];
			for(int i=0;i<size;i++)
			{
				a[i]=0;
			}
			top1=(-1);
			top2=size+1;
		}
		int empty1()
		{
			if(top1==(-1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		int empty2()
		{
			if(top2==size+1)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		/*int empty()
		{
			if(top1==(-1) || top2==size+1)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}*/
		/*int full()
		{
			if(top1==(size/2) || top2==(size/2)+1)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}*/
		int full1()
		{
			if(top1==(size/2))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		int full2()
		{
			if(top2==(size/2)+1)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		void pushsim(int d1, int d2)
		{
			if(full1() || full2())
			{
				cout<<"stack is full"<<endl;
			}
			else
			{
				top1++;
				a[top1]=d1;
				top2--;
				a[top2]=d2;
			}
		}
		void push1(int d1)
		{
			if(full1())
			{
				cout<<"stack is full"<<endl;
			}
			else
			{
				top1++;
				a[top1]=d1;
			}
		}
		void push2(int d2)
		{
			if(full2())
			{
				cout<<"stack is full"<<endl;
			}
			else
			{
				top2--;
				a[top2]=d2;
			}
		}
		int pop1()
		{
			int t1;
			if(empty1())
			{
				cout<<"stack is empty"<<endl;
			}
			else
			{
				t1=a[top1];
				t1--;
			}
		}
		int pop2()
		{
			int t2;
			if(empty2())
			{
				cout<<"stack is empty"<<endl;
			}
			else
			{
				t2=a[top2];
				t2++;
			}
		}
		void display()
		{
			for(int i=top1;i>=0;i--)
			{
				cout<<a[i]<<"	";
			}
			cout<<endl;
			for(int i=top2;i<=size;i++)
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
	int x,d,d1,d2;
	while(1)
	{
		cout<<"1. push in 1st\n2. push in 2nd\n3. push simultaneously\n4. pop from 1st\n5. pop from 2nd\n6. display"<<endl;
		cin>>x;
		switch(x)
		{
			case(1):
				cout<<"enter data\n";
				cin>>d;
				s.push1(d);
				break;
			case(2):
				cout<<"enter data\n";
				cin>>d;
				s.push2(d);
				break;
			case(3):
				cout<<"enter data for 1st and 2nd stack respectively"<<endl;
				cin>>d1>>d2;
				s.pushsim(d1,d2);
				break;
			case(4):
				d=s.pop1();
				cout<<d<<endl;
				break;
			case(5):
				d=s.pop2();
				cout<<d<<endl;
				break;
			case(6):
				s.display();
				break;
			default:
				exit(1);
		}
	}
}
