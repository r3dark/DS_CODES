#include<iostream>
#include<string>
#include<stack>
#include<algorithm>
using namespace std;
class selection
{
	int min;
	int n;
	int *a;
	//int a[100];
	public:
		selection()
		{
			cout<<"Enter size\n";
			cin>>n;
			a=new int[n];				//comment for static
		}
		void input();
		void sort();
		void print();
};
//input array
void selection::input()
{
	cout<<"Enter elements\n";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
}
//sort
void selection::sort()
{
	int t;
	for(int i=0;i<n-1;i++)
	{
		min=i;
		for(int j=i+1;j<n;j++)
		{
			if(a[min]>a[j])
			{
				min=j;
			}
		}
		t=a[i];
		a[i]=a[min];
		a[min]=t;
		for(int i=0;i<n;i++)				//for each swap
		{
			cout<<a[i]<<"	";
		}
		cout<<endl;
	}
}
//print
void selection::print()
{
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<"	";
	}
}
//main
int main()
{
	selection s;
	s.input();
	s.sort();
	s.print();
}
