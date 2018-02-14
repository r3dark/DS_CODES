#include<iostream>
#include<algorithm>
using namespace std;
class binary
{
	public:
		int n,item;
		int begin,end;
		int a[1000];
		void input();
		void search();
};

void binary::input()
{
	cout<<"enter size of array"<<endl;
	cin>>n;
	cout<<"enter elements of array"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"enter element to find"<<endl;
	cin>>item;
}

void binary::search()
{
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
		cout<<"element found at "<<mid<<"th position"<<endl;
	}
	else
		cout<<"not found"<<endl;
}
int main()
{
	binary obj;
	obj.input();
	obj.search();
	/*int n,item;
	cout<<"enter size of array"<<endl;
	cin>>n;
	int begin=0,end=n-1;
	int a[n];
	cout<<"enter elements of array"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"enter element to find"<<endl;
	cin>>item;
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
		cout<<"element found at "<<mid<<"th position"<<endl;
	}
	else
		cout<<"not found"<<endl;*/
}
