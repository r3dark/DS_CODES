#include<iostream>
#include<string>
#include<stack>
#include<algorithm>
using namespace std;

class matrix
{
	public:
		int n,x;
		int **a;
		matrix()
		{
			cout<<"Enter number of vertices\n";
			cin>>n;
			x=n*(n-1);
			//2-D dynamic memory allocation
			a=(int**)malloc(sizeof(int*)*n);
			for(int i=0;i<n;i++)
			{
				a[i]=(int*)malloc(sizeof(int)*n);
			}
			for(int i=0;i<n;i++)
			{
				for(int j=0;j<n;j++)
				{
					a[i][j]=0;
				}
			}
		}
		void adjmat()
		{
			int c,d;
			while(x--)
			{
				cin>>c>>d;
				if(c==(-1) || d==(-1))
				{
					break;
				}
				else if(c>=n || d>=n)
				{
					cout<<"Invalid Input\n";
				}
				else
				{
					a[c][d]=1;
				}
			}
		}
		void display()
		{
			for(int i=0;i<n;i++)
			{
				for(int j=0;j<n;j++)
				{
					cout<<a[i][j]<<"	";
				}
				cout<<endl;
			}
		}
};

int main()
{
	matrix m;
	m.adjmat();
	m.display();
}
