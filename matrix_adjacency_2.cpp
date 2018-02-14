#include<iostream>
#include<string>
#include<stack>
#include<algorithm>
using namespace std;

int main()
{
	int c;
	int d;
	int n;
	cout<<"Enter number of vertices\n";
	cin>>n;
	int x=n*(n-1);
	int a[n][n];
//	int a[n][n]={{0}};
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			a[i][j]=0;
		}
	}
	while(x!=0)
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
		x--;
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
}
