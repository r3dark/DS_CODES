#include<iostream>
#include<string>
#include<stack>
#include<algorithm>
using namespace std;

class bsort
{
	int n,t;
	int *a;
	public:
		bsort()
		{
			cout<<"Enter size\n";
			cin>>n;
			a=new int[n];
		}
		void input()
		{
			cout<<"Enter elements\n";
			for(int i=0;i<n;i++)
			{
				cin>>a[i];
			}
		}
		void bubble()
		{
			for(int i=0;i<n-1;i++)
			{
				int f=0;
				for(int j=0;j<n-1-i;j++)
				{
					if(a[j]>a[j+1])
					{
						t=a[j];
						a[j]=a[j+1];
						a[j+1]=t;
						f=1;
					}
				}
				for(int i=0;i<n;i++)
				{
					cout<<a[i]<<"  ";
				}
				cout<<endl;
				if(f==0)
				{
					break;
				}
			}
		}
};

int main()
{
	bsort s;
	s.input();
	s.bubble();
}
