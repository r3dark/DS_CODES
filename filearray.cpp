#include<iostream>
#include<algorithm>
using namespace std;
class arr
{
	int n;
	int *a;
	public:
		arr()
		{
			cout<<"enter size of array"<<endl;
			cin>>n;
			a=new int [n];
		}
		void create()
		{
			cout<<"enter elements"<<endl;
			for(int i=0;i<n;i++)
			{
				cin>>a[i];
			}
		}
		void addpos()
		{
			cout<<"enter element to insert"<<endl;
			int s;
			cin>>s;
			cout<<"enter position"<<endl;
			int p;
			cin>>p;
			p=p-1;
			for(int i=n;i>p;i--)
			{
				a[i]=a[i-1];
			}
			a[p]=s;
			for(int i=0;i<=n;i++)
			{
				cout<<a[i]<<" ";
			}
			cout<<endl;
		}
		void delpos()
		{
			cout<<"enter index at which element is to be deleted"<<endl;
			int s;
			cin>>s;
			if(s<n)
			{
				for(int i=s;i<n;i++)
				{
					a[i]=a[i+1];
				}
				for(int i=0;i<n-1;i++)
				{
					cout<<a[i]<<" ";
				}
				cout<<endl;
			}
			else
				cout<<"wrong index"<<endl;
		}
		void delelem()
		{
			cout<<"enter element to delete"<<endl;
			int s,f=0;
			cin>>s;
			for(int i=0;i<n;i++)
			{
				if(a[i]==s)
					f++;
				if(a[i]==s)
				{
					for(int j=i;j<n;j++)
					{
						a[j]=a[j+1];
					}
				}
			}
			if(f>0)
			{
				for(int i=0;i<n-1;i++)
				{
					cout<<a[i]<<" ";
				}
			}
			else if(f==0)
				cout<<"element not found"<<endl;
			cout<<f;
		}
		void search()
		{
			cout<<"enter element to find"<<endl;
			int s,f=0;
			cin>>s;
			for(int i=0;i<n;i++)
			{
				if(s==a[i])
				{
					cout<<"element is at "<<i+1<<"th position"<<endl;
					f=1;
				}
			}
			if(f==0)
					cout<<"element not found"<<endl;
		}
		void print()
		{
			for(int i=0;i<n;i++)
			{
				cout<<a[i]<<"	";
			}
			cout<<endl;
		}
};

int main()
{
	arr a;
	int x;
	while(1)
	{
		cout<<"1.create array			2.add at given position\n3.delete at given position	4.delete a given element\n5.search an element		6.print\n";
		cin>>x;
		switch(x)
		{
			case(1):
				a.create();
				break;
			case(2):
				a.addpos();
				break;
			case(3):
				a.delpos();
				break;
			case(4):
				a.delelem();
				break;
			case(5):
				a.search();
				break;
			case(6):
				a.print();
				break;
			default:
				exit(1);
		}
	}
}
