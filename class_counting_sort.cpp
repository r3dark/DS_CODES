#include<iostream>
#include<string>
#include<stack>
#include<algorithm>
using namespace std;

class counting
{
	int n,max;
	int *a,*output;
	public:
		counting()
		{
			cout<<"enter size\n";
			cin>>n;
			a=new int(n);
			output=new int(n);
		}
		void insert_and_max();
		void count_per_element();
		void sort();
		void print();
};

void counting::insert_and_max()
{
	cout<<"enter elements\n";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];							//5 3 2 0 1 5 3 2 4 6 7 9 8 5 4
		if(a[i]>max)
		{
			max=a[i]+1;						//max element+1 or else won't be able to
											//access highest element for incrementation
											//during hashing
		}
	}
}

void counting::count_per_element()
{
	int count[max]={0};
	for(int i=0;i<n;i++)
	{
		count[a[i]]++;
	}
	for(int i=0;i<max;i++)
	{
		count[i+1]=count[i]+count[i+1];
	}
}

void counting::sort()
{
	for(int i=n-1;i>=0;i--)					//for stable sorting
	{
		int x=a[i];
		int y=--count[x];
		output[y]=x;
	}
}

void counting::print()
{
//	cout<<"\ncount array:\n";
//	for(int i=0;i<max;i++)
//	{
//		cout<<count[i]<<"	";
//	}
	cout<<"\noutput array:\n";
	for(int i=0;i<n;i++)
	{
		cout<<output[i]<<"	";
	}
}

int main()
{
	counting c;
	c.insert_and_max();
	c.count_per_element();
	c.sort();
	c.print();
}

//class counting
//{
//	int n,max;
//	int *a,*output;
//	public:
//		counting()
//		{
//			cout<<"enter size\n";
//			cin>>n;
//			a=new int(n);
//			output=new int(n);
//		}
//		void insert_and_max();
//		void sort();
//		void print();
//};
//
//void counting::insert_and_max()
//{
//	cout<<"enter elements\n";
//	for(int i=0;i<n;i++)
//	{
//		cin>>a[i];							//5 3 2 0 1 5 3 2 4 6 7 9 8 5 4
//		if(a[i]>max)
//		{
//			max=a[i]+1;						//max element+1 or else won't be able to
//											//access highest element for incrementation
//											//during hashing
//		}
//	}
//	
//}
//
//void counting::sort()
//{
//	int count[max]={0};
//	for(int i=0;i<n;i++)
//	{
//		count[a[i]]++;
//	}
//	for(int i=0;i<max;i++)
//	{
//		count[i+1]=count[i]+count[i+1];
//	}
//	for(int i=n-1;i>=0;i--)					//for stable sorting
//	{
//		int x=a[i];
//		int y=--count[x];
//		output[y]=x;
//	}
//}
//
//void counting::print()
//{
////	cout<<"\ncount array:\n";
////	for(int i=0;i<max;i++)
////	{
////		cout<<count[i]<<"	";
////	}
//	cout<<"\noutput array:\n";
//	for(int i=0;i<n;i++)
//	{
//		cout<<output[i]<<"	";
//	}
//}
//
//int main()
//{
//	counting c;
//	c.insert_and_max();
//	c.sort();
//	c.print();
//}
