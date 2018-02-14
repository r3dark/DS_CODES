#include<iostream>
#include<string>
#include<stack>
#include<algorithm>
using namespace std;
class insertion
{
	int key;
	int n;
	int *a;
	public:
		insertion()
		{
			cout<<"Enter size\n";
			cin>>n;
			a=new int[n];
		}
		void input();
		void sort();
		void print();
};
//input array
void insertion::input()
{
	cout<<"Enter elements\n";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
}
//sort
void insertion::sort()
{
	int j;
	for(int i=1;i<n;i++)
	{
		key=a[i];
		for(j=i-1;j>=0;j--)
		{
			if(a[j]>key)
			{
				a[j+1]=a[j];
			}
			else
				break;
		}
		a[j+1]=key;
		for(int i=0;i<n;i++)			//for each iteration
		{
			cout<<a[i]<<"	";
		}
		cout<<endl;
	}
}
//print
void insertion::print()
{
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<"	";
	}
}
//main
int main()
{
	insertion s;
	s.input();
	s.sort();
	s.print();
}
