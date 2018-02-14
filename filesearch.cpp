#include<iostream>
#include<algorithm>
using namespace std;
class sortandsearch
{
	int n,item,begin,end;
	int* a;
	public:
		sortandsearch()
		{
			cout<<"enter size"<<endl;
			cin>>n;
			a=new int[n];
		}
		void create()
		{
			cout<<"enter elements"<<endl;
			for(int i=0;i<n;i++)
			{
				cin>>a[i];
			}
		}
		void sort()
		{
			for(int i=0;i<n;i++)
			{
				for(int j=0;j<n-1-i;j++)
				{
					if(a[j]>a[j+1])
					{
						int t=a[j];
						a[j]=a[j+1];
						a[j+1]=t;
					}
				}
			}
		}
		void binary()
		{
			cout<<"enter element to find"<<endl;
			cin>>item;
			begin=0;
			end=n-1;
			int mid=(begin+end)/2;
			while(begin<=end && a[mid]!=item)
			{
				if(a[mid]>item)
				{
					end=mid-1;
				}
				else
				{
					begin=mid+1;
				}
				mid=(begin+end)/2;
			}
			if(a[mid]==item)
			{
				cout<<"element found at "<<mid+1<<"th position"<<endl;
			}
			else
				cout<<"not found"<<endl;
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
	sortandsearch ss;
	int x;
	while(1)
	{
		cout<<"1.create array		2.sort array\n3.search element	4.print array\n";
		cin>>x;
		switch(x)
		{
			case(1):
				ss.create();
				break;
			case(2):
				ss.sort();
				break;
			case(3):
				ss.binary();
				break;
			case(4):
				ss.print();
				break;
				break;
			default:
				exit(1);
		}
	}
}
