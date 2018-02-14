#include<iostream>
#include<string>
#include<stack>
#include<algorithm>
using namespace std;

int main()
{
	//adj matrix
	int c;
	int d;
	int n;
	cout<<"Enter number of vertices\n";
	cin>>n;
	int x=n*(n-1);
	int a[n][n];
	int inc=0,outc=0;
//	int a[n][n]={{0}};
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			a[i][j]=0;
		}
	}
	while(x)
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
	//indegree-outdegree
	int r;
	while(1)
	{
		cout<<"enter vertex for indegree and outdegree\n";
		cin>>r;
		if(r>=n)
		{
			cout<<"Invalid edge\n";
			continue;
		}
		else if(r==-1)
		{
			break;
		}
		else
		{
//			//Outdegree
//			for(int i=0;i<n;i++)
//			{
//				if(a[r][i]==1)
//				{
//					outc++;
//				}
//			}
//			//Indegree
//			for(int j=0;j<n;j++)
//			{
//				if(a[j][r]==1)
//				{
//					inc++;
//				}
//			}
			for(int i=0;i<n;i++)
			{
				if(a[r][i]==1)
				{
					outc++;
				}
				if(a[i][r]==1)
				{
					inc++;
				}
			}
		}
		cout<<"Indegree		"<<inc<<endl;
		cout<<"Outdegree		"<<outc<<endl;
		inc=0;
		outc=0;
	}
	
}
