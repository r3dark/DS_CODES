#include<iostream>
#include<string>
#include<stack>
#include<algorithm>
using namespace std;

int main()
{
	int c;
	int d;
	int n,x;
	cout<<"Enter number of vertices\n";
	cin>>n;
	cin>>x;
	int a[n][n];
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
			break;
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
	cout<<"After adding edge\n";
	int e;
	cin>>e;
	int k=e+n;
	for(int i=0;i<k;i++)
	{
		a[k-1][i]=0;
		a[i][k-1]=0;
	}
	cin>>c>>d;
	a[c][d]=1;
	for(int i=0;i<k;i++)
	{
		for(int j=0;j<k;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
}
